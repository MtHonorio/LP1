#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamento.h"

using namespace std;

int main(void){

    Pagamento* p1 = new Pagamento();
    Pagamento* p2 = new Pagamento();

    p1->setValorPagamento(10000);
    p1->setNomeDoFuncionario("Matheus Honorio");

    p2->setValorPagamento(12000);
    p2->setNomeDoFuncionario("Thiago Maritan");


    cout << "\nNome: " << p1->getNomeDoFuncionario() << endl << "Pagamento: " << p1->getValorPagamento() << endl;
    cout << "\nNome: " << p2->getNomeDoFuncionario() << endl << "Pagamento: " << p2->getValorPagamento() << endl;

    ControleDePagamento* c1 = new ControleDePagamento();

    c1->setPagamentos(*p1, 1);
    c1->setPagamentos(*p2, 2);

    cout << "\nTotal de Pagamentos efetuados: " << c1->calculaTotalDePagamentos() << endl;

    if(c1->exitePagamentoParaFuncionario("Matheus Honorio")){
        cout << "Pagamento realizado.\n";
    }else{
        cout << "Pagamento nao existente.\n";
    }

    return 0;
}