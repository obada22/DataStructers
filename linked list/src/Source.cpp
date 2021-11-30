/*
*
* @file  source.cpp
* @description txt t�r�nden bir dosyadan okuyup birer kelime b�l�p iki y�nl� ba�l� listeye atmakt�r.
* @course  Veri yap�lar� /2.B
* @assignment  2. �dev
* @date  25.11.2019
* @author  Umut ZAR�F G151210568
*/

#include <iostream>
#include <fstream>
#include <string>
#include"linkedList.hpp"
using namespace std;
int main() {
	string line = "";
	linkedList list;
	//dosyadan okumak i�in de�i�ken tan�mlamak
	ifstream myfile;
	myfile.open("C:\\Users\\LENOVO\\Desktop\\example.txt");
	//dosya a��l�rsa 
	if (myfile.is_open())
	{
		//i�eri�i string'e atmak
		getline(myfile, line);

		//dosyay� kapatmak
		myfile.close();
	}//dosya a��lmaza hata mesaj�
	else cout << "Unable to open file";

	//listeye atanacak kelime ve 
	string word = "";
	int tasarruf = 0;
	string at = "";
	//int a = atoi(word.c_str());
	for (auto x : line)
	{
		if (x == ' ')
		{
			/*bul fonksyonundan string alip push_back fon. ile bagli listeye deger atmak*/
			at = list.bul(word);
			list.push_back(at);
			/*tasarruf */
			tasarruf += at.length();
			word = "";
		}
		else
		{
			word = word + x;
		}
	}
	list.push_back(list.bul(word));
	tasarruf += word.length();


	/*sat�r�n toplam index say�s� - d���mlerdeki toplam index saylar�*/
	int toplamKazanc = line.length() - tasarruf;

	//liste elemanlari yazdir
	list.display();


	cout << "Toplam kazanc : " << toplamKazanc << " Byte." << endl;
	system("pause");

	return 0;
}