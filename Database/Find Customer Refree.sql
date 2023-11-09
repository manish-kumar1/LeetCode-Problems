/*
Q. Find Customer Refree

Table: Customer
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
| referee_id  | int     |
+-------------+---------+
In SQL, id is the primary key column for this table.
Each row of this table indicates the id of a customer, their name, and the id of the customer who referred them.
 
Find the names of the customer that are not referred by the customer with id = 2.
Return the result table in any order.

The result format is in the following example.

Example 1:

Input: 
Customer table:
+----+------+------------+
| id | name | referee_id |
+----+------+------------+
| 1  | Will | null       |
| 2  | Jane | null       |
| 3  | Alex | 2          |
| 4  | Bill | null       |
| 5  | Zack | 1          |
| 6  | Mark | 2          |
+----+------+------------+
Output: 
+------+
| name |
+------+
| Will |
| Jane |
| Bill |
| Zack |
+------+
*/

CREATE TABLE CUSTOMER(
	ID INT NOT NULL AUTO_INCREMENT,
    NAME VARCHAR(40),
    REFREE_ID INT,
    PRIMARY KEY(ID)
);

INSERT INTO CUSTOMER
(ID, NAME, REFREE_ID)
VALUES
(1, 'WILL', NULL),
(2, 'JANE', NULL),
(3, 'ALEX', 2),
(4, 'BILL', NULL),
(5, 'JACK', 1),
(6, 'MARK', 2);

SELECT *FROM CUSTOMER;

-- ACCORDING TO QUESTION

SELECT NAME 
FROM CUSTOMER
WHERE REFREE_ID != 2 OR REFREE_ID IS NULL;

