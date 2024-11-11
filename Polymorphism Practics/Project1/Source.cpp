#include<iostream>
#include<list>
using namespace std;
class Person {
	string name;
	int age;
public:
	Person(string name, int age) {
		SetName(name);
		SetAge(age);
	}
	void SetName(string name) {
		if (name.length() > 2)
		{
			this->name = name;
			return;
		}
		cout << "Name is short..." << endl;
	}
	void SetAge(int age) {
		if (age > 0)
		{
			this->age = age;
			return;
		}
		cout << "Age is not true..." << endl;
	}
	virtual void Show()const {
		cout << "Name: " << this->name << endl;
		cout << "Age: " << this->age << endl;
	}
};
class Doctor :public Person {
	string speciality;
	double salary;
public:
	Doctor(string name, int age, string speciality, double salary) :Person(name, age) {
		this->speciality = speciality;
		this->salary = salary;
	}
	void Show()const override{
		Person::Show();
		cout << "                    " << "Doctor:" << endl;
		cout << "Speciality: " << this->speciality << endl;
		cout << "Salary: " << this->salary << endl;
	}
};
class Patient :public Person {
	string complaint;
	bool isInsurance;
public:
	Patient(string name, int age, string complaint, bool isInsurance = 0) :Person(name, age) {
		this->complaint = complaint;
		this->isInsurance = isInsurance;
	}
	void Show()const override {
		Person::Show();
		cout << "            "<<"Patient:" << endl;
		cout << "Complaint: " << this->complaint << endl;
		cout << "isInsurance: " << this->isInsurance << endl;
	}

};
void main() {
	//Doctor* doctor1 = new Doctor("Mahmud", 35, "Dentist", 700);
	//Patient* patient1 = new Patient("Nemet", 23, "Disi agriyr");

	//doctor1->Show();
	//patient1->Show();


	//Doctor* doctor1 = new Doctor("Mahmud", 35, "Dentist", 700);
	//Patient* patient1 = new Patient("Nemet", 23, "Disi agriyr");

	//Person* doctor1 = new Doctor("Mahmud", 35, "Dentist", 700);
	//Person* patient1 = new Patient("Nemet", 23, "Disi agriyr");

	//list<Person>people;
	//people.push_back(*doctor1);
	//people.push_back(*patient1);

	//for (auto person : people) {
	//	person.Show();
	//}


	list<Person*>people;
	people.push_back(new Doctor("Mahmud", 35, "Dentist", 700));
	people.push_back(new Patient("Nemet", 23, "Disi agriyr"));

	for (auto person : people) {
		person->Show();
	}

}