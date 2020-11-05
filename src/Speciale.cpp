#include "Speciale.h"
#include <iostream>
#include <string>

Speciale::Speciale(std::string nom, std::string description)
{
    m_nom = nom;
    m_description = description;
}

Speciale::~Speciale()
{

}

void Speciale :: display()
{
    Carte :: display();
}
