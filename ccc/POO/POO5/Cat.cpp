#include "Cat.h"
#include<iostream>
using namespace std;

Cat::Cat(string n): Animal(n){}

void Cat::meow() {
    cout<<name<<" is meowing: meow!"<<endl;
}