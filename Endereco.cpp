#include "Endereco.h"

Endereco::Endereco(){}

Endereco::Endereco(std::string _logradouro, int _numero, std::string _bairro, std::string _complemento, int _cep, std::string _cidade, std::string _estado){
    this->logradouro = _logradouro;
    this->numero = _numero;
    this->bairro = _bairro;
    this->complemento = _complemento;
    this->cep = _cep;
    this->cidade = _cidade;
    this->estado = _estado;
}

void Endereco::setLogradouro(std::string _logradouro){
    this->logradouro = _logradouro;
}

std::string Endereco::getLogradouro(){
    return this->logradouro;
}

void Endereco::setNumero(int _numero){
    this->numero = _numero;
}

int Endereco::getNumero(){
    return this->numero;
}

void Endereco::setBairro(std::string _bairro){
    this->bairro = _bairro;
}

std::string Endereco::getBairro(){
    return this->bairro;
}

void Endereco::setComplemento(std::string _complemento){
    this->complemento = _complemento;
}

std::string Endereco::getComplemento(){
    return this->complemento;
}

void Endereco::setCep(int _cep){
    this->cep = _cep;
}

int Endereco::getCep(){
    return this->cep;
}

void Endereco::setCidade(std::string _cidade){
    this->cidade = _cidade;
}

std::string Endereco::getCidade(){
    return this->cidade;
}

void Endereco::setEstado(std::string _estado){
    this->estado = _estado;
}

std::string Endereco::getEstado(){
    return this->estado;
}