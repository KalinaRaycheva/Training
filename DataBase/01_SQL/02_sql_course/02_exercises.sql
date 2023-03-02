-- Task 1: Return the least ordered product per category
with cte as(
select count(sod.orderid) as countorderid, sod.productid, pp.productname, pp.categoryid
from Sales.OrderDetails as sod
    join Production.Products as pp on sod.productid = pp.productid
group by pp.categoryid, sod.productid, pp.productname
)
select *
from cte as c1
where c1.countorderid = (select min(countorderid) from cte as c2 where c1.categoryid = c2.categoryid)
----------------------------------------------------------------------------------------------
--Task 2: Provide the top 3 cities with highest number of orders for each employee.(THE SAME LIKE TASK 3)
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
--Task 3: Return the last ordered product per category using GROUP BY
with cte as(
select sod.productid, pp.productname, pp.categoryid, min(orderdate) as minorderdate
from Sales.OrderDetails as sod
	join Production.Products as pp on sod.productid = pp.productid
	join Sales.Orders as so on so.orderid = sod.orderid
group by pp.categoryid, sod.productid, pp.productname
)
select *
from cte as c1
where c1.minorderdate = (select min(minorderdate) from cte as c2 where c1.categoryid = c2.categoryid)