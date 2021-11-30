/**
* @file  kova
* @description Arraylist kullanarak iki ayrý arraylisteyi oluþturup deðiþikilk yapmak
* @course  Veri Yapýlarý  B2
* @assignment  1. ödev
* @date  03.11.2019
* @author G151210568 Umut Zarif umutzarif34@gmail.com  
*/
#include "Top.h"
#include "Kova.h"
#include <time.h>
#include <windows.h> 
#include <iostream>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
Top *top;

Kova::Kova(int kovalar) {
	top = new Top[kovalar];
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 1; i <= kovalar; i++) {
		SetConsoleTextAttribute(hConsole, i);
		cout << "  .|.  \n  . .  \n .   . \n.     .\n#     #\n";
		cout << "#   ";
		cout << "  #\n";
		cout << "#     #\n#######\n\n";
	}
	SetConsoleTextAttribute(hConsole, 7);

	cout << endl << endl;

}

void Kova::setObj(int kovalar)
{
	top = new Top[kovalar];
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 1; i <= kovalar; i++) {
		SetConsoleTextAttribute(hConsole,i);
		cout << "  .|.  \n  . .  \n .   . \n.     .\n#     #\n";
		cout << "#  ";
		SetConsoleTextAttribute(hConsole, top[i].getRenk());
		if (i > 8) {
			cout << top[i].getsembol();
		}
		else {
			cout << top[i].getsembol();
		}
		SetConsoleTextAttribute(hConsole, i);
		cout << "  #\n";
		cout << "#     #\n#######\n\n";
	}
	SetConsoleTextAttribute(hConsole, 7);

	cout << endl << endl;
}

void Kova::changeKova(int first, int last, int kovalar) {
	int ortaRenk;
	int ortatop;

	ortaRenk = top[first - 1].getRenk();
	ortatop = top[first - 1].getsembol();

	top[first - 1].renk = top[last - 1].renk;
	top[first - 1].smbl = top[last - 1].smbl;

	top[last - 1].renk = ortaRenk;
	top[last - 1].smbl = ortatop;
	cout << endl << endl;

	for (int i = 1; i <= kovalar; i++) {
		SetConsoleTextAttribute(hConsole, i);
		cout << "  .|.  \n  . .  \n .   . \n.     .\n#     #\n";
		cout << "#  ";
		SetConsoleTextAttribute(hConsole,i);
		if (i > 8) {
			cout << top[i].getsembol();
		}
		else {
			cout << top[i].getsembol();
		}
		SetConsoleTextAttribute(hConsole, i);
		cout << "  #\n";
		cout << "#     #\n#######\n\n";
	}
	SetConsoleTextAttribute(hConsole, 7);
}

void Kova::reverseKova(Top kovalar[], int size) {
	int y = size - 1;
	Top *newArray;

	newArray = new Top[size];

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for (int i = 1; i <= size; i++) {
		SetConsoleTextAttribute(hConsole, i);
		cout << "  .|.  \n  . .  \n .   . \n.     .\n#     #\n";
		cout << "#  ";
		SetConsoleTextAttribute(hConsole, newArray[i].getRenk());
		if (i > 8) {
			cout << newArray[i].getsembol();
		}
		else {
			cout << newArray[i].getsembol();
		}
		SetConsoleTextAttribute(hConsole, i);
		cout << "  #\n";
		cout << "#     #\n#######\n\n";
	}
	SetConsoleTextAttribute(hConsole, 7);

	cout << endl << endl;

}

void Kova::doReverse(int kovalar) {
	reverseKova(top, kovalar);
}

Kova::~Kova()
{
}