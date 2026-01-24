/*======Create Database (Optional)
CREATE DATABASE NobelDB;
USE NobelDB;


/*==== Create Table : Nobel_win

CREATE TABLE Nobel_win (
    year INT,                     -- Nobel Prize year
    subject VARCHAR(50),           -- Subject (Physics, Chemistry, etc.)
    winner VARCHAR(100),           -- Winner name
    country VARCHAR(50),           -- Winner country
    category VARCHAR(50)           -- Category (Scientist, Economist, etc.)
);

INSERT INTO Nobel_win (YEAR, SUBJECT, WINNER, COUNTRY, CATEGORY) VALUES
(1970, 'Physics', 'Hannes Alfven', 'Sweden', 'Scientist'),
(1970, 'Physics', 'Louis Neel', 'France', 'Scientist'),
(1970, 'Chemistry', 'Luis Federico Leloir', 'France', 'Scientist'),
(1970, 'Physiology', 'Ulf von Euler', 'Sweden', 'Scientist'),
(1970, 'Physiology', 'Bernard Katz', 'Germany', 'Scientist'),
(1970, 'Literature', 'Aleksandr Solzhenitsyn', 'Russia', 'Linguist'),
(1970, 'Economics', 'Paul Samuelson', 'USA', 'Economist'),
(1971, 'Physics', 'Dennis Gabor', 'Hungary', 'Scientist'),
(1971, 'Chemistry', 'Gerhard Herzberg', 'Germany', 'Scientist'),
(1971, 'Peace', 'Willy Brandt', 'Germany', 'Chancellor');

    /*== Query 1:
   Find Nobel Prize winners of the year 1970
   Return: year, subject, winner==/*
   
SELECT year, subject, winner
FROM Nobel_win
WHERE year = 1970;


/* =========================================
   Query 2:
   Find Chemistry Nobel winners between
   years 1965 and 1975 (inclusive)
   Return: year, subject, winner, country
========================================= */
SELECT year, subject, winner, country
FROM Nobel_win
WHERE subject = 'Chemistry'
AND year BETWEEN 1965 AND 1975;

/* =========================================
   Query 3:
   Find winners whose first name starts  with 'Louis'Return: year, subject, winner, country==/*
   
SELECT year, subject, winner, country
FROM Nobel_win
WHERE winner LIKE 'Louis%';

/* =========================================
   Query 4:
   Find Nobel winners for subjects thatdo NOT begin with letter 'P' 
   Order by:
   year DESC,
   country ASC,
   winner ASC ===/*
   SELECT year, subject, winner, country, category
FROM Nobel_win
WHERE subject NOT LIKE 'P%'
ORDER BY year DESC, country ASC, winner ASC;

/* =========================================
   Query 5:
   Find 1970 Nobel winners Order by subject ASC BUT Chemistry and Economics should
   appear at the end of the result ==/*
   
SELECT year, subject, winner, country, category
FROM Nobel_win
WHERE year = 1970
ORDER BY 
    CASE
WHEN subject IN ('Chemistry', 'Economics') THEN 1
	ELSE 0
    END,
    subject ASC;