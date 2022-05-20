#include "UnidadeConsumidora.h"

#ifndef SERVICOCAMPO
#define SERVICOCAMPO

class ServicoCampo {

    public:
    uc: UnidadeConsumidora;
    funcionario: Funcionario;
    dataProgramacao: date;
    sequencia: int;	
	
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