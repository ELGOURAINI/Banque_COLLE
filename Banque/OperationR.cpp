#pragma once
#include "Operation.h"
#include "OperationR.h"
#include "Devise.h"
#include "Compte.h"
#include <iostream>

using namespace std;
using namespace Banque;

Banque::OperationR::OperationR(Compte* C, Devise* D, string lib, string date):Operations(C,D,lib,date)
{
}
void Banque::OperationR::afficher()const
{
	cout << "****************" << "Operation de Retrait" << "*********************" <<endl;
	this->detail_op();
}
