# Write your MySQL query statement below
# select a.name from salesperson a where a.sales_id not in (select c.sales_id from orders c where c.com_id in (select b.com_id from company b where name = "RED"));
select a.name from salesperson a where a.sales_id not in (select sales_id from company join orders on company.com_id = orders.com_id where name = "RED");