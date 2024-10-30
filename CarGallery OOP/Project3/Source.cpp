#include<iostream>
#include<cassert>
using namespace std;
class Car {
	static int static_id;
	int id;
	char* model = nullptr;
	int year = 0;
public:
	Car() {
		model = new char[20] {};
		static_id++;
		id = static_id;
	}
	Car(const char* model, int year) :Car() {
		Set_Model(model);
		Set_Year(year);
	}
	Car(const Car& copycar) :Car(copycar.model, copycar.year) {};
	void Set_Model(const char* model) {
		int index = 0;
		for (size_t i = 0; model[i] != '\0'; i++)
		{
			this->model[i] = model[i];
			index++;
		}
		this->model[index + 1] = '\0';
	}
	void Set_Year(int year) {
		assert(!(year <= 0 || year > 2024) && "Year is not true");
		this->year = year;
	}
	char* Get_Model()const {
		return model;
	}
	int Get_Year()const {
		return year;
	}
	int Get_Id() const {
		return id;
	}
	~Car()
	{
		delete[]model;
	}
	friend ostream& operator<<(ostream& out, const Car& car) {
		out << "ID:" << car.id << endl;
		out << "Model: " << car.model << endl;
		out << "Year: " << car.year << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Car& car) {
		cout << "Modeli daxil edin: ";
		in.getline(car.model, 20);
		cout << "Year daxil edin: ";
		in >> car.year;
		in.ignore();
		return in;
	}
};
int Car::static_id = 0;
class CarGallery {
	Car** cars = nullptr;
	int count = 0;
public:
	CarGallery() {
		cars = nullptr;
	}
	void Add_Car() {
		Car* new_car = new Car();
		cin >> (*new_car);
		Car** new_cars = new Car * [count + 1];
		for (size_t i = 0; i < count; i++) {
			new_cars[i] = cars[i];
		}
		new_cars[count] = new_car;
		delete[] cars;
		cars = new_cars;
		count++;
	};
	int Search_Car(int id) {
		for (size_t i = 0; i < count; i++)
		{
			if (cars[i]->Get_Id() == id)
			{
				return i;
			}
		}
		return -1;
	};
	void Delete_Car(int id) {
		int index = Search_Car(id);
		if (index == -1)
		{
			cout << "Car is not here!" << endl;
			return;
		}

		delete cars[index];

		Car** new_cars = new Car * [count - 1];
		int j = 0;

		for (size_t i = 0; i < count; i++)
		{
			if (i == index)
			{
				continue;
			}
			new_cars[j++] = cars[i];
		}

		delete[] cars;

		cars = new_cars;
		count--;
	}



	void Update_Car_Model(int id, const char* model) {
		for (size_t i = 0; i < count; i++)
		{
			int index = Search_Car(id);
			if (index != -1)
			{
				cars[index]->Set_Model(model);
			}
			else {
				assert(!"Index is not found!");
			}
		}
	};
	void Update_Car_Year(int id, int year) {
		for (size_t i = 0; i < count; i++)
		{
			int index = Search_Car(id);
			if (index != -1)
			{
				cars[index]->Set_Year(year);
			}
			else {
				assert(!"Index is not found!");
			}
		}
	};
	friend ostream& operator<<(ostream& out, const CarGallery& gallery) {
		for (size_t i = 0; i < gallery.count; i++)
		{
			out << "----------------------------------------" << endl;
			out << *(gallery.cars[i]) << endl;
		}
		return out;
	}
	~CarGallery()
	{
		for (size_t i = 0; i < count; i++)
		{
			delete cars[i];
		}
		delete[] cars;
	}
};
void main() {
	//Car car1("Toyota", 2015);
	//cout << car1 << endl;
	//Car car2;
	//cin >> car2;
	//cout << car2;
	//Car car3 = car2;
	//cout << car3;

	CarGallery gallery;
	gallery.Add_Car();
	gallery.Add_Car();
	gallery.Add_Car();
	cout << gallery;
	cout << endl;
	cout << "-------------------------" << endl;
	gallery.Delete_Car(2);
	cout << gallery;
	cout << endl;
	gallery.Update_Car_Model(1, "prius");
	cout << endl;
	cout << gallery;
	cout << endl;
	gallery.Update_Car_Year(1,1999);
	cout << endl;
	cout << gallery;
	cout << endl;
}