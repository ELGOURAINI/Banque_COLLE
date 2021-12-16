#include "DOLLAR.h"
#include "MAD.h"
#include "Euro.h"
#include "Devise.h"
#include <iostream>

using namespace std;
using namespace Banque;

double DOLLAR::tauxMAD = 9.24;	
double DOLLAR::tauxEuro = 0.88;	

Banque::DOLLAR::DOLLAR(double val):Devise(val)
{
}

DOLLAR& Banque::DOLLAR::ConvertToDOLLAR()
{
	return *this;
}

MAD& Banque::DOLLAR::ConvertToMAD()
{
	double valeur = this->calculer_val(DOLLAR::tauxMAD);
	MAD* M = new MAD(valeur);
	return *M;
}

Euro& Banque::DOLLAR::ConvertToEURO()
{
	double valeur = this->calculer_val(DOLLAR::tauxEuro);
	Euro* M = new Euro(valeur);
	return *M;
}

void Banque::DOLLAR::detail_devise() const
{
	this->print_Devise("DOLLAR");

}




