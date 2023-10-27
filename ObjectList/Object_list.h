#pragma once
#include <list>
#include <string>
using namespace std;

class Object_list
{
	list<unsigned char*> bytes;
public:
	Object_list();
	void add_item(double number);
	void add_item(string str);
	double getNumber(int index);
	

};

