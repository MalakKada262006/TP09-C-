#include "Electrique.hpp"
#include <iostream>

Electrique::Electrique(const std::string& marque, const std::string& modele, double autonomie)
    : Vehicule(marque, modele), autonomieBatterie(autonomie) {}

void Electrique::afficherCaracteristiques() const {
    std::cout << " | Autonomie batterie : " << autonomieBatterie << " km";
}
