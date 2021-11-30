/**
* @file
* @description Arraylist kullanarak iki ayr� arraylisteyi olu�turup de�i�ikilk yapmak
* @course  Veri Yap�lar�  B2
* @assignment  1. �dev
* @date  03.11.2019
* @author G151210568 Umut Zarif umutzarif34@gmail.com
*/
#include <iostream>
#include <string>
#include <windows.h> 
#include "Top.h"
using namespace std;

int renk;
char smbl;
Top::Top()
{
	setRenk(rand() % 15 + 1);
	setSembol(rand() % 90 + 65);
}

int Top::getRenk() {
	return renk;
};

void Top::setRenk(int Renk) {
	renk = Renk;
};

char Top::getsembol() {
	return smbl;
};

void Top::setSembol(char sembol) {
	smbl = sembol;
};

Top::~Top()
{
}
