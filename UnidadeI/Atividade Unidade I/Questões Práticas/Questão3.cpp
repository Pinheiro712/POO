#include <iostream>
using namespace std;

static int cont = 0;

int retorna(){
    cont++;
    return cont;
}

int main(){
    int cont = 0;
    int rodada = 0; //só pra testar
    cout <<"O valor de cont é: " << cont << endl;
    while (rodada != -1){
        cout << "quantas vezes vai rodar o código?"<<endl;
        cin>> rodada;
        for (int i = 0; i < rodada; i++){
            cout << "O valor de cont é: " << cont << endl;
            cont = retorna(cont);
        }
        cout << "O valor de cont é: " << cont << endl;
    }
}