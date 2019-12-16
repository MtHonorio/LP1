#include "Voo.h"
#include "Horario.h"
#include "Data.h"

using namespace std;

Voo::Voo()
{
    for(int i = 0 ; i<=100 ; i++){
        assento[i] = false;
    }
    Horario();
    Data();
    nvoo = 0;
}

Voo::Voo(int n, Data d, Horario h, bool v[100] )
{
    nvoo = n;
    for (int i=0; i<=100; i++){
        assento[i] = v[i];
    }
    dat = d;
    hor = h;
}

int Voo::getNumVoo(){
    return nvoo;
}

Data Voo::getDat(){
    return dat;
}

Horario Voo::getHor(){
    return hor;
}

int Voo::proximoLivre(){
    for (int i=0; i<100 ; i++){
        if (assento[i] == false){
            return i;
        }
    }
    return 0;
}

bool Voo::verifica(int c){
    if(assento[c] == false){
        return true;
    }else{
        return false;
    }
}

bool Voo::ocupa(int c){
    if(verifica(c)){
        assento[c] = true;
        return true;
    }else{
        return false;
    }
}

int Voo::vagas(){
    int contador = 0;

    for(int i = 0 ; i < 100 ; i++){
        if(assento[i] == false){
            contador ++;
        }
    }
    return contador;
}