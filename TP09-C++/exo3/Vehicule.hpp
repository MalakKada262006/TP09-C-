#ifndef VEHICULE_HPP
#define VEHICULE_HPP

#include <string>

class Vehicule {
protected:
    std::string marque;
    std::string modele;

public:
    Vehicule(const std::string& marque, const std::string& modele);
    virtual ~Vehicule() = default;

    virtual void afficherCaracteristiques() const;
};

#endif
