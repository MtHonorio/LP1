#include <string.h>
#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa* p1 = new Pessoa();
    Pessoa* p2 = new Pessoa("Matheus Honorio", 19, "83980000000");

    int x;
    string s, t;

    cin >> s;
    p1->setNome(s);
    cin >> x;
    p1->setIdade(x);
    cin >> t;
    p1-> setTelefone(t);

    cout << "Seu nome: " << p1->getNome() << " Sua idade: " << p1->getIdade() << " Seu telefone: " << p1->getTelefone() << endl;
    
    cout << "Seu nome: " << p2->getNome() << " Sua idade: " << p2->getIdade() << " Seu telefone: " << p2->getTelefone() << endl;

    return 0;
}