#include <iostream>
#include <string>
#include <vector>
#include "Becodiagonal.hpp"
using namespace std;

/*É hora de deixar tudo pronto para partir, não é mesmo? 
Escreva uma Classe Mala que permite guardar Livros, até um total de 12. 
Forneça o método display.
 Forneça mais métodos caso julgue necessário.

Esboce sua nova classe em UML, bem como a relação com a classe Livro.
Responda: qual a diferença entre composição e agregação?
Resposta: enquanto agregação é uma relação fraca onde o objeto nao depende exclusivamente 
da classe, a composição é um relacionamento forte que necessita do objeto para funcionar*/

class Mala{
    private:
    vector <Livro> livros;
    const int max = 12;

    public:
    void addliv(){
        if (livros.size() > max){
            cout<< "Mala cheia, so cabe 12"<<endl;
            return;
        }
        string titulo, nomea;
        cout<<"qual o título ? "<<endl;
        getline(cin,titulo);
        cout<<"Nome do autor: ";
        getline(cin,nomea);
        livros.push_back(Livro(titulo, nomea));
       
    }
    
     void display() const {
        cout << "\nConteúdo da Mala (" << livros.size() << "/12 livros):\n";
        cout << "------------------------\n";
        for (auto& Livro : livros) {
            cout << "• " << Livro.gettitulo() 
                 << " (" << Livro.getnomea() << ")\n";
        }
        cout << "------------------------\n";
    }


    void mostrarlivros(){
        if (livros.empty()){
            cout<<"\nA mala está vazia.\n";
            return;
        }
          cout << "\n--- Livros na mala (" << livros.size() << "/12) ---\n";
        for (size_t i = 0; i < livros.size(); ++i) {
            cout << i+1 << ". " << livros[i].gettitulo() << endl;
        }
        cout << "------------------------\n";
    }



    int vagas() const {
        return max - livros.size();
    }


};

int main() {
    Mala minha_mala;
    char opcao;

    cout << "=== Sistema de Gerenciamento de Mala de Livros ===" << endl;
    cout << "Capacidade máxima: 12 livros" << endl << endl;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Adicionar livro" << endl;
        cout << "2. Mostrar todos os livros" << endl;
        cout << "3. Ver títulos dos livros" << endl;
        cout << "4. Ver vagas restantes" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();  // Limpa o buffer do teclado

        switch(opcao) {
            case '1':
                if (minha_mala.vagas() > 0) {
                    minha_mala.addliv();
                    cout << "Livro adicionado com sucesso!" << endl;
                    minha_mala.mostrarlivros();  // Mostra a lista atualizada
                } else {
                    cout << "Mala cheia! Não é possível adicionar mais livros." << endl;
                }
                break;
                
            case '2':
                minha_mala.display();
                break;
                
            case '3':
                minha_mala.mostrarlivros();
                break;
                
            case '4':
                cout << "\nVagas restantes: " << minha_mala.vagas() << endl;
                break;
                
            case '5':
                cout << "Encerrando o programa..." << endl;
                break;
                
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }

        if (opcao != '5' && minha_mala.vagas() == 0) {
            cout << "\nATENÇÃO: Mala atingiu capacidade máxima de 12 livros!" << endl;
        }

    } while (opcao != '5');

    cout << "\nConteúdo final da mala:" << endl;
    minha_mala.display();
    return 0;
}