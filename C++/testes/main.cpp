#include <iostream>
#include "GerenciadorClientes.h"

int main() {
    // Criando um objeto do tipo GerenciadorClientes
    GerenciadorClientes gerenciador;

    // Adicionando alguns clientes
    gerenciador.adicionarCliente("Miguel", 30);
    gerenciador.adicionarCliente("Ana", 25);

    // Listando todos os clientes cadastrados
    std::cout << "Clientes cadastrados:" << std::endl;
    gerenciador.listarClientes();

    return 0;
}
