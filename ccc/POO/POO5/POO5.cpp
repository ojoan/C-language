#include <iostream>
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main() {
    Dog dog("Rex");
    Cat cat("Mimi");

    dog.eat();
    dog.bark();
    dog.sleep();

    cout<<endl;

    cat.eat();
    cat.meow();
    cat.sleep();

    return 0;
}
