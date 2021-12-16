#include <iostream>
#include "Client.h"
#include "Compte.h"
#include "Devise.h"
#include"MAD.h"
#include"Euro.h"
#include"DOLLAR.h"
#include"Operation.h"
#include"OperationR.h"
#include"OperationV.h"
#include"CompteEpargne.h"
#include"CompteCrt.h"
#include"ComptePayant.h"
using namespace std;
using namespace Banque;
int main()
{
    Client* CL1 = new Client("inssaf", "jared", "hay andalous");
    Client* CL2 = new Client("fatima ez-zahrae", "El Gouraini", "hay andalous");

    Devise* Dev1 = new MAD(200000);
    Devise* Dev2 = new MAD(800);
     Devise* Dev3 = new MAD(680);
    /**Devise* Dev4 = new Euro(5);
    Devise* Dev5 = new DOLLAR(200);
    Devise* Dev6 = new DOLLAR(3000);**/

    CompteEpargne* CT1 = new CompteEpargne(CL1, Dev1);
    CompteEpargne* CT2 = new CompteEpargne(CL2, Dev2);
    CL1->addCompte(*CT2);
    CL1->addCompte(*CT1);
    CL1->print_Client();
    //Compte* CC = new CompteCourant(Client1, devise3, decouvert);
    /*ComptePayant* CP = new ComptePayant(CL1, Dev3);
    CL1->addCompte(*CP);

    CP->Crediter(Dev6);*/
    //bool b = CP->debiter(devise4);
    //CT1->Crediter(Dev2);
    bool b = CT1->Debiter(Dev2);
    CT1->Crediter(Dev3);
    CT1->print_Compte();
    Dev1->detail_devise();
    delete CL1;
    /*delete CL2;
    delete CT1;
    delete CT2;*/
    delete Dev1;
    delete Dev2;
    /*delete Dev3;
    delete Dev4;
    delete Dev5;
    delete Dev6;*/







    /**Devise* D = new Devise(2000);
    Devise* D1 = new Devise(200);
    Devise* D2 = new Devise(2000);
    Client* CL1 = new Client("inssaf", "jared", "hay andalous");
    Client* CL2 = new Client("fatima ez-zahrae", "El Gouraini", "hay andalous");
    Compte* C1 = new Compte(CL1,D);
    Compte* C2 = new Compte(CL2, D2);
    C1->print_Compte();
    C2->print_Compte();
    C1->Crediter(D1);
    /*if (C2->Debiter(D1))
        cout << "Vous ne pouvez pas debiter!!!" << endl;
    cout << "Vous ne pouvez pas debiter!!!" << endl;
    C1->print_Compte();
    C2->print_Compte();
    if(C1->Verser(*C2,D1))
        cout << "Versement reussi!!!" << endl;
    else
    {
        cout << "Versement n'est pas fait!!!" << endl;
    }
    C1->print_Compte();
    C2->print_Compte();

    delete D, CL1, CL2, C1;**/
}