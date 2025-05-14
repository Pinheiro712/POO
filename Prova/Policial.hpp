#ifndef POLICIAL_HPP
#define POLICIAL_HPP
#include <string>
#include<iostream>
using namespace std;

class Policial{
    private:
    string nome;
    string cargo;

    public:
    Policial(string nome, string cargo){
        this-> nome = nome;
        setcargo(cargo);
    };
    string getcargo (){
        return cargo;
    }
    string getnome (){
        return nome;
    }

    void setcargo(string cargo){
        this->cargo = cargo;
    };
    void setnome(string nome){
        this->nome = nome;
    };
    void tostring(){
        if (cargo != "Delegado" && cargo != "Escrivao" && cargo != "Perito" && cargo != "Investigador"){
            cout << "Acesso negado";
        }
        else{
            cout << "-----------------------------\n";
            cout << "\n " << nome << "\n";
            cout << "\n Cargo: " << cargo << "\n";
            cout << "-----------------------------\n";
    }
}
    
};
#endif