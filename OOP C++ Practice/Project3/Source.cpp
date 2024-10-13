#include<iostream>
#include<cassert>
using namespace std;
class Student {
private:
	int id;
	string name;
	string surname;
	int age;
	string group_no;
	string speciality;
	string city;

public:
	//get methods
	static int static_id;

	Student( string name, string surname, int age, string group_no, string speciality, string city) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->group_no = group_no;
		this->speciality = speciality;
		this->city = city;
		static_id++;
		this->id = static_id;
	}

	int get_Id() {
		return id;
	}
	string get_Name() {
		return name;
	}
	string get_Surname() {
		return surname;
	}
	int get_Age() {
		return age;
	}
	string get_Group_No() {
		return group_no;
	}
	string get_Speciality() {
		return speciality;
	}
	string get_City() {
		return city;
	}

	//set methods
	void set_Id(int id) {
		if (id >= 0)
		{
			this->id = id;
		}
		else {
			assert(!"Id duzgun teyin olunmayib.");
		}
	}
	void set_Name(string name) {
		if (name.length() > 5 && name.length() < 15)
		{
			this->name = name;
		}
		else {
			assert(!"Adin uzunlugu duzgun qeyd olunmayib.");
		}

	}
	void set_Surname(string surname) {
		if (surname.length() > 7 && surname.length() < 25)
		{
			this->surname = surname;
		}
		else {
			assert(!"Soyadin uzunlugu duzgun qeyd olunmayib.");
		}
	}
	void set_Age(int age) {
		if (age >= 0 && age < 150)
		{
			this->age = age;
		}
		else {
			assert(!"Yas duzgun qeyd olunmayib.");
		}
	}
	void set_group_no(string group_no) {
		if (group_no.length() > 3 && group_no.length() < 25)
		{
			this->group_no = group_no;
		}
		else {
			assert(!"Qrup nomresi duzgun qeyd olunmayib.");
		}
	}
	void set_Speciality(string speciality) {
		if (speciality.length() > 10 && speciality.length() < 30)
		{
			this->speciality = speciality;
		}
		else {
			assert(!"Speciality duzgun qeyd olunmayib.");
		}
	}
	void set_City(string city) {
		if (city.length() > 10 && city.length() < 30)
		{
			this->city = city;
		}
		else {
			assert(!"Seherin adi duzgun qeyd olunmayib.");
		}

	}
	void Print() {
		cout << "Id:" <<this->id << endl;
		cout << "Name: " << this->name << endl;
		cout << "Surname: " << this->surname << endl;
		cout << "Age: " << this->age << endl;
		cout << "Group_No: " << this->group_no << endl;
		cout << "Speciality: " << this->speciality << endl;
		cout << "City: " << this->city << endl;
	}
};

int Student::static_id = 0;

void main() {
	Student* s1 = new Student("Nurane", "Ismayilzade", 21, "BF104", "Programmer", "Tovuz");
	Student* s2 = new Student("Konul", "Ismayilzade", 23, "BF104", "Doctor", "Nakcivhan");
	Student* s3 = new Student("Ismayil", "Ismayilzade", 22, "BF104", "Police", "Tovuz");

	Student** arr = new Student * [3] {s1, s2, s3};

	for (size_t i = 0; i < 3; i++)
	{
		arr[i]->Print();
		cout << endl;
	}


}