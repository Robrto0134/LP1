#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(void){
    Pessoa p1;
    int age;
    string name, phone;

    cout << "Digite o nome da pessoa:" << endl;
    cin >> name;
    cout << "Digite a idade da pessoa:" << endl;
    cin >> age;
    cout << "Digite o telefone da pessoa:" << endl;
    cin >> phone;

    p1.Pessoa::set_nome(name);
    p1.Pessoa::set_idade(age);
    p1.Pessoa::set_telefone(phone);
    cout << "Nome: " << p1.Pessoa::get_nome() << endl << "Idade: " <<
    p1.Pessoa::get_idade() << endl << "Telefone: " << p1.Pessoa::get_telefone() << endl;

    return 0;
}
