#pragma once
#include "Devise.h"
#include <iostream>
using namespace std;
using namespace Banque;

Banque::Devise::Devise(double val)
{
	this->val = val;
}

Devise& Banque::Devise::operator+(const Devise& D) 
{
	this->val= this->val + D.val;
	return *this;
}

Devise& Banque::Devise::operator-(const Devise& D) 
{
	this->val = this->val - D.val;
	return *this;
}

Devise& Banque::Devise::operator*(const Devise& D) 
{
	this->val = this->val * D.val;
	return *this;
}

Devise& Banque::Devise::operator*(const double& D)
{
	this->val = this->val *D;
	return *this;
}

bool Banque::Devise::operator>=(const Devise& D) const
{
	return this->val >= D.val;
}

bool Banque::Devise::operator<=(const Devise& D) const
{
	return this->val <= D.val;
}


void Banque::Devise::print_Devise(string type) const
{
	cout << "      Montant  :" <<this->val <<type <<endl;
}


double Banque::Devise::calculer_val(const double a)const
{
	return this->val*a;
}
