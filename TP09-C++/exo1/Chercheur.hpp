#ifndef CHERCHEUR_HPP
#define CHERCHEUR_HPP

#include <string>

class Chercheur {
protected:
    std::string domaineRecherche;

public:
    Chercheur(const std::string& domaine);
    virtual ~Chercheur() = default;

    virtual void afficher() const;
};

#endif
