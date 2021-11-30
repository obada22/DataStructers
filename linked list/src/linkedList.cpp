/*
*
* @file  linkedlist.cpp
* @description txt türünden bir dosyadan okuyup birer kelime bölüp iki yönlü baðlý listeye atmaktýr.
* @course  Veri yapýlarý /2.B
* @assignment  2. ödev
* @date  25.11.2019
* @author  Umut ZARÝF G151210568
*/

#include "linkedList.hpp"


/*Yapýcý Fonksyon*/
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
	/*tüm düðümleri dolaþmak*/
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
	/*aranacak kelimeyi düðümleri dolaþaraken bulunursa sayaç ile index numarasý döndürür
	bulunmazsa kelimenin aynýsý döndürülür */
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