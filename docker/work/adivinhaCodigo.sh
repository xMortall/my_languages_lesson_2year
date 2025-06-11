#!/bin/bash

read -s -n 4 -p "Digite a chave secreta (até 4 dígitos): " chave
echo

if [[ ! "$chave" =~ ^[0-9]{1,4}$ ]]; then
    echo "Chave inválida. Use até 4 dígitos numéricos."
    exit 1
fi
done
echo "Agora a outra pessoa vai tentar adivinhar a chave!"

while true;
do
    read -n 4 -p "Digite sua tentativa (4 dígitos): " tentativa
    echo

    if [[ "$tentativa" == "$chave" ]]; then
        echo "Parabéns! Você acertou a chave secreta: $chave"
        break
    fi

    certos=0
    for digito in $(echo "$tentativa" | fold -w1 | sort -u); do #fold separa por linha e o sort n deixa repetir 
        if [[ "$chave" == *"$digito"* ]]; then
            ((certos++))
        fi
    done

    echo "Você acertou $certos dígito(s)"

done
