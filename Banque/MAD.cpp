#include "MAD.h"
#include "DOLLAR.h"
#include "EURO.h"
#include "Devise.h"
#include <iostream>
using namespace std;
using namespace Banque;
Banque::MAD::MAD(double val,string type):Devise(val)
{
	this->type = type;
}

MAD&Banque::MAD::ConvertToMAD()
{
	return *this;
}

DOLLAR& Banque::MAD::ConvertToDOLLAR()
{
	double valeur = this->calculer_val(9.25);
	DOLLAR* M = new DOLLAR(valeur, "Dollar");
	return *M;
}

Euro& Banque::MAD::ConvertToEURO()
{
	double valeur = this->calculer_val(10.46);
	Euro* M = new Euro(valeur, "EURO");
	return *M;
}

void Banque::MAD::detail_devise() const
{
	cout << "Devise :  DIRHAM" << endl;
}




