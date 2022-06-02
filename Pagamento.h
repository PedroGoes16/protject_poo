#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include "Data.h"
#include "Fatura.h"

class Pagamento
{
    private:

        Data data_pagamento;
        float taxa_juros = 0.02

    public:	

        Pagamento();
        Pagamento(int);
        void setDataPagamento(Data);
        Data getDataPagamento();
        float calcularJuros(Fatura);
        void pagar(Fatura);
        ~Pagamento();
};

#endif // ENGINE_H