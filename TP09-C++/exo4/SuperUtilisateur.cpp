#include "SuperUtilisateur.hpp"
#include <iostream>

SuperUtilisateur::SuperUtilisateur(int id, const std::string& login, int droits, int niveauMod)
    : Utilisateur(id, login),
      Administrateur(id, login, droits),
      Moderateur(id, login, niveauMod) {}

void SuperUtilisateur::afficherInfos() const {
    std::cout << "-- Profil Super Utilisateur --" << std::endl;
    Utilisateur::afficherInfos();
    std::cout << " | Droits : " << droitsAcces
              << " | Moderation : " << niveauModeration << std::endl;
}
