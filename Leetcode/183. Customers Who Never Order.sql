/* Write your T-SQL query statement below */
SELECT Name AS Customers
FROM Customers 
WHERE NOT EXISTS 
(SELECT CustomerID FROM Orders WHERE Customers.ID=Orders.CustomerID)