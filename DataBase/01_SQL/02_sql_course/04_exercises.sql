----------------------------------------------------------------------------------------------
--Make a pivot of product categories as rows and years as columns.
--Calculate total revenue per year for each product category.
select *
from (
select year(orderdate) as y, p.categoryid, sum(od.unitprice * (1 - discount) * qty) as revenue
from sales.orderDetails od
    join sales.orders o on o.orderid = od.orderid
    join Production.Products p on od.productid = p.productid
group by year(orderdate), p.categoryid
) a
pivot (sum(revenue) for y in ([2006], [2007], [2008])) p
----------------------------------------------------------------------------------------------
Which customers had their orders handled by employees from the same country
----------------------------------------------------------------------------------------------
select distinct c.custid, c.country, e.country
from sales.customers c
    join sales.orders o on o.custid = c.custid
    join hr.Employees e on e.empid = o.empid
where c.country = e.country
----------------------------------------------------------------------------------------------
--Extract all discontinued products that have been ordered
--and calculate how much money where "lost", because of their discounts. 
select p.productid, sum(od.unitprice * qty * discount) as loss
from sales.orderdetails od
    join Production.Products p on od.productid = p.productid
where p.discontinued = 1
group by p.productid
