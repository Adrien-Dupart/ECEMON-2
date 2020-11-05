#include <iostream>
#include <string>
#include "Carte.h"
#include "Energie.h"
#include <Creature.h>
#include <Speciale.h>

int main()
{
    // on cree une carte energie
    Energie* e1 = new Energie("energie1", "je suis une energie 1", "info");

    // on affiche ses attributs
    e1->display();

    // on cree une creature
    Creature* c1 = new Creature("Mme Rendler"," creature redoutable", " info", "tp note", "turbo ds");

    // on affiche ses attributs
    c1->display();

    // on cree une carte speciale
    Speciale* s1 = new Speciale(" speciale1", "carte speciale");

    // on affiche ses attributs
    s1->display();

    return 0;
}
