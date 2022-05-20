#ifndef PAGAMENTO_H
#define PAGAMENTO_H

class Pagamento
{
    public:
        date dataPagamento;	

        Pagamento();
        void set_dataPagamento();
        date get_dataPagamento(dataPagamento);
        int calcularJuros(fatura);
        void pagar();
        ~Pagamento();
};

#endif // ENGINE_H