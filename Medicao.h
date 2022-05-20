#include "ServicoCampo.h"
#include <string.h>

#ifndef MEDICAO
#define MEDICAO

class Medicao : public ServicoCampo {

    public:
    
    const string tipo = "medicao";
    float leituraAtual;
	
    Medicao();
    void registrarLeitura(float leitura);
    float get_leituraAtual(float leituraAtual);
    ~Medicao();

};

#endif