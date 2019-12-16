#include <string.h>
#include <iostream>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
    nome = telefone = "\0";
    idade = 0;
}

Pessoa::Pessoa(string n, int i, string t)
{
    setNome(n);
    setIdade(i);
    setTelefone(t);
}

string Pessoa::getNome()
{
    return nome;
}

int Pessoa::getIdade()
{
    return idade;
}

string Pessoa::getTelefone()
{
    return telefone;
}

void Pessoa::setNome(string n)
{
    nome = n;
}

void Pessoa::setIdade(int i)
{
    if ( i > 0 && i < 120)
        idade = i;
}
 
void Pessoa::setTelefone(string t)
{
    telefone = t;
}

