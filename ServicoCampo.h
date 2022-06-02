#include "UnidadeConsumidora.h"
#include <chrono>
#include <ctime>

#ifndef SERVICOCAMPO
#define SERVICOCAMPO

class ServicoCampo {

    public:
    UnidadeConsumidora uc;
    Funcionario funcionario;
    time_t data_programacao;
    int sequencia;
	
    ServicoCampo(UnidadeConsumidora, Funcionario);
    Funcionario get_funcionario(Funcionario);    
    UnidadeConsumidora get_uc(UnidadeConsumidora);
    void set_date();
    date get_date(dataProgramacao);
    void set_sequencia();
    int get_sequencia(sequencia);
    ~ServicoCampo();

};

#endif