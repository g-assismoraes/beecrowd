SELECT life_registry.name, ROUND((1.618*omega), 3) AS "Fator N"
FROM life_registry JOIN dimensions ON
    life_registry.dimensions_id = dimensions.id
WHERE life_registry.name LIKE 'Richard%' AND dimensions.name IN ('C875', 'C774')
ORDER BY omega; 
