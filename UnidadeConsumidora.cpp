#include "UnidadeConsumidora.h"

UnidadeConsumidora::UnidadeConsumidora(){}

UnidadeConsumidora::UnidadeConsumidora(std::string _id, Cliente _cliente, std::string _tipo, Endereco _endereco){
    this->id = _id;
    this->cliente = _cliente;
    this->tipo = _tipo;
    this->endereco = _endereco;
}

void UnidadeConsumidora::setId(std::string _id){
    this->id = _id;
}

std::string UnidadeConsumidora::getId(){
    return this->id;
}

void UnidadeConsumidora::setCliente(Cliente _cliente){
    this->cliente = _cliente;
}

Cliente UnidadeConsumidora::getCliente(){
    return this->cliente;
}

void UnidadeConsumidora::setTipo(std::string _tipo){
    this->tipo = _tipo;
}

std::string UnidadeConsumidora::getTipo(){
    return this->tipo;
}

void UnidadeConsumidora::setEndereco(Endereco _endereco){
    this->endereco = _endereco;
}

Endereco UnidadeConsumidora::getEndereco(){
    return this->endereco;
}

void UnidadeConsumidora::setUltimaLeitura(float _leitura){
    this->ultima_leitura = _leitura;
}

float UnidadeConsumidora::getUltimaLeitura(){
    return this->ultima_leitura;
}

void UnidadeConsumidora::addFatura(Fatura _fatura){
    this->faturas.push_back(_fatura);
}

std::vector<Fatura> UnidadeConsumidora::getFaturas(){
    return this->faturas;
}

