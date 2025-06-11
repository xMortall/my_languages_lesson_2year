#!/bin/bash

# Usage: ./backupScript.sh <docker_container_name> <database_name> <destination_file.sql>

if [ "$#" -ne 3]; then
    echo "Usage: $0 ./backupScript.sh <docker_container_name> <database_name> <destination_file.sql>"
    exit 1
fi

CONTAINER_NAME="$1"
DB_NAME="$2"
DEST_FILE="$3"

# Prompt for MySQL user and password
read -p "MySQL username: " MYSQL_USER
read -s -p "MySQL password: " MYSQL_PASS
echo

# Run mysqldump inside the Docker container and save to destination file
docker exec -i "$CONTAINER_NAME" mysqldump -u"$MYSQL_USER" -p"$MYSQL_PASS"

if [ $? -eq 0 ]; then
    echo "Backup sucessful: $DEST_FILE"
else
    echo "Bachup Fail"
    exit 2
fi
