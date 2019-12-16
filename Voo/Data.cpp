#include <string>
#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(){
    Dia = Mes = Ano = 1;
}

Data::Data(int d, int m, int a){
    setDia(d);
    setMes(m);
    setAno(a);
}

int Data::getDia(){
    return Dia;
}

int Data::getMes(){
    return Mes;
}

int Data::getAno(){
    return Ano;
}

void Data::setDia(int d){
    if (d > 0 && d < 32){
        Dia = d;
    }else{
        Dia = Mes = Ano = 1;
    }
}

void Data::setMes(int m){
    if (m > 0 && m < 13){
        Mes = m;
    }else{
        Dia = Mes = Ano = 1;
    }
}

void Data::setAno(int a){
    if (a > 0 && a < 10000){
        Ano = a;
    }else{
        Dia = Mes = Ano = 1;
    }
}

int Data::compara(Data d)
{
    if (this->Ano == d.getAno()){
        if (this->Mes == d.getMes()){
            if (this->Dia == d.getDia()){
                return 0;
            }
        }else if(this->Mes > d.getMes()){
            return 1;
        }
    }else if(this->Ano > d.getAno()){
        return 1;
    }else if(this->Dia < d.getDia() && this->Mes < d.getMes() && this->Ano < d.getAno()){
        return -1;
    }
}

bool Data::isBissexto()
{
    if (this->Ano % 400 == 0){
        return true;
    }
    if (this->Ano % 4 == 0 && this->Ano % 100 != 0 ){
       return true;
    }else{
       return false;   
    }
}

string Data::getMesExtenso()
{
    switch (Mes)
    {
    case 1:
        return "Janeiro";
        break;
    case 2:
        return "Feveiro";
        break;
    case 3:
        return "Marco";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Maio";
        break;
    case 6:
        return "Junho"; 
        break;
    case 7:
        return "Julho";
        break;
    case 8:
        return "Agosto"; 
        break;
    case 9:
        return "Setembro"; 
        break;
    case 10:
        return "Outubro";
        break;
    case 11:
        return "Novembro"; 
        break;
    case 12:
        return "Dezembro";
        break;
    
    default:
        break;
    }
}