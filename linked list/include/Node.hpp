#ifndef NODE_HPP
#define NODE_HPP
/*
*
* @file  Node.hpp
* @description txt türünden bir dosyadan okuyup birer kelime bölüp iki yönlü baðlý listeye atmaktýr.
* @course  Veri yapýlarý /2.B
* @assignment  2. ödev
* @date  25.11.2019
* @author  Umut ZARÝF G151210568
*/

#include<iostream>
#include <string>
using namespace std;
class Node
{
public:
	string data;
	Node *next, *prev;
	Node(string data);
	~Node();
};

#endif