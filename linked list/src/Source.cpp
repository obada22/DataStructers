/*
*
* @file  source.cpp
* @description txt türünden bir dosyadan okuyup birer kelime bölüp iki yönlü baðlý listeye atmaktýr.
* @course  Veri yapýlarý /2.B
* @assignment  2. ödev
* @date  25.11.2019
* @author  Umut ZARÝF G151210568
*/

#include <iostream>
#include <fstream>
#include <string>
#include"linkedList.hpp"
using namespace std;
int main() {
	string line = "";
	linkedList list;
	//dosyadan okumak için deðiþken tanýmlamak
	ifstream myfile;
	myfile.open("C:\\Users\\LENOVO\\Desktop\\example.txt");
	//dosya açýlýrsa 
	if (myfile.is_open())
	{
		//içeriði string'e atmak
		getline(myfile, line);

		//dosyayý kapatmak
		myfile.close();
	}//dosya açýlmaza hata mesajý
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


	/*satýrýn toplam index sayýsý - düðümlerdeki toplam index saylarý*/
	int toplamKazanc = line.length() - tasarruf;

	//liste elemanlari yazdir
	list.display();


	cout << "Toplam kazanc : " << toplamKazanc << " Byte." << endl;
	system("pause");

	return 0;
}