--list of the clients that have total revenue at least 15% over the previous year's
select * from (
	select so.custid,
	sum(case when year(so.orderdate) = 2006 then (sod.unitprice * sod.qty * (1-sod.discount)) else 0 end) as y2006,
	sum(case when year(so.orderdate) = 2007 then (sod.unitprice * sod.qty * (1-sod.discount)) else 0 end) as y2007,
	sum(case when year(so.orderdate) = 2008 tahen (sod.unitprice * sod.qty * (1-sod.discount)) else 0 end) as y2008
	from sales.orders AS so
	join Sales.OrderDetails AS sod on so.orderid=sod.orderid
	group by so.custid) t
where y2007 > (y2006 * 1.15) and y2008 > (y2007 * 1.15) and y2006 > 0
order by custid
-----------------------------------------------------------------------------------------------------------------------------------------------
--which client has bigges unrealized profit because of non delivery
SELECT TOP(1)
    o.custid,
      SUM(od.qty * od.unitprice * (1 - od.discount)) as total
FROM Sales.Orders o
    JOIN Sales.OrderDetails od ON o.orderid =  od.orderid
WHERE o.shippeddate is NULL
GROUP BY o.custid
order by total
-----------------------------------------------------------------------------------------------------------------------------------------------
--order shippers by non-delivered profits loss
SELECT TOP(1)
    o.custid,
      SUM(od.qty * od.unitprice * (1 - od.discount)) as total
FROM Sales.Orders o
    JOIN Sales.OrderDetails od ON o.orderid =  od.orderid
WHERE o.shippeddate is NULL
GROUP BY o.custid
order by total desc
----------------------------------------------------------------------------------------------
-- Provide the top 3 cities with highest number of orders for each employee.
with cte as (
select shipcity, empid, count(orderid) as orderCount
from sales.orders 
group by shipcity, empid
) 
select *
from cte c1
where orderCount in (select top(3) with ties orderCount 
					 from cte c2
               		 where c1.empid = c2.empid
					 order by orderCount DESC);
----------------------------------------------------------------------------------------------
--top 5 countries that had biggest value from discounts
SELECT TOP (5)
    o.shipcountry,
      SUM(od.qty * od.unitprice * od.discount) as total
FROM Sales.Orders o
    JOIN Sales.OrderDetails od ON o.orderid =  od.orderid
WHERE o.shippeddate is NULL
GROUP BY o.shipcountry
ORDER BY total DESC           
