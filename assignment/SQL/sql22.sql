CREATE DATABASE db_4;
use db_4;
CREATE TABLE employee (
    emp_id INT PRIMARY KEY,
    emp_name VARCHAR(20) NOT NULL,
    emp_contact DECIMAL(10,0),
    age DECIMAL(3,0) CHECK (age > 18),
    city VARCHAR(20) DEFAULT 'ahemdabad'
);
 alter table employee add salary decimal (10,2);
 describe employee
 INSERT INTO employee value (emp_id, emp_name, emp_contact, age, city, salary) 
(1, 'Amit Verma',      9876543210, 25, 'Delhi',      35000.00),
(2, 'Priya Sharma',    9123456780, 28, 'Mumbai',     42000.00),
(3, 'Rohit Singh',     9988776655, 30, 'Kolkata',    39000.00),
(4, 'Sneha Patil',     9090909090, 24, 'Pune',       45000.00),
(5, 'Vikas Mishra',    9812345678, 27, 'Bhopal',     38000.00),
(6, 'Anjali Gupta',    9900112233, 26, 'Jaipur',     52000.00),
(7, 'Sanjay Kumar',    9555667788, 32, 'Chennai',    47000.00),
(8, 'Meena Rani',      9666778899, 29, 'Agra',       36000.00),
(9, 'Deepak Yadav',    9777888999, 31, 'Lucknow',    41000.00),
(10, 'Kavita Joshi',   9898989898, 23, 'Indore',     34000.00);
describe employee

ALTER TABLE employee
DROP COLUMN age;

