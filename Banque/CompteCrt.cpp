#include "CompteCrt.h"
#include "Devise.h"
#include "MAD.h"
#include<iostream>
using namespace std;
using namespace Banque;

MAD* decouvert = new MAD(100.0);

Banque::CompteCrt::CompteCrt(Client* c, Devise* d, Devise* decouvert) :Compte(c, d)
{
}

void Banque::CompteCrt::print() const
{
	cout << "Compte courant " << endl;
	this->print_Compte();
}

