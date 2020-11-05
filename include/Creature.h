#ifndef CREATURE_H
#define CREATURE_H
#include <string>
#include <Carte.h>

class Creature : public Carte
{
    // attributs
private :

    std::string m_attaque1;
    std::string m_attaque2;
    std::string m_type;

    // constructeurs/destructeurs
public :

    Creature(std::string nom, std::string description, std::string type, std::string attaque1,std::string attaque2);
    ~Creature();

    // methodes

    void display();
};

#endif // CREATURE_H
