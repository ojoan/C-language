#include <iostream>
#include <string>

using namespace std;

// Classe base
class Pessoa {
public:
    string nome;
    int idade;

    void apresentar() {
        cout << "Ola, meu nome e " << nome
             << " e eu tenho " << idade << " anos." << endl;
    }
};

// Classe derivada
class Aluno : public Pessoa {
public:
    int matricula;

    void estudar() {
        cout << "O aluno esta estudando." << endl << endl;
    }
};

// Classe derivada
class Professor : public Pessoa {
public:
    string disciplina;

    void ensinar() {
        cout << "O professor " << nome
             << " esta ensinando a disciplina de "
             << disciplina << "." << endl;
    }
};

int main() {

    // aluno
    Aluno aluno1;
    aluno1.nome = "Carlos";
    aluno1.idade = 12;

    aluno1.apresentar();
    aluno1.estudar();

    // professor
    Professor professor1;
    professor1.nome = "Leonardo";
    professor1.disciplina = "Linguagem Orientada a Objetos";

    professor1.ensinar();

    return 0;
}