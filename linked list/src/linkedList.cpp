/*
*
* @file  linkedlist.cpp
* @description txt t�r�nden bir dosyadan okuyup birer kelime b�l�p iki y�nl� ba�l� listeye atmakt�r.
* @course  Veri yap�lar� /2.B
* @assignment  2. �dev
* @date  25.11.2019
* @author  Umut ZAR�F G151210568
*/

#include "linkedList.hpp"


/*Yap�c� Fonksyon*/
linkedList::linkedList()
{
	head = NULL;
	tail = NULL;
	elemanSayisi = 0;
}

/*listenin basina eklemek*/
void linkedList::push_front(const string data)
{
	Node *yeni = new Node(data);
	if (head==NULL)
	{
		head = yeni;
		tail = yeni;
	}else
	{
		head->prev = yeni;
		yeni->next = head;
		head = yeni;
	}
	elemanSayisi++;
}
/*listenin sonuna eklemek*/
void linkedList::push_back(const string data)
{
	Node *yeni = new Node(data);
	if (head==NULL)
	{
		head = yeni;
		tail = yeni;
	}else
	{
		tail->next = yeni;
		yeni->prev = tail;
		tail = yeni;
	}
	elemanSayisi++;
}
/*listeyi yazdirmak*/
void linkedList::display() 
{
	Node *temp;
	temp = head;
	/*t�m d���mleri dola�mak*/
	while (temp != NULL)
	{
		cout << &temp->prev<<"<-->"<< temp->data << "<-->"<<&temp->next<<"\n";
		temp = temp->next;
	}
}
/*listede bir string aramak*/
string linkedList::bul(string str)
{
	Node *temp;
	temp = head;
	int sayac = 0;
	/*aranacak kelimeyi d���mleri dola�araken bulunursa saya� ile index numaras� d�nd�r�r
	bulunmazsa kelimenin ayn�s� d�nd�r�l�r */
	bool m = false;
	while (temp != NULL)
	{
		if (temp->data == str)
		{
			m = true;
			break;
		}
		else {
			temp = temp->next;
			sayac++;
		}
	}
	if (m)
		return to_string(sayac);
	else
		return str;

}
/*listeyi yok etmek*/
linkedList::~linkedList()
{
}