#include "Compte.h"
#include "Client.h"
#include "Devise.h"
#include "Operation.h"
#include"OperationR.h"
#include"OperationV.h"
#include"MAD.h"
#include"Euro.h"
#include"DOLLAR.h"
#include"GC.h"
#include <iostream>
using namespace std;
using namespace Banque;
int Compte::comptId = 0;
Devise* Compte::plafond = new MAD(20000);

Banque::Compte::Compte(Client* titu, Devise* dev):idC(++Compte::comptId)
{
	this->ref = new GC(1);
	this->titulaire = titu;
	this->Solde = dev;
	this->listOp = vector<Operations*>();
}

string Banque::Compte::Crediter(Devise* M)
{
	string type;
	if (typeid(*(this->Solde)) == typeid(MAD))
	{
		*M = M->ConvertToMAD();
		type = "MAD";
	}
	else
		if (typeid(*(this->Solde)) == typeid(Euro))
		{
			*M = M->ConvertToEURO();
			type = "EURO";
		}
			
		else
			if (typeid(*(this->Solde)) == typeid(DOLLAR))
			{
				*M = M->ConvertToDOLLAR();
				type = "DOLLAR";
			}
	*(this->Solde) = *(this->Solde) + *M;
	OperationV* op = new OperationV(this, M, type, __DATE__);
	this->addOp(*op);
	return type;
}

bool Banque::Compte::Debiter(Devise* M)
{
	string type;
	bool TF=false;
	//conversion du montant au type de devise qu'ona dans le solde
	if (typeid(*(this->Solde)) == typeid(MAD))
	{
		*M = M->ConvertToMAD();
		type = "MAD";
	}
	else
		if (typeid(*(this->Solde)) == typeid(Euro))
		{
			*M = M->ConvertToEURO();
			type = "EURO";
		}

		else
			if (typeid(*(this->Solde)) == typeid(DOLLAR))
			{
				*M = M->ConvertToDOLLAR();
				type = "DOLLAR";
			}

	//conversion de plafond pour le comparer avec solde
	if(typeid(Compte::plafond) == typeid(Euro))
		plafond=&plafond->ConvertToEURO();
	else if(typeid(Compte::plafond) == typeid(DOLLAR))
		plafond = &plafond->ConvertToDOLLAR();
	else if (typeid(Compte::plafond) == typeid(MAD))
		plafond = &plafond->ConvertToMAD();

	//retrait
	if (*(this->Solde) >= *M && M <= Compte::plafond)
	{
		cout << "retrait";
		*(this->Solde) = *(this->Solde) - *M;
		OperationR* op = new OperationR(this, M, type, __DATE__);
		this->addOp(*op);
		TF= true;
	}
	//ajouter operation
	return TF;
}


bool Banque::Compte::Verser(Compte& C, Devise* D)
{
	string type;
	if (this->Debiter(D))
	{
		this->Debiter(D);  
		type=C.Crediter(D);
		return true;
	}
	return false;
}

void Banque::Compte::addOp(Operations& c)
{
	this->listOp.push_back(&c);
}

void Banque::Compte::print_Compte() const
{
	this->Solde->detail_devise();
	for (unsigned int i = 0; i < this->listOp.size(); i++)
	{
		this->listOp[i]->afficher();
	}
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

Banque::Compte::~Compte()
{
	/**if (this->titulaire != nullptr && this->ref->decre() == 0)
	{
		delete this->titulaire;
		this->titulaire = nullptr;
	}**/
}