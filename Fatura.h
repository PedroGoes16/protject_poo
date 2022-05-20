#include "UnidadeConsumidora.h"
#include "Pagamento.h"
#include <vector>

#ifndef FATURA_H
#define FATURA_H

class Fatura {

    public:
    float consumo;
    float valor;
    int vencimento;
    bool statusPagamento;
    std::vector<Fatura> faturasAbertas;
    Pagamento *PagFat; 

};

#endif