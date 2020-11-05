#include "Creature.h"
#include <iostream>
#include <string>

Creature::Creature(std::string nom, std::string description, std::string type, std::string attaque1,std::string attaque2)
 : m_attaque1(attaque1), m_attaque2(attaque2), m_type(type)
{
    m_nom =nom;
    m_description = description;

}

Creature::~Creature()
{

}

void Creature :: display()
{
    Carte :: display();
    std::cout << " Type  : " << m_type << std::endl;
    std::cout << " Attaque 1 : " << m_attaque1 << std::endl;
    std::cout << " Attaque 2 : " << m_attaque2 << std::endl;
}
