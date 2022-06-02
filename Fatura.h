#include <vector>
#include "Data.h"

#ifndef FATURA_H
#define FATURA_H

class Fatura {

    private:

    float consumo;
    float valor;
    Data vencimento;
    bool status_pagamento = false;  

    public:

    Fatura();
    Fatura(float, float, Data);
    void setConsumo(float);
    float getConsumo();
    void setValor(float);
    float getValor();
    void setVencimento(Data);
    Data getVencimento();
    void setStatusPagamento(bool);
    bool getStatusPagamento();
};

#endif