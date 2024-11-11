#include<iostream>
using namespace std;
//Inheritance novleri:
//1.Single Inheritance
//2.Multilevel Inheritance
//3.Multible Inheritance
//4.Hierarchy

#pragma region Single Inheritance
//class A { //base
//
//};
//class B : public A { //derived
//
//};
#pragma endregion

#pragma region Multilevel Inheritance
//class A { //base
//protected:
//	int x;
//};
//
//class B :public A { //derived //base
//public:
//	B() {
//		this->x = x;
//	}
//};
//
//class C :public B { //derived
//public:
//	C() {
//		this->x;
//	}
//};
#pragma endregion


#pragma region Multible Inheritance
//class A {  //Base
//public:
//	int x;
//	A(int x) {
//		this->x = x;
//		cout << "A worked" << endl;
//	}
//};
//
//class B {   //Base
//public:
//	int y;
//	B(int y) {
//		this->y= y;
//		cout << "B worked" << endl;
//	}
//};
//
//class C :public A, public B {   //Derived
//public:
//	C(int x, int y) :A(x), B(y) {
//		cout << "C worked" << endl;
//	}
//};
#pragma endregion

#pragma region Hierarcny
class A{
public:
	A() {
		cout << "A constructor worked" << endl;
	}
};//base
class B:virtual public A{
public:
	B() {
		cout << "B constructor worked" << endl;
	}
};  //derived



class C:virtual public A{
public:
	C():A() {
		cout << "C constructor worked" << endl;
	}
};  //derived base



class D:public B{
public:
	D():B() {
		cout << "D constructor worked" << endl;
	}
}; //derived


class F :public B, public C {
public:
	F() :B(), C() {
		cout << "F constructor worked" << endl;
	}
};

#pragma endregion


void main() {
	//C c(23,5);
	F f;

}