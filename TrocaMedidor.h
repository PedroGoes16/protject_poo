#include "ServicoCampo.h"
#include <string.h>

#ifndef TROCAMEDIDOR
#define TROCAMEDIDOR

class TrocaMedidor : public ServicoCampo {

    public:
    const std::string tipo = "Troca de Medidor";
    float leituraAntiga;
	
    TrocaMedidor();
    std::string get_tipo(tipo);
    void registrarLeitura(float);
    float get_leituraAntiga(leituraAntiga);
    ~TrocaMedidor();

};

#endif