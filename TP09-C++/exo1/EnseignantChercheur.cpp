#include "EnseignantChercheur.hpp"
#include <iostream>

EnseignantChercheur::EnseignantChercheur(const std::string& nom, const std::string& prenom, const std::string& domaine, const std::string& dept)
    : Personne(nom, prenom), Chercheur(domaine), departement(dept) {}

void EnseignantChercheur::afficher() const {
    Personne::afficher();
    std::cout << " | ";
    Chercheur::afficher();
    std::cout << " | Departement : " << departement << std::endl;
}
