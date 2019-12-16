#pragma once
#include "Horario.h"
#include "Data.h"
#define VOO_H

class Voo
{
    private:
        int nvoo;
        bool assento[100];
        Data dat;
        Horario hor;
    public:
        Voo();
        Voo(int n, Data d, Horario h, bool v[100] );
        int proximoLivre();
        bool verifica(int i);
        bool ocupa(int i); 
        int vagas();
        int getNumVoo();
        Data getDat();
        Horario getHor();
};