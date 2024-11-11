#include<iostream>
#include"Header.h";
#include<Windows.h>
using namespace std;
//class Exception {
//	string text;
//	int line;
//public:
//	Exception(string text, int line) {
//		this->text = text;
//		this->line = line;
//	}
//	friend ostream& operator<<(ostream& out, const Exception& ex) {
//		out << ex.text << " Line: " << ex.line << endl;
//		return out;
//	}
//
//};
//class Something {
//	int age;
//public:
//	Something(int age) {
//		SetAge(age);
//	}
//	void SetAge(int age) {
//		if (age>0)
//		{
//			this->age = age;
//		}
//		else {
//			throw Exception("Invalid age exception!!!",__LINE__);
//		}
//	}
//};
namespace Figures {
	class Rectangle {
		int width;
		int height;
	public:
		Rectangle(int width, int height) {
			this->width = width;
			this->height = height;
		}
	};
}
using Admin::Person;
void main() {
	
	//try
	//{
	//	Something some(7);
	//}
	//catch (Exception ex)
	//{
	//	cout << ex;
	//}
	Figures::Rectangle* rect = new Figures::Rectangle(5, 10);
	Person person1("Nurana");
	person1.Print();
	Admin::Student stu1("aaa");
	stu1.Print();
} 