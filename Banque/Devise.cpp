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

bool Banque::Devise::operator>=(const double d) const
{
	return this->val >= d;
}

bool Banque::Devise::operator<=(const Devise& D) const
{
	return this->val <= D.val;
}

bool Banque::Devise::operator<=(const double d) const
{
	return this->val <= d;
}

void Banque::Devise::print_Devise() const
{
	cout << "Solde  :" <<this->val << endl;
}


double Banque::Devise::calculer_val(const double a)
{
	return this->val*a;
}
