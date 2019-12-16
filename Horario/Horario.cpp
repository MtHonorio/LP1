#include "Horario.h"
#include <iostream>

using namespace std;

Horario::Horario()
{
    setSeg(0);
    setMin(0);
    setHora(0);
}

void Horario::setHorario(int s, int m, int h)
{
    setSeg(s);
    setMin(m);
    setHora(h);
}

int Horario::getHora()
{
    return hora;
}

int Horario::getMin()
{
    return minuto;
}

int Horario::getSeg()
{
    return segundo;
}

void Horario::setSeg(int s)
{
    if( s >= 0 && s < 60 ){
        segundo = s;
    }else{
        segundo = minuto = hora = 0;
    }
}

void Horario::setMin(int m)
{
    if( m >= 0 && m < 60 ){
        minuto = m;
    }else{
        segundo = minuto = hora = 0;
    }
}

void Horario::setHora(int h)
{
    if( h >= 0 && h < 24 ){
        hora = h;
    }else{
        segundo = minuto = hora = 0;
    }
}

void Horario::avancaHorario(){
    this->segundo++;
    if(this->segundo == 60 ){
        segundo = 0; minuto++;
         
    }if(this->minuto == 60 ){
        segundo = minuto = 0;
        hora++;
        
    }if ( this->hora == 24 ){
        segundo = minuto = hora = 0;
        
    }
}