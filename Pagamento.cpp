#include "Pagamento.h"

Pagamento::Pagamento(){}

Pagamento::Pagamento(int _data){
    this->data_pagamento = _data;
}

void Pagamento::setDataPagamento(Data _data){
    this->data_pagamento = _data;
}

Data Pagamento::getDataPagamento(){
    return this->data_pagamento;
}

float Pagamento::calcularJuros(Fatura _fatura){
    int dif_dias = this->data_pagamento.difData(_fatura.getVencimento());
    float juros = 0;
    while(dif_dias > 0){
        juros += (_fatura.getValor() + juros)*this->taxa_juros;
        dif_dias -= 30;
    }
    return juros;
}

void Pagamento::pagar(Fatura _fatura){
    _fatura.setStatusPagamento(true);
}

