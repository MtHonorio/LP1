#pragma once
#define PAGAMENTO_H
#include <string>
#include <iostream>

using namespace std;

class Pagamento{
    public:

        Pagamento();

        double getValorPagamento();
        string getNomeDoFuncionario();

        void setValorPagamento(double v);
        void setNomeDoFuncionario(string n);

    private:

        double valorPagamento;
        string nomeDoFuncionario;
};

class ControleDePagamentos

{
    public:
        ControleDePagamentos();

        Pagamento* getPagamento();
        void setPagamentos(string n, double p, int i);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string n);

    private:
        Pagamento pag[100];
};
