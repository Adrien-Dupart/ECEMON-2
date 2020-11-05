#include "Energie.h"
#include <iostream>
#include <string>

Energie::Energie(std::string nom, std::string description, std::string type) : m_type(type)
{
    m_nom = nom;
    m_description = description;
}

Energie::~Energie()
{

}

void Energie :: display()
{

    Carte :: display();
    std::cout << " Type : " << m_type << std::endl;
}
