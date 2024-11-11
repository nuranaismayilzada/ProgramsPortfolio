#include<iostream>
#include<string>
using namespace std;
//class BaseClass {
//private:
//	int privateBaseField = 13;
//protected:
//	int protectedBaseField = 69;
//public:
//	int publicBaseField = 789;
//};
//
//class DerivedPublic :public BaseClass {
//public:
//	void accessInfo() {
//		cout << ": public Base Class" << endl;
//		cout << "Have access public fields and methods: " << endl;
//		cout << "publicBaseField= " << publicBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Have access protected fields and methods: " << endl;
//		cout << "protectedBaseField= " << protectedBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Don't have access private fields and methods: " << endl;
//		//cout << "privateBaseField= " << privateBaseField << endl;
//	}
//};
//class DerivedProtected :protected BaseClass {
//public:
//	void accessInfo() {
//		cout << ": public Base Class" << endl;
//		cout << "Have access public fields and methods: " << endl;
//		cout << "publicBaseField= " << publicBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Have access protected fields and methods: " << endl;
//		cout << "protectedBaseField= " << protectedBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Don't have access private fields and methods: " << endl;
//		//cout << "privateBaseField= " << privateBaseField << endl;
//	}
//};
//class DerivedPrivate :private BaseClass {
//public:
//	void accessInfo() {
//		cout << ": public Base Class" << endl;
//		cout << "Have access public fields and methods: " << endl;
//		cout << "publicBaseField= " << publicBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Have access protected fields and methods: " << endl;
//		cout << "protectedBaseField= " << protectedBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Don't have access private fields and methods: " << endl;
//		//cout << "privateBaseField= " << privateBaseField << endl;
//	}
//};
//
//class ThirdInheritanceFromPublic :public DerivedPublic {
//public:
//	void accessInfo() {
//		cout << ": public Base Class" << endl;
//		cout << "Have access public fields and methods: " << endl;
//		cout << "publicBaseField= " << publicBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Have access protected fields and methods: " << endl;
//		cout << "protectedBaseField= " << protectedBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Don't have access private fields and methods: " << endl;
//		//cout << "privateBaseField= " << privateBaseField << endl;
//	}
//};
//class ThirdInheritanceFromProtected :public DerivedProtected {
//public:
//	void accessInfo() {
//		cout << ": public Base Class" << endl;
//		cout << "All Base Class public and protected fields and methods are protected." << endl;
//		cout << "publicBaseField= " << publicBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Have access protected fields and methods: " << endl;
//		cout << "protectedBaseField= " << protectedBaseField << endl;
//		cout << string(30, '_') << endl;
//		cout << "Don't have access private fields and methods: " << endl;
//		//cout << "privateBaseField= " << privateBaseField << endl;
//	}
//};
//class ThirdInheritanceFromPrivate :public DerivedPrivate {
//public:
//	void accessInfo() {
//		cout << ": public DerviedPrivate" << endl;
//		cout << "All Base Class public and protected fields and methods are private" << endl;
//	}
//};
//class A {
//public:
//	int fieldA;
//	A() {
//		cout << "Constructor A" << endl;
//	}
//	void methodA() {
//		cout << "Method A" << endl;
//	}
//	void show() {
//		cout << "Show A" << endl;
//	}
//	~A()
//	{
//		cout << "Destructor A" << endl;
//	}
//};
//class B {
//public:
//	int fieldA;
//	B() {
//		cout << "Constructor B" << endl;
//	}
//	void methodA() {
//		cout << "Method B" << endl;
//	}
//	void show() {
//		cout << "Show B" << endl;
//	}
//	~B()
//	{
//		cout << "Destructor B" << endl;
//	}
//};
//class C :public A, public B {
//public:
//	C() {
//		cout << "Constructor C" << endl;
//	}
//	void methodC() {
//		cout << "Method C" << endl;
//	}
//	void show() {
//		cout << "Show C" << endl;
//	}
//	~C()
//	{
//		cout << "Destructor C" << endl;
//	}
//
//};
//class D :public C {
//public:
//	D() {
//		cout << "Constructor D" << endl;
//	}
//	void methodD() {
//		cout << "Method D" << endl;
//	}
//	void show() {
//		cout << "Show D" << endl;
//	}
//	~D()
//	{
//		cout << "Destructor D" << endl;
//	}
//};
//class Base {
//public:
//	Base() {
//		cout << "Constructor Base" << endl;
//	}
//	void Show() {
//		cout << "Show Base" << endl;
//	}
//	~Base()
//	{
//		cout << "Destructor Base" << endl;
//	}
//};
//class DerivedA :virtual public Base {
//public:
//	DerivedA() {
//		cout << "Constructor DerivedA" << endl;
//	}
//	void Show() {
//		cout << "Show DerivedA" << endl;
//	}
//	~DerivedA()
//	{
//		cout << "Destructor DerivedA" << endl;
//	}
//};
//class DerivedB :virtual public Base {
//public:
//	DerivedB() {
//		cout << "Constructor DerivedB" << endl;
//	}
//	void Show() {
//		cout << "Show DerivedB" << endl;
//	}
//	~DerivedB()
//	{
//		cout << "Destructor DerivedB" << endl;
//	}
//};
//class DerivedAB :public DerivedA, public DerivedB {
//public:
//	DerivedAB() {
//		cout << "Constructor DerivedAB" << endl;
//	}
//	void Show() {
//		cout << "Show DerivedAB" << endl;
//	}
//	~DerivedAB()
//	{
//		cout << "Destructor DerivedAB" << endl;
//	}
//};
class Animal {
public:
	string name;
	void virtual Sound() {
		cout << name << " - some sound" << endl;
	}
};
class Dog:public Animal {
public:
	void Sound() override {
		cout << name << " - haw-haw" << endl;
	}
};

class Cat :public Animal {
public:
	void Sound() override {
		cout << name << " - meaw" << endl;
	}
};

class CheshireCat :public Cat {
public:
	void Sound()override {
		cout << name << " - smile" << endl;
	}
};

//void info(Dog dog) {
//	cout << "This is " << dog.name << endl;
//	dog.Sound();
//}
//
//void info(Cat cat) {
//	cout << "This is " << cat.name << endl;
//	cat.Sound();
//}
void info(Animal animal) {
	cout << "This is " << animal.name << endl;
	animal.Sound();
}

void main() {
	//ThirdInheritanceFromPublic object1;
	//object1.accessInfo();
	//object1.publicBaseField;

	/*ThirdInheritanceFromProtected object2;
	object2.accessInfo();*/

	//ThirdInheritanceFromPrivate object3;
	//object3.accessInfo();
	 
	 
	//C cObj;
	//D d;
	
	//DerivedAB objAB;

	//Dog dog;
	//dog.name = "Alabash";
	//info(dog);
	//dog.Sound();


	//Cat cat;
	//cat.name = "Garfield";
	//info(cat);
	//cat.Sound();

	/*CheshireCat cheshire ;
	cheshire.name = "Cheshire";*/
	//cheshire.Sound();
	//info(cheshire);

	Animal* dogP = new Dog();
	Animal* catP = new Cat();
	Animal* chesireP = new CheshireCat();
	dogP->name = "Qarabash";
	dogP->Sound(); 


	
}