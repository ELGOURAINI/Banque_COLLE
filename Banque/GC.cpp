#include "GC.h"

Banque::GC::GC(int C)
{
	this->Compt = C;
}

void Banque::GC::incre()
{
	this->Compt += 1;
}

int Banque::GC::decre()
{
	this->Compt -= 1;
	return this->Compt;
}
