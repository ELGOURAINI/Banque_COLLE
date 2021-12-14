#pragma once
#include "Operation.h"
#include "Devise.h"
#include "Compte.h"
#include <iostream>
using namespace std;
using namespace Banque;
int OperationCompt_Num_Op = 0;

Banque::Operations::Operations(Compte* C, Devise* m, string lib, string date):Num_Op(++Compt_Num_Op)
{
	this->Montant = m;
	this->C = C;
	this->libelle = lib;
	this->date = date;
}

void Banque::Operations::detail_op() const
{
	cout << "N° de compte :" << this->Num_Op <<endl;
	this->C->print_Compte();
	this->Montant->detail_devise();
	cout << "Date :" << this->date << endl;
}


