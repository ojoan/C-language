#ifndef APRENDENDO_LINGUAGEM_C_STUDENT_H
#define APRENDENDO_LINGUAGEM_C_STUDENT_H
#include<string>

using namespace std;

class Student {
private:
    string name;
    int registration;
    double grade;

public:
    Student(string name, int registration, double grade);

    string getName();
    void setName(string name);

    int getRegistration();
    void setRegistration(int registration);

    double getGrade();
    void setGrade(double grade);

    void displayInformation();

};


#endif //APRENDENDO_LINGUAGEM_C_STUDENT_H