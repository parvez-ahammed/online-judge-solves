/* 
 Please write a DELETE statement and DO NOT write a SELECT statement.
 Write your T-SQL query statement below
 */


DELETE FROM Person WHERE id NOT IN (SELECT min(id) FROM person GROUP BY email);