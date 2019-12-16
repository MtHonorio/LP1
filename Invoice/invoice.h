#pragma once 
#define INVOICE_H

class invoice
{
    public:
        invoice();

        int getNumItem();
        string getDescricao();
        int getQuantidade();
        float getPreco();

        void setNumItem(int x);
        void setDescricao(string j);
        void setQuantidade(int x);
        void setPreco(float p);

        double getInvoiceAmount();
        
    private:
        string Descricao;
        int quantidade, nitem;
        float preco;
};   