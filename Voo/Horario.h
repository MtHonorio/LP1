#pragma once
#define HORARIO_H

using namespace std;

class Horario
{
    private: 
        int segundo, minuto, hora;

    public:
        Horario();
        
        void setHorario(int, int, int);
        
        void setSeg(int);
        void setMin(int);
        void setHora(int);
        
        int getSeg();
        int getMin();
        int getHora();

        void avancaHorario();

};