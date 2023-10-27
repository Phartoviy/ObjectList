#include <iostream>
#include "Object_list.h"

using namespace std;

int main()
{
	Object_list obj;
	obj.add_item(4);
	cout << obj.getNumber(0) << endl;



	return 0;
}