#include "Administrateur.hpp"
#include <iostream>

Administrateur::Administrateur(int id, const std::string& login, int droits)
    : Utilisateur(id, login), droitsAcces(droits) {}

void Administrateur::gererSysteme() const {
    std::cout << "[Admin] " << login << " gere le systeme avec le niveau de droits " << droitsAcces << "." << std::endl;
}

void Administrateur::afficherInfos() const {
    Utilisateur::afficherInfos();
    std::cout << " | Droits d acces : " << droitsAcces;
}
