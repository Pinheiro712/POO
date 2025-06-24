#include <iostream>
#include <string>
using namespace std;


class estudante{
    public:
        std::string nome;
        int idade;
        double media;
    estudante(std::string nome, int idade, double media){
        this-> nome = nome;
        this-> idade = idade;
        this-> media = media;
    }

};



class carro{
    public:
        std::string fabricante;
        std::string modelo;
        std::string cor;
        int ano;

    carro(std::string fabricante,std::string modelo,std::string cor, int ano){
        this-> fabricante = fabricante;
        this-> modelo = modelo;
        this-> cor = cor;
        this-> ano = ano;
    };
};

int main (){
    carro possante("chevrole","fuscao","azul lindo",2001);

    std::cout<<"modelo da bosta do carro: "<<possante.modelo<<"\n";
    std::cout<<"ano da bosta do carro: "<<possante.ano<<"\n";
    std::cout<<"o corno que fez a bosta do carro: "<<possante.fabricante<<"\n";
    std::cout<<"a cor da bosta do carro: "<<possante.cor<<"\n";
} 