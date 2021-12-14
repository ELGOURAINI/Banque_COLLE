#include "Compte.h"
#include "Client.h"
#include "Devise.h"
#include "Operation.h"
#include <iostream>
using namespace std;
using namespace Banque;
int Compte::comptId = 0;
double Compte::plafond = 900;

Banque::Compte::Compte(Client* titu, Devise* dev):idC(++comptId)
{
	this->titulaire = titu;
	this->Solde = dev;
}

void Banque::Compte::Crediter(Devise* M)
{
	*(this->Solde) = *(this->Solde) + *M;
}

bool Banque::Compte::Debiter(Devise* M)
{
	if (*(this->Solde) >= *M && *M <= Compte::plafond)
	{
		*(this->Solde) = *(this->Solde) - *M;
		return true;
	}
	return false;
}


bool Banque::Compte::Verser(Compte& C, Devise* D)
{
	if (this->Debiter(D))
	{
		this->Debiter(D);  
		C.Crediter(D);
		return true;
	}
	return false;

}

void Banque::Compte::addOp(Operations& c)
{
	this->listOp.push_back(c);
}

void Banque::Compte::print_Compte() const
{
	cout << "---------------------------------------------------------" << endl;
	this->titulaire->print_Client();
	this->Solde->print_Devise();
	cout << "---------------------------------------------------------" << endl << endl << endl;
}

Banque::Compte::~Compte()
{

}

Devise& Banque::Compte::pourcentage(double a) const
{
	return *(this->Solde) * a;
}

bool Banque::Compte::permissionDebiter(Devise& M)
{
	if ((M * 2) >= *this->Solde)
		return true;
	return false;
}

