#ifndef ENSEIGNANT_CHERCHEUR_HPP
#define ENSEIGNANT_CHERCHEUR_HPP

#include "Personne.hpp"
#include "Chercheur.hpp"

class EnseignantChercheur : public Personne, public Chercheur {
private:
    std::string departement;

public:
    EnseignantChercheur(const std::string& nom, const std::string& prenom, const std::string& domaine, const std::string& dept);

    void afficher() const override;
};

#endif
