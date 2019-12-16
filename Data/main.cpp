#include <iostream>
#include "Data.h"
#include <stdio.h>

using namespace std;

int main(){
    int d, m, a;
    char s;

    Data* d1 = new Data();
    Data* d2 = new Data();

    cout << "Digite uma data: " << endl;
    cin >> d;
    d1->setDia(d);
    cin >> m;
    d1->setMes(m);
    cin >> a;
    d1->setAno(a);

    cout << "Seu mes por extenso eh: " << d1->getMesExtenso() << endl;

    printf("Sua data eh: %02d/%02d/%04d\n", d1->getDia(), d1->getMes(), d1->getAno());
    cout << "Deseja digitar outra data? [S/n]" << endl;
    cin >> s;
    if (s == 'S' || s == 's'){
        cout << "Digite uma data: " << endl;
        cin >> d;
        d2->setDia(d);
        cin >> m;
        d2->setMes(m);
        cin >> a;
        d2->setAno(a);
    }

    cout << "Deseja comparar as datas? [S/n]" << endl;
    cin >> s;
    if ( s == 's' || s == 'S'){
        d = d1->compara(*d2);
        if ( d == 0){
            cout << "Datas iguais" << endl;
        }else if (d == 1){
            cout << "Data corrente maior que a do parametro" << endl;
        }else if ( d == -1 ){
            cout << "Data do parametro maior que a da corrente" << endl;
        }
    }

    cout << "Deseja verificar se o ano do parametro eh bissexto? [S/n]" << endl;
    cin >> s;
    if ( s == 's' || s == 'S'){
        d = d1->isBissexto();
        if (d){
            cout << "eh bissexto." << endl;
        }else{
            cout << "nao eh bissexto." << endl;
        }
    }
    return 0;
}