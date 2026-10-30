#ifndef SUPER_UTILISATEUR_HPP
#define SUPER_UTILISATEUR_HPP

#include "Administrateur.hpp"
#include "Moderateur.hpp"

class SuperUtilisateur : public Administrateur, public Moderateur {
public:

    SuperUtilisateur(int id, const std::string& login, int droits, int niveauMod);

    void afficherInfos() const override;
};

#endif
