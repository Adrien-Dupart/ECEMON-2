#ifndef SPECIALE_H
#define SPECIALE_H
#include <string>
#include <Carte.h>

class Speciale : public Carte
{
    // attributs
private :

    // constructeurs/destructeurs
public :

    Speciale(std::string nom, std::string description);
    ~Speciale();

    // methodes
    void display();
};

#endif // SPECIALE_H
