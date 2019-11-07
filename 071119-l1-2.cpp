//Codigo do Maior Numero
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main (){
    int y, x;

    srand(time(NULL));
    y = 1+(rand() % 100);
    while (1){
        cout << "Informe um numero: " << endl;
        cin >> x;

        if (x > y){
            cout << "muito alto" << endl;
        }else if (x < y){
            cout << "muito baixo" << endl;
        }else{
            cout << "parabens voce acertou";
            break;
        }
    }
    return 0;
}
