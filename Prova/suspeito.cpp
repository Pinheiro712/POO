#include <iostream>
#include <string>
#include "Suspeito.hpp"

int main(){
    string nome, status;
    cout<< "Nome do Suspeito:";
    std::getline(cin, nome);
    cout<< "Status:";
    std::getline(cin, status);

    Suspeito s1(nome, status);
    s1.tostring();
}