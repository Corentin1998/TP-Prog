#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

using namespace std;

class Zombie
{
private :
    string nom = "Jean";
    int pv = 100;
    int attack = 10;

    public:
        Zombie();
        Zombie(string n);
        Zombie(int p, int a);

    ~Zombie();

        string getNom() const;
        void setNom(string n);

        int getPv() const;
        void setPv(int p);

        int getAttack() const;
        void setAttack(int a);

        void showInfos() const;
};

#endif // ZOMBIE_H
