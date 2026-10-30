#ifndef MODERATEUR_HPP
#define MODERATEUR_HPP

#include "Utilisateur.hpp"

class Moderateur : public virtual Utilisateur {
protected:
    int niveauModeration;
public:
    Moderateur(int id, const std::string& login, int niveauMod);
    virtual ~Moderateur() = default;

    void modererContenu() const;
    void afficherInfos() const override;
};

#endif
