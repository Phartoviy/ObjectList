#include "Object_list.h"
#include <iostream>
#include <cstring>
Object_list::Object_list()
{

}

void Object_list::add_item(double number)
{
	unsigned char* a = reinterpret_cast<unsigned char*>(&number);
	bytes.push_back(a);
}

void Object_list::add_item(string str)
{

}

double Object_list::getNumber(int index)
{
	double number;
	auto it = bytes.begin();
	advance(it, index);
	memcpy(&number, *it, sizeof(double));
	return number;
}

/*double Object_list::getNumber(double num)//test
{
	unsigned char* bytes = reinterpret_cast<unsigned char*>(&num);
	double num2;
	memcpy(&num2, bytes, sizeof(double));
	cout << num2;
	return 2.0;
}*/