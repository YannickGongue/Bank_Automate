#include "Bank.h"
#include "Kunde.h"
#include <iostream>

using namespace std;

Bank bank;

Bank::Bank()
{
	this->Benutzername = "Yannick";
	this->PIN = "1234";
	this->Kontostand = 1000;
}

Bank::Bank(string strBenutzername, string strPIN, int iKontostand)
{
	this->Benutzername = strBenutzername;
	this->PIN = strPIN;
	this->Kontostand = iKontostand;
}

Bank::~Bank()
{
}

string Bank::GetPIN()
{
	return this->PIN;
}

void Bank::SetPIN(string strValue)
{
	this->PIN = strValue;
}

string Bank::GetBenutzername()
{
	return this->Benutzername;
}

void Bank::SetBenutzernatme(string strValue)
{
	this->Benutzername = strValue;
}

int Bank::GetKontostand()
{
	return this->Kontostand;
}

void Bank::SetKontostand(int iValue)
{
	this->Kontostand = iValue;
}

bool Bank::zugriff_ueberpruefen(string strBenutzername, string strPIN)
{
	bool bflag;

	if (this->Benutzername == strBenutzername && this->PIN == strPIN)
	{
		bflag = true;
    }
	else
	{
		bflag = false;
	}

	return bflag;
}

bool Bank::Geld_Abheben(int iBetrag)
{
	bool bflag;
		
	if (bank.Kontostand >= iBetrag)
	{			
		bflag = true;
	}
	else
	{
		bflag = false;
	}
	   
	return bflag;
}


int Bank::KontoStand_Anzeigen(int iBetrag)
{
	bank.Kontostand -= iBetrag;
	cout << "Der aktuelle Konstand beträgt :" << bank.Kontostand << endl;
	return  bank.Kontostand;
}


