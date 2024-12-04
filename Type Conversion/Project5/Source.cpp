#include<iostream>
#include<vector>
using namespace std;
//Asagidaki classlara methodlar ve fieldler elave edin.
//Show methodlari elave edeceksiniz ve Hamisini animals data structure - a toplayacaqsiniz.
//ShowAll funksiyasinda ise dynamic type cast istifade edin 
// ve Monkey - leri ayri, cat - leri ayri gosterin

class Animal {
public:
	string name;
	Animal(string name) {
		this->name = name;
	}
	string get_Name(string name) {
		return name;
	}
	void set_Name(string name) {
		if (name.length()>3)
		{
			this->name = name;
		}
		else {
			cout << "Name is wrong" << endl;
		}
	}
	virtual void Speak() {
		cout << "???????" << endl;
	}
	virtual void Show() {
		cout << "Animal name: " << name <<endl;
	}
};

class Monkey : public Animal {
public:
	Monkey(string name) :Animal(name) {}
	void Speak() override {
		cout << "UAAA..." << endl;
	}
	void Show()override {
		cout << "Monkey name: " << name << endl;
	}
};

class Cat : public Animal {
public:
	int age;
	Cat(int age, string name) :Animal(name) {
		this->age = age;
	}
	void Speak() override {
		cout << "Miau..." << endl;
	}
	void Show()override {
		cout << "Cat name: " << name << endl;
	}
	int get_Age(int age) {
		return age;
	}
	void set_Age(int age) {
		if (age > 0)
		{
			this->age = age;
		}
		else {
			cout << "Age is wrong" << endl;
		}
	}

};

void Show_All(vector<Animal*> animals) {
	cout << "Monkeys: " << endl;
	for (size_t i = 0; i < animals.size(); i++)
	{
		auto data = dynamic_cast<Monkey*>(animals[i]);
		if (data != nullptr)
		{
			animals[i]->Show();
		}
	}
	cout << endl;
	cout << "Cats: " << endl;
	for (size_t i = 0; i < animals.size(); i++)
	{
		auto data = dynamic_cast<Cat*>(animals[i]);
		if (data != nullptr)
		{
			animals[i]->Show();
		}
	}
}

void main() {
	Animal* monkey1 = new Monkey("Heady1");
	Animal* monkey2 = new Monkey("Heady2");
	Animal* monkey3 = new Monkey("Heady3");
	Animal* monkey4 = new Monkey("Heady4");
	Animal* cat1 = new Cat (2,"Mestan1");
	Animal* cat2 = new Cat(3, "Mestan2");
	Animal* cat3 = new Cat(4, "Mestan3");
	Animal* cat4 = new Cat(5,"Mestan4");

	vector<Animal*>animals;
	animals.push_back(monkey1);
	animals.push_back(monkey2);
	animals.push_back(monkey3);
	animals.push_back(monkey4);
	animals.push_back(cat1);
	animals.push_back(cat2);
	animals.push_back(cat3);
	animals.push_back(cat4);
	
	Show_All(animals);
	for (auto animal :animals)
	{
		delete animal;
	}
	
}