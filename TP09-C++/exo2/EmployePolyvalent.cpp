#include "EmployePolyvalent.hpp"
#include <iostream>

EmployePolyvalent::EmployePolyvalent(double salTech, double salCompt)
    : Technicien(salTech), Comptable(salCompt) {}

void EmployePolyvalent::afficherTousSalaires() const {
    std::cout << " Bilan Salarial de l Employe Polyvalent " << std::endl;

    Technicien::afficherSalaire();
    Comptable::afficherSalaire();
}
