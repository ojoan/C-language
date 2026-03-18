#include <iostream>
#include <string>

using namespace std;

class Produto {
private:
    string nome;
    double preco;

public:
    Produto(string nome, double preco){
        this->nome = nome;
        this->preco = preco;
    }

    Produto(string nome) {
        this->nome = nome;
        this->preco = 10;
    }

    void exibirDetalhes() {
        cout<<"Produto: "<< nome << ", Preco: "<<preco<<endl;
    }
};

int main() {

    Produto p1("Caneta", 3.5);
    Produto p2("Lapis");

    p1.exibirDetalhes();
    p2.exibirDetalhes();

    return 0;
}
