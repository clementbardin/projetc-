#include <iostream>
#include <string>

using namespace std;

class Boxeur {
private:
    string nom;
    float poids;

public:
    Boxeur(string _nom, float _poids) : nom(_nom), poids(_poids) {
        cout << "Création d'un Boxeur : " << nom << endl;
    }

    ~Boxeur() {
        cout << "Elimination d'un Boxeur : " << nom << endl;
    }

    string getNom() const {
        return nom;
    }

    float getPoids() const {
        return poids;
    }

    void setPoids(float _poids) {
        poids = _poids;
    }
};

class Combat {
private:
    string niveau;
    Boxeur* coinBleu;
    Boxeur* coinRouge;
    Boxeur* vainqueur;

public:
    Combat(string _niveau) : niveau(_niveau), coinBleu(nullptr), coinRouge(nullptr), vainqueur(nullptr) {
        cout << "Constructeur de Combat : " << niveau << endl;
    }

    ~Combat() {
        cout << "Destructeur de Combat : " << niveau << endl;
    }

    string getNiveau() const {
        return niveau;
    }

    void setCoinBleu(Boxeur* _boxeur) {
        coinBleu = _boxeur;
    }

    Boxeur* getCoinBleu() const {
        return coinBleu;
    }

    void setCoinRouge(Boxeur* _boxeur) {
        coinRouge = _boxeur;
    }

    Boxeur* getCoinRouge() const {
        return coinRouge;
    }

    void setVainqueur(Boxeur* _boxeur) {
        vainqueur = _boxeur;
    }

    Boxeur* getVainqueur() const {
        return vainqueur;
    }

    Boxeur* DesignerVainqueur(string couleurCoin) {
        if (couleurCoin == "rouge") {
            vainqueur = coinRouge;
        }
        else if (couleurCoin == "bleu") {
            vainqueur = coinBleu;
        }
        else {
            vainqueur = nullptr;
        }
        return vainqueur;
    }
};

int main() {

    return 0;
}




