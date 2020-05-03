#ifndef CHICKEN_H
#define CHICKEN_H
#include <animals.h>

class chicken : public animals
{
protected:

static int chicken_nb;
static int afterFire;

public:
    chicken();
    virtual ~chicken();
    static int get_chicken_nb();
    static int get_chicken_survived_nb();
    
};

#endif // CHICKEN_H
