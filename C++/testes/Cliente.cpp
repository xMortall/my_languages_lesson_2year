#include "Cliente.h"

// Construtor da classe Cliente
Cliente::Cliente(const std::string& nome, int idade) : nome(nome), idade(idade) {}

// Método para obter o nome do cliente
std::string Cliente::getNome() const {
    return nome;
}

// Método para obter a idade do cliente
int Cliente::getIdade() const {
    return idade;
}
