#include <iostream>
#include "Date.h"

using namespace std;

int main(void){
    int b1, b2; 
    Date d1 = Date("15", "09", "1998");
    Date d2 = Date("15", "12", "1998");

    cout << d1.get_day() << "/" << d1.get_month() << "/" << d1.get_year() << endl;
    cout << d1.Compara(d2.get_day(), d2.get_month(), d2.get_year()) << endl;
    cout << d1.get_day() << " de " << d1.getMesExtenso() << " de " << d1.get_year() << endl;
    cout << d1.isBissexto() << endl;
    return 0;
}