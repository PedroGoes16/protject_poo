#include <string>
#include <vector>
#include "UC.h"
#include "Fatura.h"

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente {
    
    public:

    std::string nome;
    int cpf_cnpj;
    std::vector<UC> unidades;
    std::vector<Fatura> faturas;
    std::vector<Cliente> clientes;
    
};

#endif