#ifndef TIGER_H
#define TIGER_H
#include <animals.h>

class tiger : public animals
{
protected:

static int tiger_nb;
static int afterFire;

public:
    tiger();
    virtual ~tiger();
    static int get_tiger_nb();
    
};

#endif // TIGER_H
