#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
public:
    // Construtor para inicializar o cliente com nome e idade
    Cliente(const std::string& nome, int idade);

    // Métodos para obter os dados do cliente
    std::string getNome() const;
    int getIdade() const;

private:
    // Atributos privados
    std::string nome; // Nome do cliente
    int idade;        // Idade do cliente
};

#endif // CLIENTE_H
