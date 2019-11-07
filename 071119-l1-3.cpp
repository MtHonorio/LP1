//Codigo do Maior Numero
#include <iostream>
#include <stdlib.h>
#include<iomanip>


float ComputaVotos (int jogador, int total){
    return ((float)jogador/total)*100;
}

using namespace std;
int main (){
    cout << fixed << setprecision(1);//ter apenas uma casa decimal apos a virgula;
    int x[24] = {0}, i, full_votos = 0, maior = 0;
    float porcentagem;

    cout << "---------------Votacao de Jogadores---------------" << endl;
    cout << "\tEnquete: Quem foi o melhor jogador?" << endl;

    while (1){
        cout << "Numero do jogador (0=fim): " << endl;
        cin >> i;

        if (i > 23 || i<0){
            cout << "Informe um valor entre 1 e 23 ou 0 para sair!" << endl;
            continue;
        }
        else if (i == 0){
            break;
        }else{
            x[i] += 1;
            full_votos++;
        }
    }

    cout << "\n Resultado da votacao: \n Foram Computados " << full_votos << " votos." << endl;
    cout << "\n Jogador votos %\n" << endl;

    for (i=1; i<24; i++){

        if(x[i] > maior){
            maior = i;
        }

    if(x[i] != 0){
        porcentagem = ComputaVotos(x[i], full_votos);
        cout << i << "\t" << x[i] << "\t" << porcentagem << "%" << endl;
        }

    }
    porcentagem = ComputaVotos(x[maior], full_votos);
    cout << "O melhor jogador foi o numero " << maior << ", com "<< x[maior] <<" votos, correspondendo a "<< porcentagem <<" do total de votos."<< endl;

    return 0;
}
