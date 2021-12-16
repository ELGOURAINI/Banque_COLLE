#include "Euro.h"
#include "DOLLAR.h"
#include "MAD.h"
#include <iostream>

using namespace std;
using namespace Banque;

double Euro::tauxDollar = 1.13;
double Euro::tauxMAD = 10.48;

Banque::Euro::Euro(double val):Devise(val)
{
}

Euro& Banque::Euro::ConvertToEURO()
{
	return *this;
}

MAD& Banque::Euro::ConvertToMAD()
{
	double valeur = this->calculer_val(Euro::tauxMAD);
	MAD* M = new MAD(valeur);
	return *M;
}

DOLLAR& Banque::Euro::ConvertToDOLLAR()
{
	double valeur = this->calculer_val(Euro::tauxDollar);
	DOLLAR* M = new DOLLAR(valeur);
	return *M;
}

void Banque::Euro::detail_devise() const
{
	this->print_Devise("EURO");
}




