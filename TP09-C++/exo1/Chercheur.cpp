#include "Chercheur.hpp"
#include <iostream>

Chercheur::Chercheur(const std::string& domaine)
    : domaineRecherche(domaine) {}

void Chercheur::afficher() const {
    std::cout << "Domaine de recherche : " << domaineRecherche;
}
