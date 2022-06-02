#include "Cliente.h"

void Cliente::setNome(std::string _nome){
    this->nome = _nome;
}

std::string Cliente::getNome(){
    return this->nome;
}

void Cliente::setEndereco(Endereco _endereco){
    this->endereco = _endereco;
}

Endereco Cliente::getEndereco(){
    return this->endereco;
}

void Cliente::setTelefone(int _telefone){
    this->telefone = _telefone;
}

int Cliente::getTelefone(){
    return this->telefone;
}

void Cliente::setCpfCnpj(int _cpf_cnpj){
    this->cpf_cnpj = _cpf_cnpj;
}

int Cliente::getCpfCnpj(){
    return this->cpf_cnpj;
}

void Cliente::adicionarUnidadeConsumidora(UnidadeConsumidora _uc){
    this->unidades_vinculadas.push_back(_uc);
}

void Cliente::removerUnidadeConsumidora(UnidadeConsumidora _uc){
    for(UnidadeConsumidora e : this->unidades_vinculadas){
        this->unidades_vinculadas.erase(e);
    }
}

std::vector<UnidadeConsumidora> Cliente::getUnidadeConsumidora(){
    return this->unidades_vinculadas;
}

void Cliente::cadastrarCliente(std::string _nome, Endereco _endereco, int _telefone, int _cpf_cnpj){
    this->nome = _nome;
    this->endereco = _endereco;
    this->telefone = _telefone;
    this->cpf_cnpj = _cpf_cnpj;
}

std::map<Cliente, Fatura> Cliente::listarInadimplentes(std::vector<Cliente> _clientes, Data _data_atual){
    std::map<Cliente, Fatura> indadimplentes;
    for(Cliente c : _clientes){
        for(UnidadeConsumidora uc : c.unidades_vinculadas){
            for(Fatura f : uc.faturas){
                if(!f.getStatusPagamento()){
                    if(_data_atual.difData(f.getVencimento()) > 0){
                        indadimplentes[c] = f;
                    }
                }
            }
        }
    }
    return indadimplentes;
}