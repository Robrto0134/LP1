#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(void){
    Invoice i1 = Invoice(2, -2, 0.20, "Cookie");

    cout << "Numero: " << i1.get_num() << endl << "Quantidade: " << i1.get_quant() << 
    endl << "Descrição: " << i1.get_desc() << endl << "Preço: " << i1.get_preco() << 
    endl << "Total: " << i1.getInvoiceAmount() << endl;

    return 0;
}