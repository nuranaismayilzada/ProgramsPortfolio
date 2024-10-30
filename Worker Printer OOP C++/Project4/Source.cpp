#include<iostream>
#include<cassert>
#include<queue>
#include<string>
#include <thread>
#include <chrono>
using namespace std;
class Worker {
	static int static_id;
	int id;
	string name;
	int age;
	double salary;
	string speciality;
public:
	Worker() {
		static_id++;
		this->id = static_id;
		this->name = "No Name";
		this->age = 0;
		this->salary = 0;
		this->speciality = "No speciality";
	}
	Worker(string name, int age, double salary, string speciality) {
		static_id++;
		this->id = static_id;
		this->name = name;
		this->age = age;
		this->salary = salary;
		this->speciality = speciality;
	}
	Worker(const Worker& otherworker) {
		this->id = otherworker.id;
		this->name = otherworker.name;
		this->age = otherworker.age;
		this->salary = otherworker.salary;
		this->speciality = otherworker.speciality;
	}
	Worker& operator=(const Worker& otherworker) {
		this->id = otherworker.id;
		this->name = otherworker.name;
		this->age = otherworker.age;
		this->salary = otherworker.salary;
		this->speciality = otherworker.speciality;
		return *this;
	}
	//get Methods
	int get_Id()const {
		return id;
	}
	string get_Name()const {
		return name;
	}
	int get_Age()const {
		return age;
	}
	double get_Salary()const {
		return salary;
	}
	string get_Speciality()const {
		return speciality;
	}
	//set methods
	void set_Name(string name) {
		int length = name.length();
		if (length > 3 && length < 12)
		{
			this->name = name;
		}
		else {
			assert(!"Name uzunlugu yalnisdir!");
		}
	}
	void setAge(int age) {
		if (age > 0 && age < 80)
		{
			this->age = age;
		}
		else {
			assert(!"Age yalnis formatdadir!");
		}
	}

	void setSalary(double salary) {
		if (salary > 0)
		{
			this->salary = salary;
		}
		else {
			assert(!"Salary duzgun formatda deyil!");
		}
	}

	void setSpeciality(string speciality) {
		int length = speciality.length();
		if (length > 3 && length < 22)
		{
			this->speciality = speciality;
		}
		else {
			assert(!"Speciality uzunlugu yalnisdir!");
		}
	}
	friend ostream& operator<<(ostream& out, const Worker& worker) {
		system("color 5E");
		out << "Id: " << worker.id << endl;
		out << "Name: " << worker.name << endl;
		out << "Age: " << worker.age << endl;
		out << "Salary: " << worker.salary << endl;
		out << "Speciality: " << worker.speciality << endl;
		return out;
	}
	friend istream& operator>>(istream& is, Worker& worker) {
		cout << "Enter name: ";
		getline(is, worker.name);
		cout << "Enter age: ";
		is >> worker.age;
		is.ignore();
		cout << "Enter speciality: ";
		getline(is, worker.speciality);
		cout << "Enter salary: ";
		is >> worker.salary;
		is.ignore();
		worker.static_id++;
		worker.id = worker.static_id;
		return is;
	}
	~Worker() {};
};
int Worker::static_id = 0;
class Printer {
	int count;
	queue<Worker>workers;
public:
	Printer() {
		this->count = 0;
	};
	Printer(const queue<Worker>& workers) :Printer() {
		this->workers = workers;
		this->count = workers.size();
	}
	Printer(const Printer& other) {
		this->count = other.count;
		this->workers = other.workers; 
	}
	Printer& operator=(const Printer& other) {
		this->count = other.count; 
		this->workers = other.workers;
		return *this;
	}

	void Add_Worker(Worker& w) {
		workers.push(w);
		count++;
	}
	void All_Worker_Print() {
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		while (!workers.empty())
		{
			Worker w = workers.front();
			cout << w;
			workers.pop();
			this_thread::sleep_for(chrono::seconds(2));
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	}
	~Printer(){}
};
void main() {


	//Worker w1("Nurana", 22, 2500, "Programmer");
	//Worker w2(w1);
	//cout << w2;
	//cout << endl;
	//Worker w3;
	//w3 = w2;
	//cout << w3;
	//cout << endl;
	//Worker w4;
	//cin >> w4;
	//cout << w4;


	Worker w1("Nurana", 22, 2500, "Programmer");
	Worker w2("Alisa", 25, 3500, "Doctor");
	Worker w3("Ruzgar", 27, 3000, "Police");
	Worker w4("Melissa", 23, 1000, "Designer");
	Worker w5("Aylin", 26, 2000, "Manager");
	Worker w6("Nunu", 24, 800, "Teacher");

	Printer printer1;
	printer1.Add_Worker(w1);
	printer1.Add_Worker(w2);
	printer1.Add_Worker(w3);
	printer1.Add_Worker(w4);
	printer1.Add_Worker(w5);
	printer1.All_Worker_Print();

}
