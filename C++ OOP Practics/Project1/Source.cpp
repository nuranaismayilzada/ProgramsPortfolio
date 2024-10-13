#include<iostream>
#include<cassert>
using namespace std;
#include "MyDataType.h";
#include "PersonMethods.h";
void main() {
	//Person s1;
	//Person arr[10]{};
	//Person* ptr = new Person();


	//Person s1;
	//s1.name = new char[] {"Nurane"};
	//s1.surname = new char[] {"Ismayilzade"};
	//s1.age = 22;
	//s1.print();
	//cout<<s1.age;

	//char* n = new char[] {"Nurane"};
	//char* s = new char[] {"Ismayilzade"};
	//Person p2(n, s, 21);
	//delete[]s;
	//delete[]n;
	//p2.print();

	//Person p3;
	//p3.print();

	//Person* p1;
	//p1 = new Person();
	//p1->print();

	Person* p4 = new Person("Nurane", "Ismayilzade", 22);
	//cout<<p4->GetName();
	p4->SetAge(29);
	p4->print();
}