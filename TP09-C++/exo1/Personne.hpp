#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>

class Personne {
protected:
    std::string nom;
    std::string prenom;

public:
    Personne(const std::string& nom, const std::string& prenom);
    virtual ~Personne() = default;

    virtual void afficher() const;
};

#endif
