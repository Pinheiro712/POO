#include <iostream>
#include <string>
using namespace std;

/*Antes de tomar o expresso de Hogwarts, os Bruxos precisam comprar seu material escolar. 
Escreva uma Classe Livro que tenha como atributos título e nome do autor. Forneça um método display.
Forneça mais métodos caso julgue necessário.

Responda: o que é abstração?
*/

class Livro{
    private:
    string titulo;
    string nomea;

    public:
    Livro(string titulo, string nomea){
        this-> nomea = nomea;
        settitulo(titulo);
    };
    string gettitulo (){
        return titulo;
    }
    string getnomea (){
        return nomea;
    }

    void settitulo(string titulo){
        this->titulo = titulo;
    };
    void setnomea(string nomea){
        this->nomea = nomea;
    };
    void displaytela(){
        cout << "-----------------------------\n";
        cout << " Nome do Autor: " << nomea << "\n";
        cout << " título do livro: " << titulo << "\n";
        cout << "-----------------------------\n";
    }
    
};

int main(){
    string nomea, titulo;
    cout<< "Nome do autor:";
    std::getline(cin, nomea);
    cout<< "Título do livro:";
    std::getline(cin, titulo);

    Livro l1(nomea, titulo);
    l1.displaytela();
}