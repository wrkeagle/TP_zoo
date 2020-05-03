#ifndef ANIMALS_H
#define ANIMALS_H
#include <zoo.h>

class animals : public zoo
{
protected:
    static int animals_nb;
    static int afterFire;


public:
    animals();
    virtual ~animals();
    static int get_animals_nb;
    static int get_survivors_nb;
    
};

#endif // ANIMALS_H
