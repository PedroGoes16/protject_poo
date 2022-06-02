#include "Data.h"

Data::Data(int _dia, int _mes, int _ano){
    this->dia = _dia;
    this->mes = _mes;
    this->ano = _ano;
}

void Data::setDia(int _dia){
    this->dia = _dia;
}

int Data::getDia(){
    return this->dia;
}

void Data::setMes(int _mes){
    this->mes = _mes;
}

int Data::getMes(){
    return this->mes;
}

void Data::setAno(int _ano){
    this->ano = _ano;
}

int Data::getAno(){
    return this->ano
}

int Data::difData(Data _data){
    return (this->dias - _data.dias);
}