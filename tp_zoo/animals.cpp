#include "animals.h"
#include "zoo.h"
#include "eagle.h"
#include "tiger.h"
#include "chicken.h"
#include <iostream>
#include <vector>

using namespace std;

int animals::animals_nb = 0;
int animals::afterFire;
int eagle::afterFire;
int tiger::afterFire;
int chicken::afterFire;

animals::animals()
{
    animals_nb++;
    
    cout << "Remaining animals : " << animals_nb << "." << endl;
}
