SELECT products.name, providers.name, categories.name
FROM products JOIN categories ON
    products.id_categories = categories.id JOIN providers ON
        id_providers = providers.id
WHERE providers.name = 'Sansul SA' AND categories.name = 'Imported';
