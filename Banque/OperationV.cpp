#include "OperationV.h"
#include "Operation.h"
#include <iostream>
using namespace std;
using namespace Banque;
Banque::OperationV::OperationV(Compte* C, Devise* D, string lib, string date):Operations(C, D, lib, date)
{
}

void Banque::OperationV::afficher()const
{
	cout << "****************" << "Operation de Versement" << "*********************"<<endl;
	this->detail_op();
}
