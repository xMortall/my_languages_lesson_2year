#include "GerenciadorClientes.h"
#include <iostream>

// Método para adicionar um cliente
void GerenciadorClientes::adicionarCliente(const std::string& nome, int idade) {
    // Criando um novo objeto Cliente e adicionando ao vetor
    clientes.push_back(Cliente(nome, idade));
}

// Método para listar todos os clientes cadastrados
void GerenciadorClientes::listarClientes() const {
    for (const auto& cliente : clientes) {
        std::cout << "Nome: " << cliente.getNome() << ", Idade: " << cliente.getIdade() << std::endl;
    }
}
