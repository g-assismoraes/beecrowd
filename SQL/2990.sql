SELECT empregados.cpf, empregados.enome, departamentos.dnome
FROM empregados NATURAL JOIN departamentos
WHERE empregados.cpf NOT IN(
    SELECT cpf_emp
    FROM trabalha)
ORDER BY empregados.cpf;
