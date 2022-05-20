#include "ServicoCampo.h"
#ifndef LIGACAO
#define LIGACAO

class Ligacao : public ServicoCampo {

    public:
    tipo: str;
	
    Ligacao();
    void set_tipo();
    str get_tipo(tipo);
    ~Ligacao();

};

#endif