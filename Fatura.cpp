#include "Fatura.h"

Fatura::Fatura(){};

Fatura::Fatura(float _consumo, float _valor, Data _vencimento){
    this->consumo = _consumo;
    this->valor = _valor;
    this->vencimento = _vencimento;
}

void Fatura::setConsumo(float _consumo){
    this->consumo = _consumo;
}

float Fatura::getConsumo(){
    return this->consumo;
}

void Fatura::setValor(float _valor){
    this->valor = _valor;
}

float Fatura::getValor(){
    return this->valor;
}

void Fatura::setVencimento(Data _vencimento){
    this->vencimento = _vencimento;
}

Data Fatura::getVencimento(){
    return this->vencimento;
}

void Fatura::setStatusPagamento(bool _status){
    this->status_pagamento = _status;
}

bool Fatura::getStatusPagamento(){
    return this->status_pagamento;
}