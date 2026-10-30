#ifndef EMPLOYE_POLYVALENT_HPP
#define EMPLOYE_POLYVALENT_HPP

#include "Technicien.hpp"
#include "Comptable.hpp"

class EmployePolyvalent : public Technicien, public Comptable {
public:
    EmployePolyvalent(double salTech, double salCompt);

    void afficherTousSalaires() const;
};

#endif
