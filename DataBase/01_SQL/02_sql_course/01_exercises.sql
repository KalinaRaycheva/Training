--Task 1: Provide the number of orders per city
select shipcity, count(orderid) as countorders
from Sales.Orders
group by(shipcity);

----------------------------------------------------------------------------------------------
 --Task 2: Provide the top 3 cities with highest number of orders for each employee.
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
--Top 3 products per category that generated biggest revenue. 
with cte as (
    select categoryname, pp.productid, sum(od.unitprice * od.qty * (1*discount)) as revenue
    from Production.Products as pp
   		join Production.Categories as pc on pp.categoryid = pc.categoryid
   		join Sales.OrderDetails as od on pp.productid = od.productid
    group by categoryname, pp.productid
)
select *
from cte c1
where revenue in (select top(3) with ties revenue 
                  from cte c2
                  where c1.categoryname = c2.categoryname
                  order by revenue desc);