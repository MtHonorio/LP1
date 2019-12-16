#include "Horario.h"
#include <iostream>

using namespace std;

int main()
{
    int s, m, h;
    char c;

    Horario* p1 = new Horario();
    Horario* p2 = new Horario();

    p2->setHorario(-1, 12, 2000);

    cout << "Digite uma hora: " << endl;
    cin >> h;
    cin >> m;
    cin >> s;

    p1->setHorario(s, m, h);
    cout << "Horario: " << p1->getHora() << ":" << p1->getMin() << ":" << p1->getSeg() << endl;
    cout << "Apos o avancaHorario" << endl;

    while(1){
        p1->avancaHorario();
        cout << "Horario: " << p1->getHora() << ":" << p1->getMin() << ":" << p1->getSeg() << endl;

        cout << "Deseja avancar mais um segundo? [S/n]" << endl;
        cin >> c;
        if (c == 'N' || c == 'n'){
            break;
        }
    }
    return 0;
}