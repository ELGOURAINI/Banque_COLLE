#pragma once
#include "Devise.h"
namespace Banque
{
	class Euro : public Devise
	{
	private:
		static double tauxDollar;
		static double tauxMAD;
	public:
		Euro(double val);
		Euro&ConvertToEURO();
		MAD&ConvertToMAD();
		DOLLAR&ConvertToDOLLAR();
		void detail_devise()const;
	};

};


