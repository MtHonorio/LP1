#include <iostream>
#include "invoice.h"
#include <string>

using namespace std;

int main ()
{
    invoice* p1 = new invoice();
    invoice* p2 = new invoice();
    
    int x;
    float i;
    string s;
    
    cout << "Digite o numero do item: " << endl;
    cin >> x;
    p1->setNumItem(x);

    cout << "Digite a quantidade: " << endl;
    cin >> x;
    p1->setQuantidade(x);
    
    cout << "Digite o preco unitario: " << endl;
    cin >> i;
    p1->setPreco(i);

    cout << "Digite a descricao do item: " << endl;
    cin >> s;
    p1->setDescricao(s);

    cout << "Numero do item: " << p1->getNumItem() << "Seu item eh: " << p1->getDescricao() << " Preco: " << p1->getPreco() << " Quantidade: " << p1->getQuantidade() << endl;
    cout << "Sua fatura eh: " << p1->getInvoiceAmount() << endl;
    return 0;
}