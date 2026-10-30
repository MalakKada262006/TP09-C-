#ifndef ADMINISTRATEUR_HPP
#define ADMINISTRATEUR_HPP

#include "Utilisateur.hpp"

class Administrateur : public virtual Utilisateur {
protected:
    int droitsAcces;

public:
    Administrateur(int id, const std::string& login, int droits);
    virtual ~Administrateur() = default;

    void gererSysteme() const;
    void afficherInfos() const override;
};

#endif
