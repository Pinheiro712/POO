#include <iostream>
#include <vector>
#include <string>
#include <cctype>

class Emocao {
protected:
    std::string nome;
    bool ativa;

public:
    Emocao(const std::string& nome, bool ativa = false) : nome(nome), ativa(ativa) {}
    virtual ~Emocao() {}

    virtual void processar(const std::string& descricao) = 0;

    bool estaAtiva() const {
        return ativa;
    }

    std::string getNome() const {
        return nome;
    }
};

class Alegria : public Emocao {
public:
    Alegria(const std::string& nome, bool ativa = false) : Emocao(nome, ativa) {}

    void processar(const std::string& descricao) override {
        int count = 0;
        for (char c : descricao) {
            if (!std::isspace(c)) count++;
        }
        if (count % 2 == 0) {
            ativa = !ativa;
        }
    }
};

class Raiva : public Emocao {
public:
    Raiva(const std::string& nome, bool ativa = false) : Emocao(nome, ativa) {}

    void processar(const std::string& descricao) override {
        int vogais = 0;
        for (char c : descricao) {
            char l = std::tolower(c);
            if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') {
                vogais++;
            }
        }
        if (vogais % 2 == 1) {
            ativa = !ativa;
        }
    }
};

class Tristeza : public Emocao {
public:
    Tristeza(const std::string& nome, bool ativa = false) : Emocao(nome, ativa) {}

    void processar(const std::string& descricao) override {
        int maiusculas = 0;
        for (char c : descricao) {
            if (std::isupper(static_cast<unsigned char>(c))) {
                maiusculas++;
            }
        }
        if (maiusculas % 2 == 0) {
            ativa = !ativa;
        }
    }
};

class Riley {
private:
    std::vector<Emocao*> emocoes;

public:
    ~Riley() {
        for (Emocao* e : emocoes) {
            delete e;
        }
    }

    Riley& operator<<(const Emocao& e) {
        if (dynamic_cast<const Alegria*>(&e)) {
            emocoes.push_back(new Alegria(e.getNome()));
        } else if (dynamic_cast<const Raiva*>(&e)) {
            emocoes.push_back(new Raiva(e.getNome()));
        } else if (dynamic_cast<const Tristeza*>(&e)) {
            emocoes.push_back(new Tristeza(e.getNome()));
        }
        return *this;
    }

    void processar(const std::string& descricao) {
        std::cout << "Processando: " << descricao << std::endl;
        for (Emocao* e : emocoes) {
            e->processar(descricao);
        }
        exibirEmocoesAtivas();
    }

    void exibirEmocoesAtivas() const {
        std::cout << "Emoções ativas: ";
        bool alguma = false;
        for (Emocao* e : emocoes) {
            if (e->estaAtiva()) {
                std::cout << e->getNome() << " ";
                alguma = true;
            }
        }
        if (!alguma) {
            std::cout << "Nenhuma";
        }
        std::cout << std::endl;
    }
};




int main() {
    Riley riley;

    riley << Alegria("Alegria");
    riley << Raiva("Raiva");
    riley << Tristeza("Tristeza");

    riley.processar("Brincando no parquinho.");
    riley.processar("Viagem para Disney.");
    riley.processar("Primeiro encontro.");
    riley.processar("Uma noite no museu.");
    riley.processar("O dia em que quebrou um osso.");

    return 0;
}
