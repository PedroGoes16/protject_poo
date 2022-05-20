#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "UnidadeConsumidora.h"
#include "Fatura.h"

class Cliente {
    
    public:

    std::string nome;
    int cpf_cnpj;
    std::vector<UC> unidades;
    std::vector<Fatura> faturas;
    std::vector<Cliente> clientes;
    
};

#endif