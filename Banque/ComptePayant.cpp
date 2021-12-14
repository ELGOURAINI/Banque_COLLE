#include "ComptePayant.h"
using namespace Banque;
ComptePayant::ComptePayant(Client* c, Devise* d) :Compte(c, d)
{
}

bool ComptePayant::Debiter(Devise* M)
{
	return this->Debiter(&(*M*1.05));
}

bool ComptePayant::Verser(Compte& C, Devise* D)
{
	return this->Verser(C, &(*D*1.05));
}

void Banque::ComptePayant::print() const
{
	cout << "Compte Payant " << endl;
	this->print_Compte();
}
