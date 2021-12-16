SELECT customers.id, customers.name
FROM customers 
WHERE customers.id NOT IN(
    SELECT locations.id_customers
    FROM customers JOIN locations ON
        customers.id = locations.id_customers
);
