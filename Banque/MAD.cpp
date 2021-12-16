#include "MAD.h"
#include "DOLLAR.h"
#include "EURO.h"
#include <iostream>

using namespace std;
using namespace Banque;

double MAD::tauxEuro = 0.09;
double MAD::tauxDollar = 0.10;

Banque::MAD::MAD(double val):Devise(val)
{
}

MAD&Banque::MAD::ConvertToMAD()
{
	return *this;
}

DOLLAR& Banque::MAD::ConvertToDOLLAR()
{
	double valeur = this->calculer_val(MAD::tauxDollar);
	DOLLAR* M = new DOLLAR(valeur);
	return *M;
}

Euro& Banque::MAD::ConvertToEURO()
{
	double valeur = this->calculer_val(MAD::tauxEuro);
	Euro* M = new Euro(valeur);
	return *M;
}

void Banque::MAD::detail_devise() const
{
	this->print_Devise("MAD");
}




