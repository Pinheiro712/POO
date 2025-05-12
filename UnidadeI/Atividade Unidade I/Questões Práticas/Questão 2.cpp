#include <iostream>
using namespace std;


int consumo(int litros, int kmrodado, int lusado){
    int ltotal = lusado + litros;
    return ltotal / kmrodado;
}

int main(){
    int kmrodado, litros, lusado;
    kmrodado = 0;
    while (int kmrodado != -1){
        cout<<"Quantos km rodados?"<<endl;
        cin>>kmrodado;
    }
}