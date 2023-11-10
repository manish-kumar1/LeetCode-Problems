/*
Q. Employee Bonus

Table: Employee
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| empId       | int     |
| name        | varchar |
| supervisor  | int     |
| salary      | int     |
+-------------+---------+
empId is the column with unique values for this table.
Each row of this table indicates the name and the ID of an employee in addition to their salary and the id of their manager.
 
Table: Bonus
+-------------+------+
| Column Name | Type |
+-------------+------+
| empId       | int  |
| bonus       | int  |
+-------------+------+
empId is the column of unique values for this table.
empId is a foreign key (reference column) to empId from the Employee table.
Each row of this table contains the id of an employee and their respective bonus.
 
Write a solution to report the name and bonus amount of each employee with a bonus less than 1000.
Return the result table in any order.

The result format is in the following example.

Example 1:
Input: 
Employee table:
+-------+--------+------------+--------+
| empId | name   | supervisor | salary |
+-------+--------+------------+--------+
| 3     | Brad   | null       | 4000   |
| 1     | John   | 3          | 1000   |
| 2     | Dan    | 3          | 2000   |
| 4     | Thomas | 3          | 4000   |
+-------+--------+------------+--------+
Bonus table:
+-------+-------+
| empId | bonus |
+-------+-------+
| 2     | 500   |
| 4     | 2000  |
+-------+-------+
Output: 
+------+-------+
| name | bonus |
+------+-------+
| Brad | null  |
| John | null  |
| Dan  | 500   |
+------+-------+
*/
-- Employee table
CREATE TABLE EmpGoogle(
			empId INT,
            name VARCHAR(40),
            supervisor INT,
            SALARY INT
);

INSERT INTO EmpGoogle
(empId, name, supervisor, salary)
VALUES
(3, 'Brad', NULL, 4000),
(1, 'john', 3, 1000),
(2, 'Dan', 3, 2000),
(4, 'Thomas', 3, 4000);

SELECT *FROM EmpGoogle;

-- Bonus Table
CREATE TABLE Bonus(
			empId INT,
			bonus INT
);

INSERT INTO bonus
(empId, bonus)
VALUES
(2, 500),
(4, 2000);

SELECT *FROM BONUS;

-- ACCORDING TO QUESTION

SELECT E.name, B.bonus
FROM EmpGoogle AS E
LEFT JOIN Bonus AS B
ON E.empId = B.empId
WHERE bonus < 1000 OR bonus IS NULL;