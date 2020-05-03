#include "chicken.h"
#include <iostream>

using namespace std;
int chicken::chicken_nb = 0;
static int afterFire;

chicken::chicken()
{
    chicken_nb++;
    afterFire++;

    cout << "is screaming" << endl;

    
}
chicken::~chicken(){
    chicken_nb = chicken_nb - 1;
}
int chicken::get_chicken_nb(){
    return (chicken_nb);
}

int chicken::get_chicken_survived_nb(){
    return(afterFire);
}