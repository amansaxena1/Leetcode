# Write your MySQL query statement below
select a.id from weather a join weather b where datediff(a.recorddate, b.recorddate) = 1 and a.temperature > b.temperature;