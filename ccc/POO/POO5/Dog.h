#ifndef C_DOG_H
#define C_DOG_H
#include "Animal.h"

class Dog : public Animal {
public:
    Dog(string n);

    void bark();
};


#endif //C_DOG_H