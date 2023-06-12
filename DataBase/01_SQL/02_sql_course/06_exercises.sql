/*Create a list of all orders from the USA clients,
with the total value of their orders, total value of their orders
for the year and also make a running total per year.
List of columns: clientid, orderdate, orderid, totalValue, yearlyOrdersTotalValue, yearlyRunningTotal
*/
with cte as (
select o.custid, c.companyname, o.orderid, o.orderdate, year(orderdate) y,
    sum(qty * unitprice * (1 - discount)) totalSum
from sales.orders o
    join sales.Customers c on o.custid = c.custid
    join sales.OrderDetails od on o.orderid = od.orderid
where c.country = 'USA'
group by o.custid, c.companyname, o.orderid,  o.orderdate, year(orderdate)
)
select *
from cte as c
    left join (select y, companyname, sum(totalSum) as totSum from cte group by y, companyname) as c2
                on c.y = c2.y and c.companyname = c2.companyname
order by c.custid, c.companyname, c.orderid

---------------------------------------------------------------------------------------------------------------------------------------------
--clients and number of products per category 
select cs.custid, cs.companyname,
    sum(case when categoryname = 'Beverages' then qty else 0 end) as [Beverages],
    sum(case when categoryname = 'Condiments' then qty else 0 end) as [Condiments],
    sum(case when categoryname = 'Confections' then qty else 0 end) as [Confections],
    sum(case when categoryname = 'Dairy Products' then qty else 0 end) as [Dairy Products],
    sum(case when categoryname = 'Grains/Cereals' then qty else 0 end) as [Grains/Cereals],
    sum(case when categoryname = 'Meat/Poultry' then qty else 0 end) as [Meat/Poultry],
    sum(case when categoryname = 'Produce' then qty else 0 end) as [Produce],
    sum(case when categoryname = 'Seafood' then qty else 0 end) as [Seafood]
from sales.orders o
    join sales.orderdetails od on o.orderid = od.orderid
    join production.products p on p.productid = od.productid
    join production.categories cat on cat.categoryid = p.categoryid
    join sales.customers cs on cs.custid = o.custid
group  by cs.custid, cs.companyname
order by cs.custid, cs.companyname
-------------------------------------------------------------------------------------------------------------------------------------------------
--list of all clients and their orders and running total per year for the orders by orderdate
select distinct c.custid, c.companyname, o.orderid, o.orderdate,
    sum(od.unitprice * od.qty * (1 - discount)) over (partition by c.custid, year(orderdate)) as yearTotal,
    sum(od.unitprice * od.qty * (1 - discount)) over (partition by c.custid, year(orderdate), o.orderid) as orderTotal,
    sum(od.unitprice * od.qty * (1 - discount)) over
        (partition by c.custid, year(orderdate) order by o.orderdate, o.orderid) as yearRunTotal,        
    sum(od.unitprice * od.qty * (1 - discount)) over
        (partition by c.custid order by o.orderdate, o.orderid) as yearRunTotal,
    sum(od.unitprice * od.qty * (1 - discount)) over
        (partition by year(orderdate) order by o.orderdate, o.orderid) as yearRunTotal
from sales.customers c
    left join sales.orders o on c.custid = o.custid
    left join sales.orderdetails od on o.orderid = od.orderid
order by c.custid, o.orderdate, o.orderid
