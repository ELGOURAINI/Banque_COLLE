#pragma once
namespace Banque
{
	class OperationR :public Operations
	{
	public:
		OperationR(Compte* C, Devise* D, string lib, string date);
		void afficher()const override;
	};
}

