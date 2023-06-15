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

    float getPoids() const {V
        return poids;
    }

    void setPoids(float _poids) {
        poids = _poids;
    }
};

int main() {

    return 0;
}




