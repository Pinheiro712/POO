#include <iostream>
#include <string>

class forma{
    public:
    double area;
    double volume;
};


class cubo : public forma{
    public:
        double lado;
    cubo(double lado){
        /*construindo o cubo*/
        this-> lado = lado;
        this->area = lado * lado *6;
        this->volume = lado * lado * lado;
    }
};


class esfera : public forma{
    public:
        double raio;
    esfera(double raio){
        this-> raio = raio;
        this-> area = 3 * 3.14 *(raio * raio);
        this-> volume = (4/3.0) * 3.14 * (raio*raio*raio);
    }
};

int main(){
    cubo cubo(10);
    esfera esfera(5);


    std::cout<<"Area do cu: "<<cubo.area <<"cm\n";
    std::cout<<"Volume do cu: "<<cubo.volume<<"cm\n";    

    std::cout<<"Area do ovo direito: "<<esfera.area <<"cm\n";
    std::cout<<"Volume do ovo esquerdo: "<<esfera.volume<<"cm\n";

}