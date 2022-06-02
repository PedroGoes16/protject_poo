#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "UnidadeConsumidora.h"
#include "Endereco.h"
#include "Data.h"
#include <map>

class Cliente {
    
    private:

    std::string nome;
    Endereco endereco;
    int telefone;
    int cpf_cnpj;
    std::vector<UnidadeConsumidora> unidades_vinculadas;

    public:

    void setNome(std::string);
    std::string getNome();
    void setEndereco(Endereco);
    Endereco getEndereco();
    void setTelefone(int);
    int getTelefone();
    void setCpfCnpj(int);
    int getCpfCnpj();
    void adicionarUnidadeConsumidora(UnidadeConsumidora);
    void removerUnidadeConsumidora(UnidadeConsumidora);
    std::vector<UnidadeConsumidora> getUnidadeConsumidora();
    void cadastrarCliente(std::string, Endereco, int, int);
    std::map<Cliente, Fatura> listarInadimplentes(std::vector<Clientes>, data);
    
};

#endif