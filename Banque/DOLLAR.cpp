#include "DOLLAR.h"
#include "MAD.h"
#include "Euro.h"
#include "Devise.h"
#include <iostream>
using namespace std;
using namespace Banque;
Banque::DOLLAR::DOLLAR(double val, string type) :Devise(val)
{
	this->type = type;
}

DOLLAR& Banque::DOLLAR::ConvertToDOLLAR()
{
		return *this;
}

MAD& Banque::DOLLAR::ConvertToMAD()
{
	double valeur = this->calculer_val(9.25);
	MAD* M = new MAD(valeur,"MAD");
	return *M;
}

Euro& Banque::DOLLAR::ConvertToEURO()
{
	double valeur = this->calculer_val(10.46);
	Euro* M = new Euro(valeur,"EURO");
	return *M;
}

void Banque::DOLLAR::detail_devise() const
{
	cout << "Devise :  DOLLAR " << endl;

}




