#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>
#include "LocalizacaoGeografica.h"

class Endereco : LocalizacaoGeografica {

    private:

    std::string logradouro;
    int numero;
    std::string bairro;
    std::string complemento;
    int cep;
    std::string cidade;
    std::string estado;

    public:

    Endereco();
    Endereco(std::string, int, std::string, std::string, int, std::string, std::string);
    void setLogradouro(std::string);
    std::string getLogradouro();
    void setNumero(int);
    int getNumero();
    void setBairro(std::string);
    std::string getBairro();
    void setComplemento(std::string);
    std::string getComplemento();
    void setCep(int);
    int getCep();
    void setCidade(std::string);
    std::string getCidade();
    void setEstado(std::string);
    std::string getEstado();

}

#endif