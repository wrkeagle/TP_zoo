#include "zoo.h"

zoo::zoo()
{

}

zoo::~zoo(){

}
void zoo::ShowZoo(void){
    cout << "il y a " << nb_animal << "animaux dans le zoo" << endl;
    cout << "avec " << nbEagle << " aigles," << nbTigers << " tigres et " << nbChicken << " poulets." << endl;
}

void addAnimal(void)
{
    int nbEagle;
    int nbTigers;
    int nbChicken;

    cout << "Entrez le nombre d'aigles dont le zoo dispose: ";
    cin >> nbTigers;

    cout << "Entrez le nombre de tigres dont le zoo dispose: ";
    cin >> nbEagle;

    cout << "Entrez le nombre de poulets dont le zoo dispose: ";
    cin  >> nbChicken;

}
