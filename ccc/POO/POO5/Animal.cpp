#include "Animal.h"
#include <iostream>
#include <ostream>

using namespace std;

Animal::Animal(string n) {
    name = n;
}

void Animal::eat() {
    cout<<name<<" is eating"<<endl;
}

void Animal::sleep() {
    cout<<name<<" is sleeping"<<endl;
}
