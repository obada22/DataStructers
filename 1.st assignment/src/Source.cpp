/**
* @file  
* @description Arraylist kullanarak iki ayrý arraylisteyi oluþturup deðiþikilk yapmak
* @course  Veri Yapýlarý  B2
* @assignment  1. ödev
* @date  03.11.2019
* @author G151210568 Umut Zarif umutzarif34@gmail.com   
*/
#include <iostream>
#include "Kova.h"
using namespace std;

int main()
{
	cout << "please enter the number of kovas : " << endl;
	int kovaSayisi;
	cin >> kovaSayisi;
	cout << endl;

	Kova ko(kovaSayisi);
	int islem = 0;
	do {
		cout << "\n\nislemler: \n[1] toplari Yerlestir\n[2] Toplari Yoket\n[3] Kova Degistir\n[4] Top Degistir\n[5] Kovalari Tersten Yerlestir\n[6] Toplari Tersten Yerlestir\n[7] Cikis\n\n";

		cin >> islem;
		cout << endl;
		switch (islem)
		{
		case 1:
		{
			ko.setObj(kovaSayisi);
			cout << "\n\nToplar olusturulmustur:\n";
			break;
		}
		case 2:
		{
			Kova ku(kovaSayisi);
			cout << "\n\nToplar yok edilmistir:\n";
			break;
		}
		case 3:
		{

			int first;
			int last;
			cout << "\n\nhangi kova :\n";
			cin >> first;
			cout << "\n\nhangi kova ile :\n";
			cin >> last;
			ko.changeKova(first, last, kovaSayisi);
			break;
		}
		case 4:
		{
			cout << "\n\nhangi topu degistirmek istiyorsunuz :\n";
			int first;
			int last;
			cout << "\n\nhangi Top:\n";
			cin >> first;
			cout << "\n\nhangi Top ile :\n";
			cin >> last;
			ko.changeKova(first, last, kovaSayisi);
			break;
		}
		case 5:
		{
			ko.doReverse(kovaSayisi);
			break;
		}
		case 6:
		{
			ko.doReverse(kovaSayisi);
			break;
		}
		case 7:
			break;
		default:
			cout << "lutfen 1-7 arasinda sayi gir";
			break;

		}
	} while (islem != 7);
		return 0;
}