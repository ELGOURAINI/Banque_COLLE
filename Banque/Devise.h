#pragma once
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
		Devise(double);
		Devise& operator+(const Devise&);
		Devise& operator-(const Devise&);
		Devise& operator*(const Devise&);
		Devise& operator*(const double&);
		bool operator>=(const Devise&) const;
		bool operator<=(const Devise&) const;
	protected:
		void print_Devise(string)const;//aide dans l'affichage de l'euro , mad et dollar
	public:
		virtual MAD&ConvertToMAD()=0;
		virtual Euro&ConvertToEURO()=0;
		virtual DOLLAR&ConvertToDOLLAR()=0;
		virtual void detail_devise()const = 0;//permet d'afficher les details de la devise
	protected:
		double calculer_val(const double a)const;
	};
}


