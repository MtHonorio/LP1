#pragma once
#include <string>
#define DATA_H

using namespace std;

class Data
{
    public:
        Data();
        Data(int,int,int);

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);
        
        string getMesExtenso();

        int getDia();
        int getMes();
        int getAno();
        int compara(Data d);
        
        bool isBissexto();
        
    private:
        int Dia, Mes, Ano;
};