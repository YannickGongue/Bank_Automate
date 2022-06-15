#include "Kunde.h"
#include "Bank.h"
#include <string>
#include <iostream>

using namespace std;

kunde::kunde()
{
}

kunde::~kunde()
{
}

string kunde::GetPIN()
{
	return this->PIN;
}

void kunde::SetPIN(string strValue)
{
	this->PIN = strValue;
}

int kunde::Betrag_waehlen(string strWährung)
{		
	int iBetrag;
	int iNewBetrag;
	
	cout << "Geben Sie ein, wieviel Geld Sie abheben moechten :" << endl;
	cin >> iBetrag;

	if (strWährung == "Euro" )
	{
		iNewBetrag = iBetrag;
	}
	else
	{
		iNewBetrag = iBetrag / 2;
	}				
	return iNewBetrag;
}


void kunde::GeldKarte_einschieben()
{	
	cout << "Schieben Sie bitte Ihre Karte in den Automaten :" << endl;
	cin >> this->strBenutzname;	
}

bool kunde::PIN_eingeben()
{
	Bank bank;
	string strValue;
	cout << "geben sie Ihr PIN ein :" << endl;
	cin >> this->PIN;
	return bank.zugriff_ueberpruefen(this->strBenutzname, this->PIN);
}

string kunde::Währung_waehlen()
{
	string WährungChoosed;
	string strWährung;

	cout << "Wählen Sie die Währungen aus :" << endl;
	cout << "1: Euro" << endl;
	cout << "2: Dollars" << endl;
	cin >> strWährung;

	if (strWährung == "1")
	{
		WährungChoosed = "Euro";
	}
	else if (strWährung == "2")
	{
		WährungChoosed = "Dollars";		
	}
	else
	{
		cout << "Die eingebene Währung ist nicht gefunden, versuchen nochmal" << endl;
	}

	return WährungChoosed;
}