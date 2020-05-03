#ifndef EAGLE_H
#define EAGLE_H
#include <animals.h>


class eagle : public animals
{
protected:

static int eagle_nb;
static int afterFire;

public:
    eagle();
    virtual ~eagle();
    static int get_eagle_nb();

};

#endif // EAGLE_H
