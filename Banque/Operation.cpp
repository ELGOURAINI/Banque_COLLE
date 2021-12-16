#pragma once
#include "Operation.h"
#include "Devise.h"
#include <iostream>

using namespace std;
using namespace Banque;

int Operations::Compt_Num_Op = 0;
Banque::Operations::Operations(Compte* C, Devise* m, string lib, string date):Num_Op(++Operations::Compt_Num_Op)
{
	this->Montant = m;
	this->C = C;
	this->libelle = lib;
	this->date = date;
}

void Banque::Operations::detail_op() const
{
	cout << "      N° de l'operation : " << this->Num_Op << endl;
	this->Montant->detail_devise();
	cout << "      Date :" << this->date << endl;
	cout << "**********************************************************" << endl;
}


