#include "Utilisateur.hpp"
#include <iostream>

Utilisateur::Utilisateur(int id, const std::string& login)
    : id(id), login(login) {}

void Utilisateur::afficherInfos() const {
    std::cout << "ID : " << id << " | Login : " << login;
}
