#include <iostream>
#include "invoice.h"

using namespace std;

invoice::invoice()
{
    setNumItem(-1);
    setDescricao("\0");
    setPreco(-50.00);
    setQuantidade(-5);
}

double invoice::getInvoiceAmount(){
    return preco*quantidade;
}

void invoice::setNumItem(int x)
{
    if( x > 0){
        nitem = x;
    }else{
        nitem = 0;
    }
}

void invoice::setDescricao(string j)
{
    Descricao = j;
}

void invoice::setQuantidade(int q)
{
    if (q > 0){
        quantidade = q;
    }else{
        quantidade = 0;
    }
}

void invoice::setPreco(float p)
{
    if( p > 0){
        preco = p;
    }else{
        preco = 0.0;
    }
}

int invoice::getNumItem()
{
    return nitem;
}

string invoice::getDescricao()
{
    return Descricao;
}

int invoice::getQuantidade(){
    return quantidade;
}

