#ifndef ENERGIE_H
#define ENERGIE_H
#include <string>
#include <Carte.h>

class Energie : public Carte
{
    // attributs
private :
    std::string m_type;

    // constructeurs/destructeurs
public :

    Energie(std::string nom, std::string description, std::string type);
    ~Energie();

    // methodes

    void display();
};

#endif // ENERGIE_H
