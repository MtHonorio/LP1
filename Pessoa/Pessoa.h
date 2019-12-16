#pragma once
#include <string.h>
#define PESSOA_H

using namespace std;

class Pessoa
{
    private:
        string nome, telefone;
        int idade;

    public:
        Pessoa();
        Pessoa(string n, int i, string t);

        int getIdade();
        string getNome();
        string getTelefone();
        
        void setIdade(int i);
        void setNome(string n);
        void setTelefone(string t);
};