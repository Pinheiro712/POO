#ifndef SUSPEITO_HPP
#define SUSPEITO_HPP
#include <string>
#include<iostream>
using namespace std;

class Suspeito{
    private:
    string nome;
    string status;

    public:
    Suspeito(string nome, string status){
        this-> nome = nome;
        setstatus(status);
    };
    string getstatus (){
        return status;
    }
    string getnome (){
        return nome;
    }

    void setstatus(string status){
        this->status = status;
    };
    void setnome(string nome){
        this->nome = nome;
    };
    void tostring(){
        if (status != "indiciado"|| status!= "nao indiciado"){
            cout<<"status indevido";
        }
        else{
            cout << "-----------------------------\n";
            cout << "\n Nome do suspeito: " << nome << "\n";
            cout << "\n Status: " << status << "\n";
            cout << "-----------------------------\n";
        }
    }
    
};
#endif