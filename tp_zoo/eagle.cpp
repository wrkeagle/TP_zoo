#include "eagle.h"
#include <iostream>

using namespace std;
int eagle::eagle_nb = 0;
static int afterFire;

eagle::eagle()
{
    eagle_nb++;
    afterFire++;

    cout << "is flying away." << endl;
}
eagle::~eagle(){
    eagle_nb = eagle_nb - 1;
}
int eagle::get_eagle_nb(){
    return (eagle_nb);
}
