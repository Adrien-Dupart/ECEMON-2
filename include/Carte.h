#ifndef CARTE_H
#define CARTE_H
#include <string>


class Carte
{
    // attributs
protected :

    std::string m_nom;
    std::string m_description;


    // constructeurs/destructeurs
public :

    Carte();
    ~Carte();

    // methodes

    void display();

};

#endif // CARTE_H
