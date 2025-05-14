#include <iostream>
#include <string>
#include "Policial.hpp"

int main() {
    string nome, cargo;
    cout<< "Nome:";
    std::getline(cin, nome);
    cout<< "Cargo:";
    std::getline(cin, cargo);

    Policial p1(nome, cargo);
    p1.tostring();
}