#include "Hybride.hpp"
#include <iostream>

Hybride::Hybride(const std::string& marque, const std::string& modele, double conso, double autonomie)
    : Vehicule(marque, modele),
      Thermique(marque, modele, conso),
      Electrique(marque, modele, autonomie) {}

void Hybride::afficherCaracteristiques() const {
    std::cout << "-Vehicule Hybride-" << std::endl;
    Vehicule::afficherCaracteristiques();
    std::cout << " | Conso : " << consommationCarburant << " L/100km"
              << " | Autonomie : " << autonomieBatterie << " km" << std::endl;
}
