#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(string n) : Animal(n){}

void Dog::bark() {
    cout<<name<<" is barking: AU AU!"<<endl;
}