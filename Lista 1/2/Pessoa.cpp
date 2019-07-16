#include "Pessoa.h"

using namespace std;

    Pessoa::Pessoa(){}
    Pessoa::Pessoa(string nome){
        this->nome = nome;
    }
    Pessoa::Pessoa(string nome, int idade, string telefone)
    :Pessoa(){
        this->nome = nome;
        this->idade = idade;
        this->telefone = telefone;      
    }
        
    void Pessoa::set_nome(std::string nome){
        this->nome = nome;
    }
    void Pessoa::set_idade(int idade){
        this->idade = idade;
    }
    void Pessoa::set_telefone(std::string telefone){
        this->telefone = telefone;
    }

    string Pessoa::get_nome(){
        return nome;
    }    
    int Pessoa::get_idade(){
        return idade;
    }
    std::string Pessoa::get_telefone(){
        return telefone;
    }