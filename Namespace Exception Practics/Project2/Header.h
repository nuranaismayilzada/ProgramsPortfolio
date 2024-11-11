#pragma once
#include<iostream>
using namespace std;
namespace Admin {
	class Person {
		string name;
	public:
		Person(string name) {
			this->name = name;
		}
		void Print() {
			cout << name << endl;
		}
	};

	class Student {
		string name;
	public:
		Student(string name) {
			this->name = name;
		}
		void Print() {
			cout << name << endl;
		}
	};
}