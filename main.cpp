#include "Zombie.h"

using namespace std;

int main() {
    Zombie z1;
    z1.setNom("Jean");
    z1.setPv(100);
	z1.setAttack(10);
	z1.showInfos();
	cout << endl;

	cout << "zombie 2" << endl;
	Zombie z2(z1);
	z2.setNom("Richard");
	z2.setPv(100);
	z2.setAttack(10);
	z2.showInfos();
	cout << endl;

    return 0;
}
