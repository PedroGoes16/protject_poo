#include <string>

// vamos passar a utilizar essa linha abaixo pra não precisar digitar std:: sempre
// se vocês concordarem, precisamos padronizar tudo

using namespace std

class Endereco : public LocalizacaoGeografica { 
  
    private:
  
    string logradouro;
    int numero;
    string bairro;
    string complemento;
    int cep;
    string cidade;
    string estado;
  
    public:
    
    Endereco(string, int, string, string, int, string, string);
    cadastrar_endereco(string, int, string, string, int, string, string);
    ~Endereco();
};
