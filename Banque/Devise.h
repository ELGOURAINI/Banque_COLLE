#pragma once
//#include "DOLLAR.h"
//#include "MAD.h"
//#include "Euro.h"
#include <iostream>
using namespace std;
namespace Banque
{
	class DOLLAR;
	class MAD;
	class Euro;
	class Devise
	{
	private:
		double val;
	public:
		Devise(double val);
		Devise& operator+(const Devise&);
		Devise& operator-(const Devise&);
		Devise& operator*(const Devise&);
		Devise& operator*(const double&);
		bool operator>=(const Devise&) const;
		bool operator>=(const double d) const;
		bool operator<=(const Devise&) const;
		bool operator<=(const double d) const;
		void print_Devise() const;
		virtual MAD&ConvertToMAD()=0;
		virtual Euro&ConvertToEURO()=0;
		virtual DOLLAR&ConvertToDOLLAR()=0;
		virtual void detail_devise()const = 0;
		double calculer_val(const double a);
	};
}


