#include <vector>
#include <string>
#include <iostream>
#include "Template_Class.h"

using namespace std;

int main()
{
	cout << "Hello I am a programmer" << endl;
	cout << "This is prepare for the test" << endl;
	cout << "Creating a template class" << endl;
	cout << "Starting" << endl;
	cout << "--------------------------" << endl;
	//Creating a template vector type of tempClass
	SimpleVector<tempClass> list;
	tempClass obj0("Zero", 0);
	tempClass obj1("One", 1);
	tempClass obj2("Two", 2);
	tempClass obj3("Three", 3);
	tempClass obj4("Four", 4);
	tempClass obj5("Five", 5);
	tempClass obj6("Six", 6);
	tempClass obj7("Seven", 7);
	tempClass obj8("Eight", 8);
	tempClass obj9("Nine", 9);
	tempClass obj10("Ten", 10);
	tempClass obj11("Elevent", 11);
	tempClass obj12("Twelve", 12);
	tempClass obj13("Third-teen", 13);
	tempClass obj14("Four-teen", 14);
	tempClass obj15("Fif-teen", 15);
	tempClass obj16("Six-teen", 16);
	tempClass obj17("Seven-teen", 17);
	tempClass obj18("Eigth-teen", 18);
	tempClass obj19("Nine-teen", 19);
	tempClass obj20("Twenty", 20);
	
	//Testing adding
	list.add(0, obj0);
	list.add(1, obj1);
	list.add(2, obj2);
	list.add(3, obj3);
	list.add(4, obj4);
	list.add(5, obj5);
	list.add(6, obj6);
	list.add(7, obj7);
	list.add(8, obj8);
	list.add(9, obj9);
	list.add(10, obj10);
	list.add(11, obj11);
	list.add(12, obj12);
	list.add(13, obj13);
	list.add(14, obj14);
	list.add(15, obj15);
	list.add(16, obj16);
	list.add(17, obj17);
	list.add(18, obj18);
	list.add(19, obj19);
	list.add(20, obj20);
	//Testing adding
	for (int i = 0; i < list.size(); i++)
		cout << list.get(i).toString() << endl;
	cout << "Count before remove: " << list.size() << endl;
	cout << endl;
	//Testing remove
	for (int i = 0; i < 10; i++)
		list.remove(11);
	for (int i = 0; i < list.size(); i++)
		cout << list.get(i).toString() << endl;
	cout << "Count after remove:" << list.size() << endl;

	getchar();
	return 0;
}