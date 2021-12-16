SELECT name, rentals_date
FROM customers JOIN rentals ON
    customers.id = rentals.id_customers
WHERE extract(month FROM rentals.rentals_date) = 9;
