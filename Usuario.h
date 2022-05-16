#ifndef USUARIO
#define USUARIO

class Usuario{

    private:
    int id;
    int senha;

    public:
    Usuario(int, int);
    void set_id(int);
    void set_senha(int);
    int get_id(int);
    int get_senha(int);
    ~Usuario();

};

#endif