/* Write your T-SQL query statement below */
UPDATE Salary
SET sex = IIF(sex = N'f', N'm', N'f');


