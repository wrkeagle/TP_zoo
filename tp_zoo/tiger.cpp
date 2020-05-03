#include "tiger.h"
#include <iostream>

int tiger::tiger_nb = 0;
static int afterFire;

tiger::tiger()
{
    tiger_nb++;
}
tiger::~tiger(){
    tiger_nb = tiger_nb - 1;
}
int tiger::get_tiger_nb(){
    return (tiger_nb);
}
