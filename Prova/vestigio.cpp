#include <iostream>
#include <string>
#include "Vestigio.hpp"

int main() {
    string nome, tipo;
    bool ev;
    string evid;
    cout<< "Nome:";
    std::getline(cin, nome);
    cout<< "tipo de prova:";
    std::getline(cin, tipo);
    cout<<"Evidencia? : (Y/N)"<<endl;
    std::getline(cin,evid);
    if (evid == "Y"){
        ev = true;
    }
    else{
        ev = false;
    }
    
    

    Vestigio v1(nome, tipo, ev);
    v1.tostring();
}