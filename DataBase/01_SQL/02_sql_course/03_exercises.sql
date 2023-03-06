--Task 5: Provide the top 3 cities with highest number of orders for each employee.(THE SAME LIKE TASK 3)
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
--Task 6: Return the last ordered product per category using GROUP BY
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
----------------------------------------------------------------------------------------------
--Task 7: Top ten products that generated biggest difference in total values between default price (products.unitprice) and sold price (orderdetails.unitprice and discount)
select top 10 p.productid, p.productname, sum((p.unitprice - (od.unitprice * (1- discount))) * qty) as totDiff
from sales.orderDetails od
    join Production.Products p on od.productid = p.productid
group by p.productid, p.productname
order by totDiff desc
/*with cte as (
select pp.productid, pp.unitprice as defaultPrice, (sod.unitprice - (sod.unitprice * discount)) as soldPrice
from Production.Products as pp
	join Sales.OrderDetails as sod on pp.productid = sod.productid
where sod.unitprice <> pp.unitprice
)
select top(10) with ties (c1.defaultPrice - c1.soldPrice) as diff, *
from cte as c1
order by diff;*/