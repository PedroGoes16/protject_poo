#include "ServicoCampo.h"
#include <string.h>

#ifndef TROCAMEDIDOR
#define TROCAMEDIDOR

class TrocaMedidor : public ServicoCampo {

    public:
    string tipo;
    float leituraAntiga;
	
    TrocaMedidor();
    void set_tipo();
    str get_tipo(tipo);
    void registrarLeitura(float);
    float get_leituraAntiga(leituraAntiga);
    ~TrocaMedidor();

};

#endif