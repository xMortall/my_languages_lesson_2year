#!/bin/bash

# Nome do banco de dados
DB_NAME="mydb"
# Nome do usuário do banco
DB_USER="root"
# Host do banco de dados
DB_HOST="localhost"
# Porta do banco
DB_PORT="3306"
# Senha (atenção: não é seguro deixar senha em texto plano)
DB_PASS="sua_senha_aqui"

# Comando SQL a ser executado
SQL_QUERY="SELECT * FROM sua_tabela;"

# Executa o comando
mysql -h "$DB_HOST" -P "$DB_PORT" -u "$DB_USER" -p"$DB_PASS" "$DB_NAME" -e "$SQL_QUERY"
