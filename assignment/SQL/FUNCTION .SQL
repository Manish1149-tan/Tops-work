create database db_2;departments
use db_2;
  CREATE TABLE departments (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50)
);
CREATE TABLE employees (
    emp_id INT PRIMARY KEY,
    emp_name VARCHAR(50),
    gender CHAR(1),
    salary DECIMAL(10,2),
    hire_date DATE,
    dept_id INT,
    FOREIGN KEY (dept_id) REFERENCES departments(dept_id)

);

insert into departments values(1,"HR"),
(2, "FINANCE"),
(3, "SALES"),
(4,"IT");
INSERT INTO employees VALUES
(101, 'Amit Sharma', 'M', 60000, '2021-03-12', 3),
(102, 'Priya Singh', 'F', 75000, '2019-11-20', 2),
(103, 'Ravi Patel', 'M', 55000, '2022-01-05', 3),
(104, 'Neha Verma', 'F', 90000, '2018-07-15', 4),
(105, 'Karan Mehta', 'M', 50000, '2023-04-10', 1),
(106, 'Sneha Rao', 'F', 95000, '2020-05-25', 4);

select * from employees;-- Display all columns from the employees table.

-- Show only employee names and their salaries.

- - List all female employees.
SELECT * FROM employees
WHERE gender = 'F';
- - list all male employee 
 
- - Display the names of employees who work in the IT department.
SELECT * FROM employees
- - as is use as alias 
select * from  employees ;
-- change the colum name
select emp_name as name_e, salary as emp_sal from  employees ;
 -- fetch employee who salary>20000
 select * from employees where salary>20000;
 - - fecth only those details of employee who got more the 20000 salary and hire_date
 
 select * from employees where salary>20000 and hire_date; 
 
 
 
SELECT d.dept_name, COUNT(*) AS total_employees
FROM employees e
JOIN departments d ON d.dept_id = e.dept_id
GROUP BY d.dept_id;
select * from employees limit 2


-- sub quries
select avg(salary) from employees

select emp_name,salary from employees where salary>(select avg(salary) from employees);

find employees who earn more than the avearge salary of theri own department

select substring(emp_name,1,5)from employees

insert into employees value(110,'manish chouhan', 'm','50000','1995-04-11')

select gettotaldeptsalary(2)
 
select calculatesalarywithDA(salary,0.5) as total_salary from employees
salary=5000
5000(5000*0.5)
5000+2500
7500

select dept_id,sum(salary) from employees group by dept_id

select calculatesalarywithDAHR(salary,0.5) as total_salary from employees

SELECT emp_name, salary,
       calculateSalaryWithDAHR(salary, 0.50, 0.20) AS final_salary
FROM employees;

