SELECT name, orders.id
FROM customers JOIN orders ON
    customers.id = id_customers
WHERE EXTRACT(MONTH FROM orders_date) <= 6;
