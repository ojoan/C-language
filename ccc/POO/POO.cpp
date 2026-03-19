#include <iostream>
#include <string>

using namespace std;

// Classe base
class Person {
public:
    string name;
    int age;

    void present() {
        cout << "Hello, my name is " << name
             << " and I am " << age << " years old." << endl;
    }
};

// Classe derivada
class Student : public Person {
public:
    int matricula;

    void study() {
        cout << "The student is studying." << endl << endl;
    }
};

// Classe derivada
class Professor : public Person {
public:
    string discipline;

    void teach() {
        cout << "Professor " << name
             << " is teaching the discipline of "
             << discipline << "." << endl;
    }
};

int main() {

    // aluno
    Student student1;
    student1.name = "Carlos";
    student1.age = 12;

    student1.present();
    student1.study();

    // professor
    Professor professor1;
    professor1.name = "Leonardo";
    professor1.discipline = "Object-Oriented Language";

    professor1.teach();

    return 0;
}