#include "OperationV.h"
#include "Operation.h"
#include "Devise.h"
#include "Compte.h"
#include <iostream>
using namespace std;
using namespace Banque;
Banque::OperationV::OperationV(Compte* C, Devise* D, string lib, string date):Operations(C, D, lib, date)
{
}

void Banque::OperationV::afficher()
{
	cout << "Operation de Versement";
	this->detail_op();
}
