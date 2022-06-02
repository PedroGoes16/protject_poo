#ifndef UNIDADECONSUMIDORA_H
#define UNIDADECONSUMIDORA_H

#include <stdio.h>
#include <string.h>
#include "Cliente.h"
#include "Fatura.h"

class UnidadeConsumidora {

    private:

    std::string id;
    Cliente cliente;
    std::string tipo;
    Endereco endereco;
    float ultima_leitura = 0;
    std::vector<Fatura> faturas;

    public:

    UnidadeConsumidora();
    UnidadeConsumidora(std::string, Cliente, std::string, Endereco);
    void setId(std::string);
    std::string getId();
    void setCliente(Cliente);
    Cliente getCliente();
    void setTipo(std::string);
    std::string getTipo();
    void setEndereco(Endereco);
    Endereco getEndereco();
    void setUltimaLeitura(float);
    float getUltimaLeitura();
    void addFatura(Fatura);
    std::vector<Fatura> getFaturas();


};

#endif