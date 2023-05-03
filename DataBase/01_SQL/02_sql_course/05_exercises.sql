----------------------------------------------------------------------------------------------
-- Exercise 4: Make a pivot between shipment countries and employees, return number of shipped orders.
select * from (
    select shipcountry, empid, orderid
    from sales.orders
    where shippeddate is not null
) a
pivot (count(orderid) for empid in ([1], [2], [3], [4], [5], [6], [7], [8], [9])) p
 ---------------------------------------------------------------------------------------------
-- Exercise 5: Pivot between countries and categories, but exclude USA and Brazil. Return total number of products shipped to these countries per category.
----------------------------------------------------------------------------------------------
select *
from (
    select shipcountry, categoryid, qty
    from sales.orders o
        join sales.OrderDetails od on o.orderid = od.orderid
        join Production.Products p on p.productid = od.productid
    where shippeddate is not null
    and shipcountry not in ('USA', 'Brazil')
) a
pivot (sum(qty) for categoryid in ([1], [2], [3], [4], [5], [6], [7], [8])) p
----------------------------------------------------------------------------------------------
--Provide the top 3 cities with highest number of orders for each employee.
with cte as (
select empid, shipcity, count(orderid) as ordrsnum
from sales.orders
group by empid, shipcity
)
select *
from (
select *, rank() over (partition by empid order by ordrsnum desc) as rn
from cte
) a
where rn <= 3
----------------------------------------------------------------------------------------------
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
group by o.custid, c.companyname, o.orderid,  o.orderdate, year(orderdate)
)
select *
from cte as c
    left join (select y, companyname, sum(totalSum) as totSum from cte group by y, companyname) as c2
                on c.y = c2.y and c.companyname = c2.companyname
order by c.custid, c.companyname, c.orderid
----------------------------------------------------------------------
