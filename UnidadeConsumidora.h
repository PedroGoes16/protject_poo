#include <stdio.h>
#include <string.h>
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