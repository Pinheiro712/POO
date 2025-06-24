#include <iostream>
#include <string>
using namespace std;




/*Escreva uma classe básica abstrata chamada Emocao. Essa classe tem como atributos um nome e um booleano para indicar se está ativa ou não.
O construtor deve receber o nome e o estado da emoção; esta última deve possuir o argumento default falso.
A classe deve possuir um método virtual puro chamado processar, que recebe uma string contendo a descrição da emoção.
Também deve possuir um método estaAtiva que retorna o estado da emoção.
*/



class emocao {
protected:
    string nome;
    bool ativo;
public:
    emocao(const string& nome, bool ativo = false) : nome(nome), ativo(ativo) {}
    virtual void processar(const string& descricao) = 0;
    
    class Emocao {
    protected:
        string nome;
        bool ativo;


    public:
        Emocao(const string& nome, bool ativo = false) : nome(nome), ativo(ativo) {}
        virtual void processar(const string& descricao) = 0;
        
        
        bool estaAtiva() const {
            return ativo;
        }
        
        
        string getNome() const {
            return nome;
        }
        virtual ~Emocao() {}
    };
    string getNome() const { 
        return nome; 
    }
    virtual ~emocao() {}
};






/*Escreva uma classe Alegria que herda de Emocao. Essa classe deve sobrescrever o método virtual processar, de modo a se comportar da seguinte forma: 
inverte o estado da emoção toda vez que a quantidade de caracteres for par.*/

class Alegria : public emocao {
public:
    Alegria(const std::string& nome, bool ativo = false) : emocao(nome, ativo) {}
    
    void processar(const std::string& descricao) override {
        if (descricao.length() % 2 == 0) {
            ativo = !ativo;  
        }
    }
};







/*Escreva uma classe Raiva que herda de Emocao. Essa classe deve sobrescrever o método virtual processar, de modo a se comportar da seguinte forma: 
inverte o estado da emoção toda vez que a quantidade de vogais for ímpar.*/

class Raiva : public emocao{
    public:
    Raiva(const std::string& nome, bool ativo = false): emocao(nome, ativo){}
    
    void 


};






/*Escreva uma classe chamada Riley com a capacidade de suportar todas as emoções descritas anteriormente.
Sua classe deve sobrecarregar o operador << para permitir a entrada de uma emoção na sala de controle de Riley. (Lembre-se que Riley suporta várias emoções).
A classe deve implementar um método chamado processar, que recebe uma string contendo a descrição da memória e chama o método processar de cada emoção.
Por fim, sua classe também deve sobrecarregar o operador << para operar junto do cout, a fim de mostrar na tela as emoções ativas de Riley.
*/

class Riley {
};



int main() {  
    Riley riley;


    riley.adicionarEmocao(new Alegria("Alegria"));

    riley.processar("Brincando no parquinho.");

    std::cout << riley << std::endl;


    return 0;  
}
