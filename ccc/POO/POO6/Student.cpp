#include<iostream>
#include "Student.h"

using namespace std;

Student::Student(string name, int registration, double grade) {
    this->name = name;
    this->registration = registration;
    this->grade = grade;
}

string Student::getName() {
    return name;
}

void Student::setName(string name) {
    this->name = name;
}

string Student::getRegistration() {
    return registration;
}

void Student::setRegistration(int registration) {
    this->registration = registration;
}

double Student::getGrade() {
    return grade;
}

void Student::setGrade(double grade) {
    if (grade>=0 && grade<=10) {
        this->grade = grade;
    } else {
        cout<<"Invalid grade! Must be between 0 and 10."<<endl;
    }
}

void Student::displayInformation() {
    cout<<"Name: "<<name<<endl;
    cout<<"Registration: "<<registration<<endl;
    cout<<"Grade: "<<grade<<endl;
}
