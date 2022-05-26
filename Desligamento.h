#include "ServicoCampo.h"
#include <string.h>

#ifndef DESLIGAMENTO
#define DESLIGAMENTO

class Desligamento : public ServicoCampo {

    private:
    string tipo;
    
	public:
    Desligamento();
    void set_tipo();
    str get_tipo(tipo);
    ~Desligamento();

};

#endif
