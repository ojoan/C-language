#ifndef C_CAT_H
#define C_CAT_H

#include "Animal.h"


class Cat : public Animal {
    public:
    Cat(string n);

    void meow();
};


#endif //C_CAT_H