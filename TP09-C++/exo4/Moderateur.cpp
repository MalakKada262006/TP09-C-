#include "Moderateur.hpp"
#include <iostream>

Moderateur::Moderateur(int id, const std::string& login, int niveauMod)
    : Utilisateur(id, login), niveauModeration(niveauMod) {}

void Moderateur::modererContenu() const {
    std::cout << "[Moderateur] " << login << " modere le contenu (Niveau " << niveauModeration << ")." << std::endl;
}

void Moderateur::afficherInfos() const {
    std::cout << " | Niveau de moderation : " << niveauModeration;
}
