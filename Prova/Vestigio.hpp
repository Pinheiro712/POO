#ifndef VESTIGIO_HPP
#define VESTIGIO_HPP
#include <string>
#include<iostream>
using namespace std;

class Vestigio{
    private:
    string nome;
    string tipo;
    bool ev;

    public:
    Vestigio(string nome, string tipo, bool ev){
        this-> nome = nome;
        settipo(tipo);
        setev(ev);
    };
    string gettipo (){
        return tipo;
    }
    string getnome (){
        return nome;
    }

    void settipo(string tipo){
        this->tipo = tipo;
    };
     void setev(bool ev){
        this->ev = ev;
    };
    void setnome(string nome){
        this->nome = nome;
    };


    void tostring(){
        if (tipo != "Biologico" && tipo != "Fisico" && tipo != "Digital"){
            cout << "Prova Invalida.";
        }
        else{
            cout << "-----------------------------\n";
            cout << "\n " << nome << "\n";
            cout << "\n Tipo: " << tipo << "\n";
            
            if (ev != true){
        cout<<"Evidencia."<<endl;
        cout << "-----------------------------\n";
    }
    else{
        cout<<"Nao evidencia"<<endl;
        cout << "-----------------------------\n";
    }
            
    }

}
    
};
#endif