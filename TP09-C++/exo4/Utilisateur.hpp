#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <string>

class Utilisateur {
protected:
    int id;
    std::string login;

public:
    Utilisateur(int id, const std::string& login);
    virtual ~Utilisateur() = default;

    virtual void afficherInfos() const;
};

#endif
