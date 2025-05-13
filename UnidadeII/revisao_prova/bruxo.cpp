#include <iostream>
#include <string>
using namespace std;

/*Escreva uma Classe Bruxo que possui os atributos nome  casa. Forneça métodos set e get. 
O método setCasa deverá validar a casa. Forneça um método display que mostre na tela os atributos 
de uma forma visualmente agradável*/
/*Responda: o que é encapsulamento?*/
/*encapsulamento consiste em proteger os dados internos de uma classe quando nós deixamos ela como
privada, para que assim haja um controle de acesso a dados tão importantes.*/


class Bruxo{
    private: 
    string nome;
    string casa;    

    public:
        Bruxo(string nome, string casa){
            this-> nome = nome;
            setcasa(casa);
        };

    string getnome(){
        return nome;
    };
    string getcasa(){
        return casa;
    };


    void setnome(string nome){
        this->nome = nome;
    };
    void setcasa(string casa){
        this-> casa = casa;
    };


    void printtela(){
        cout << "-----------------------------\n";
        cout << " Nome do Bruxo : " << nome << "\n";
        cout << " Casa          : " << casa << "\n";
        cout << "-----------------------------\n";

}
};

int main(){
    string nome, casa;
    cout<< "Nome:";
    std::getline(cin, nome);
    cout<< "casa:";
    std::getline(cin, casa);

    Bruxo b1(nome, casa);
    b1.printtela();

}
