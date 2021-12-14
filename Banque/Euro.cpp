#include "Euro.h"
#include "DOLLAR.h"
#include "MAD.h"
#include "Devise.h"
#include <iostream>
using namespace std;
using namespace Banque;
Banque::Euro::Euro(double val, string type) :Devise(val)
{
	this->type = type;
}

Euro& Banque::Euro::ConvertToEURO()
{
	return *this;
}

MAD& Banque::Euro::ConvertToMAD()
{
	double valeur = this->calculer_val(9.25);
	MAD* M = new MAD(valeur, "MAD");
	return *M;
}

DOLLAR& Banque::Euro::ConvertToDOLLAR()
{
	double valeur = this->calculer_val(10.46);
	DOLLAR* M = new DOLLAR(valeur, "EURO");
	return *M;
}

void Banque::Euro::detail_devise() const
{
	cout << "Devise :  EURO " << endl;
}




