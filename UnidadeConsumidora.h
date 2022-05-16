#include <stdio>
#include <string>
#include "Cliente.h"

class UnidadeConsumidora {

    public:
    std::string id;
    Cliente cliente;
    std::string tipo;
    std::string endereco;
    std::vector<Fatura> faturas;

    public:
    UnidadeConsumidora(Cliente);

};