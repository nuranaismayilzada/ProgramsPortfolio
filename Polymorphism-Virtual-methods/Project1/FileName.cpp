#include<iostream>
using namespace std;

class Device {
	string name;
public:

	Device(string name) {
		SetName(name);
	}

	string GetName() const {
		return this->name;
	}

	void SetName(string name) {
		if (name.length() < 3) {
			cout << "Wrong name" << endl;
		}
		else {
			this->name = name;
		}
	}

	virtual void Sound() {
		cout << "Sound: " << " ->> some sound" << endl;
	}

	virtual void Show() {
		cout << "Name: " << name << endl;
	}

	virtual void Desc() {
		cout << "Desc: " << " ->> some desc" << endl;
	}
};

class Kettle : public Device {
public:
	Kettle(string name) : Device(name) {
	}

	void Sound() override {
		cout << "Sound: " << " ->> kettle sound" << endl;
	}

	void Show() override {
		cout << "Name: " << GetName() << endl;
	}

	void Desc() override {
		cout << "Desc: " << "->> kettle desc" << endl;
	}
};

class Microwave : public Device {
public:
	Microwave(string name) : Device(name) {
	}

	void Sound() override {
		cout << "Sound: " << " ->> microwave sound" << endl;
	}

	void Show() override {
		cout << "Name: " << GetName() << endl;
	}

	void Desc() override {
		cout << "Desc: " << "->> microwave desc" << endl;
	}
};

class Car : public Device {
public:
	Car(string name) : Device(name) {
	}

	void Sound() override {
		cout << "Sound: " << " ->> car sound" << endl;
	}

	void Show() override {
		cout << "Name: " << GetName() << endl;
	}

	void Desc() override {
		cout << "Desc: " << "->> car desc" << endl;
	}
};
class Ship : public Device {
public:
	Ship(string name) : Device(name) {
	}

	void Sound() override {
		cout << "Sound: " << "->> ship sound" << endl;
	}

	void Show() override {
		cout << "Name: " << GetName() << endl;
	}

	void Desc() override {
		cout << "Desc: " << "->> ship desc"  << endl;
	}
};

void info(Device* device) {
	device->Sound();
	device->Show();
	device->Desc();
	cout << string(30, '_') << endl;
}

void main() {
	Device* device1 = new Kettle("Kettle");
	Device* device2 = new Microwave("Microwave");
	Device* device3 = new Car("Car");
	Device* device4 = new Ship("Ship");

	//info(device1);
	//info(device2);
	//info(device3);
	//info(device4);


	Device* devices[4]{ device1,device2,device3,device4 };
	for (size_t i = 0; i < 4; i++)
	{
		devices[i]->Sound();
		devices[i]->Show();
		devices[i]->Desc();
		cout << endl;
	}

}