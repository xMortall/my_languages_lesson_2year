#!/bin/bash

read -s -p "Digite o nome secreto (não será mostrado): " SECRET_NAME
echo


while true
do
    read -p "Adivinha: " GUESS
    if [ "$GUESS" == "$SECRET_NAME" ]; then
        echo "Parabéns!"
        break
    else
        echo "Erraste."
    fi
done

