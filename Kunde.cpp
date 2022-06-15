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

int kunde::Betrag_waehlen(string strW�hrung)
{		
	int iBetrag;
	int iNewBetrag;
	
	cout << "Geben Sie ein, wieviel Geld Sie abheben moechten :" << endl;
	cin >> iBetrag;

	if (strW�hrung == "Euro" )
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

string kunde::W�hrung_waehlen()
{
	string W�hrungChoosed;
	string strW�hrung;

	cout << "W�hlen Sie die W�hrungen aus :" << endl;
	cout << "1: Euro" << endl;
	cout << "2: Dollars" << endl;
	cin >> strW�hrung;

	if (strW�hrung == "1")
	{
		W�hrungChoosed = "Euro";
	}
	else if (strW�hrung == "2")
	{
		W�hrungChoosed = "Dollars";		
	}
	else
	{
		cout << "Die eingebene W�hrung ist nicht gefunden, versuchen nochmal" << endl;
	}

	return W�hrungChoosed;
}