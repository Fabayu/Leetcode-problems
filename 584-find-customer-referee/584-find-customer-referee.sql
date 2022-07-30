# Write your MySQL query statement below
select c.name from customer c where c.id not in (select id from customer where referee_id = 2);
