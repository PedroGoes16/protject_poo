#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "UnidadeConsumidora.h"
#include "Fatura.h"

using namespace std

class Cliente : LocalizacaoGeografica {
    
    private:
    
    string nome;
    int cpf_cnpj;
    // para alimentar estes vectors, precisaremos implementar funções. Não faremos isso por meio do construtor nem de setters
    vector<UC> unidades;
    vector<Fatura> faturas;
    // professor disse que este vector aqui não faz sentido. os demais, sim (é com vector mesmo)
    // vector<Cliente> clientes;
    
    public:
    
    Cliente(string, int);
    cadastrar_cliente(string nome, int cpf_cnpj);
    
};

#endif
