#include "Carte.h"
#include <iostream>
#include <string>

Carte::Carte()
{

}

Carte::~Carte()
{

}


void Carte :: display()
{
    std::cout << std::endl;
    std::cout << " Nom : " << m_nom << std::endl;
    std::cout << " Description : " << m_description << std::endl;

}
