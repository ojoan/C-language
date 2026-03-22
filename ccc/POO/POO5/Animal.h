#ifndef C_ANIMAL_H
#define C_ANIMAL_H
#include <string>
using namespace std;

class Animal {
protected:
    string name;
public:
    Animal(string n);

    void eat();
    void sleep();
};


#endif //C_ANIMAL_H