#include "ZombieBomber.h"
#include "Zombie.h"
#include <iostream>

using namespace std;

ZombieBomber::ZombieBomber()
{
    //ctor
}

ZombieBomber::ZombieBomber()
{
    //ctor
}

void ZombieBomber::showInfos() const
{
	cout << "Je suis un " << getNom() << endl;
	cout << "J'ai " << getPv() << " PV" << endl;
	cout << "J'ai " << getAttack() << " pts de force" << endl;
}
