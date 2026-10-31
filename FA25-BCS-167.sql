
--- Question  # 1:

SELECT c.cust_name as customer_name,
    c.city  AS customer_city, s.[name]  as   salesperson_name,
    s.city as salesperson_city,
  s.commission    --- Here fisrt , add the Columns on which i apply my query :
    

FROM dbo.customer as c
INNER JOIN dbo.salesman as s 
ON c.salesman_id = s.salesman_id

WHERE c.city IS NOT NULL
    AND s.city IS NOT NULL   --- Conditions in my questions 
  AND c.city <> s.city
   AND s.commission > 0.12

ORDER BY c.customer_id ASC;

--- Question 2 :

SELECT o.ord_no, o.ord_date,o.purch_amt,
    c.cust_name as customer_name,
      c.grade     AS customer_grade,
  s.[name]  as salesperson_name,
    s.commission   ---Mine Query holding dataa;
FROM dbo.orders AS o

INNER JOIN dbo.customer as c 
ON o.customer_id = c.customer_id
left join dbo.salesman as s 
ON o.salesman_id = s.salesman_id

WHERE o.purch_amt BETWEEN 500 AND 2000

ORDER BY o.purch_amt desc,o.ord_no asc;

--- Question # 3 ;;;

SELECT d.dpt_code as department_code,
     d.dpt_name as department_name, COUNT(e.EMP_idno) as employee_count
FROM dbo.emp_department as d 

left join dbo.emp_details as e
on d.DPT_CODE = e.emp_dept

group by d.DPT_code , d.DPT_name
order by  department_code asc, employee_count desc;


--- Question # 4 :

SELECT company_mast.COM_ID , company_mast.COM_NAME, AVG(item_mast.PRO_PRICE) AS average_price
FROM company_mast
INNER JOIN item_mast 
ON item_mast.PRO_COM = company_mast.COM_ID

GROUP BY company_mast.COM_ID , company_mast.COM_NAME

HAVING AVG(item_mast.PRO_PRICE) >= 350
ORDER BY average_price DESC

--- questiuon # 5 :

SELECT company_mast.COM_NAME , item_mast.PRO_NAME,item_mast.PRO_PRICE
FROM company_mast
INNER JOIN item_mast 

ON item_mast.PRO_COM = company_mast.COM_ID
WHERE item_mast.PRO_PRICE = (
    SELECT MAX(i2.PRO_PRICE)
    FROM item_mast AS i2
    WHERE item_mast.PRO_COM = i2.PRO_COM)
ORDER BY company_mast.COM_ID ASC , PRO_ID ASC



