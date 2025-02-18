#ifndef GERENCIADORCLIENTES_H
#define GERENCIADORCLIENTES_H

#include <vector>
#include "Cliente.h"

class GerenciadorClientes {
public:
    // Método para adicionar um cliente ao sistema
    void adicionarCliente(const std::string& nome, int idade);

    // Método para listar todos os clientes
    void listarClientes() const;

private:
    // Vetor que armazena os clientes cadastrados
    std::vector<Cliente> clientes;
};

#endif // GERENCIADORCLIENTES_H
    