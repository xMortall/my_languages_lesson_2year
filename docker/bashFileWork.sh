#!/bin/bash

# This scirpt is used to create a new file and write some text into it.
# It also check if the file already exists and prompts the user for config.
# usage: ./bashFileWork.sh <filename>
#
# A) Colocar o ficheiro em executavel
#   sudo chmod +x bashFileWork.sh
#   ./bashFileWork.sh <filename>
# B) Executar o ficheiro
#   bash ./bashFileWork.sh <filename>

#Check if a filename is provided
if [ -z "$1" ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi
if [ -z "$2" ]; then
    echo "Need to provide the output file name"
    exit 1
else
    cp "$1" "$2"
fi
@echo "Backup of $1 created as $2"
touch "$1"