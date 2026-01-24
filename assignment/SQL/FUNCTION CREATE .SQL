DELIMITER $$

CREATE FUNCTION get_full_name(emp_name VARCHAR(20), emp_surname VARCHAR(20))
RETURNS VARCHAR(50)
DETERMINISTIC
BEGIN
    RETURN CONCAT(emp_name, ' ', emp_surname);
END $$
DELIMITER ;get_full_name


create function gettotaldeptsalary(d_id int)
returns int
reads sql data 
begin 
declare total_salary int;
select sum(salary)  into total_salary from  employees where dept_id=did;
return total_salary;
end$$
DELIMITER $$


DELIMITER ;


DELIMITER $$

CREATE FUNCTION calculatesalarywithDA(salary1 INT, DA DECIMAL(4,2))
RETURNS DECIMAL(10,2)
DETERMINISTIC
BEGIN
    DECLARE total_salary DECIMAL(10,2);

    SET total_salary = salary1 + (salary1 * DA);

    RETURN total_salary;
END$$

drop function calculatesalarywithDA;

DELIMITER ;gettotaldeptsalary


DELIMITER $$
CREATE FUNCTION gettotaldeptsalary(did INT)
RETURNS INT
READS SQL DATA
BEGIN
    DECLARE total_salary INT;

    SELECT SUM(salary)
    INTO total_salary
    FROM employees where dept_id=did;
    RETURN total_salary;
END$$



DELIMITER $$
DELIMITER $$

CREATE FUNCTION calculateSalaryWithDAHR(salary INT, DA DECIMAL(4,2), HR DECIMAL(4,2))
RETURNS DECIMAL(10,2)
DETERMINISTIC
BEGIN
    DECLARE total_salary DECIMAL(10,2);
    
    SET total_salary = salary + (salary * DA) + (salary * HR);
    
    RETURN total_salary;
END $$

DELIMITER ;
