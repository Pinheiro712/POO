/*exemplo básico do conceito de herança*/
#include <iostream>
#include <string>
using namespace std;


/*herança, por definição, é quando uma 
classe recebe atributos e métodos vindos de outra 
classe, sendo classe pai e classe filha */
class Animal{
    /*classe pai*/
public:
    string nome, som;
    bool vivo = true;
    void comer(){
        cout<<"o animal ta comendo confia."<<endl;
    }

private:

};

class cachorro : public Animal{
public:
    void latir(){
        std::cout<< "Damn Dawg\n";
    };
 };

class gato : public Animal{
public:
    void gatomia(){
        std::cout<<"mial celoco resenha dms\n";
    };
};







 int main(){
    cachorro cachorro;
    gato gato;
    
    std::cout<< gato.vivo<<"\n";

    gato.comer();

    gato.gatomia();
 }

