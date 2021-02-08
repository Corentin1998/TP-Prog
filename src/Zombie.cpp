#include "Zombie.h"

Zombie::Zombie()
{
    nom = "Default";
    pv = 100;
	attack = 0;
}

Zombie::Zombie(string n){
    nom = n;
}

Zombie::Zombie(int p, int a){
    pv = p;
    attack = a;
}

Zombie::~Zombie(){
    cout<<"Le zombie a ete detruit"<<endl;
}

// Nom

string Zombie::getNom() const
{
	return nom;
}

void Zombie::setNom(string n)
{
	nom = n;
}

// PV

int Zombie::getPv() const
{
	return pv;
}

void Zombie::setPv(int p)
{
    pv = p;
}

// Attack

int Zombie::getAttack() const
{
	return attack;
}

void Zombie::setAttack(int a)
{
	if (a < 0) {
		attack = 0;
	}
	else {
		attack = a;
	}
}


void Zombie::showInfos() const
{
	cout << "nom : " << getNom() << endl;
	cout << "pv : " << getPv() << endl;
	cout << "attack : " << getAttack() << endl;
}






