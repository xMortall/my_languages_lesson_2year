#!/bin/bash

if [ "$#" -ne 2 ]; then
  echo "Uso: $0 <nome_do_banco> <nome_da_tabela>"
  exit 1
fi

DB_NAME="$1"
TABLE_NAME="$2"

MYSQL_USER="root"
read -p "pass do root"MYSQL_PASS: " sua_senha
MYSQL_HOST="localhost"

SQL="
CREATE DATABASE IF NOT EXISTS \`${DB_NAME}\`;
USE \`${DB_NAME}\`;
CREATE TABLE IF NOT EXISTS \`${TABLE_NAME}\` (
  id INT AUTO_INCREMENT PRIMARY KEY,
  nome VARCHAR(100),
  criado_em TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
"

mysql -u"$MYSQL_USER" -p"$MYSQL_PASS" -h"$MYSQL_HOST" -e "$SQL"

echo "Banco de dados '$DB_NAME' e tabela '$TABLE_NAME' criados com sucesso."
