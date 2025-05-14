#ifndef BECO_DIAGONAL_HPP
#define BECO_DIAGONAL_HPP
#include <string>
using namespace std;

class Livro{
    private:
    string nomea;
    string titulo;

    public:
    Livro(string titulo, string nomea): titulo(titulo), nomea(nomea){}
    string gettitulo()const {
        return titulo;
    }
    string getnomea() const{
        return nomea;
    }


    void settitulo(string titulo){
        this->titulo = titulo;
    }
    void setnomea(string nomea){
        this-> titulo = titulo;
    }

    
};
#endif