#include<iostream>
#include<string>
#include<cassert>
#include<stack>
using namespace std;
class Engine {
	//fieldlerim
	int engine_no;
	string company;
	double volume;
public:
	//default constructor
	Engine() {
		engine_no = 0;
		company = "";
		volume = 0;
	}
	//parametrli constructor
	Engine(int engine_no, string company, double volume) {
		this->engine_no = engine_no;
		this->company = company;
		this->volume = volume;
	}
	//copy constructor
	Engine(const Engine& obj) {
		this->engine_no = obj.engine_no;
		this->company = obj.company;
		this->volume = obj.volume;
	}
	//copy assignment operator
	Engine& operator=(const Engine& obj) {
		this->engine_no = obj.engine_no;
		this->company = obj.company;
		this->volume = obj.volume;
		return *this;
	}
	//get methods
	int Get_Engine_No()const {
		return engine_no;
	}
	string Get_Company()const {
		return company;
	}
	double Get_Volume()const {
		return volume;
	}
	//set methods
	void Set_Engine_No(int engine_no) {
		if (engine_no < 0)
		{
			assert(!"Wrong engine number format !");
		}
		else {
			this->engine_no = engine_no;
		}
	}
	void Set_Company(string company) {
		if (company.length() > 4 && company.length() < 30)
		{
			this->company = company;
		}
		else {
			assert(!"Wrong company name !");
		}
	}
	void Set_Volume(double volume) {
		if (volume > 0)
		{
			this->volume = volume;
		}
		else {
			assert(!"Wrong volume size !");
		}
	}
	//cout funksiyasi
	friend ostream& operator<<(ostream& out, const Engine& obj) {
		out << "Engine Number: " << obj.engine_no << endl;
		out << "Engine Company: " << obj.company << endl;
		out << "Engine Volume: " << obj.volume << endl;
		return out;
	}
	//cin funksiyasi
	friend istream& operator>>(istream& in, Engine& obj) {
		cout << "Enter engine number:";
		in >> obj.engine_no;
		cout << "Enter engine volume: ";
		in >> obj.volume;
		in.ignore();
		cout << "Enter engine company: ";
		getline(in, obj.company);
		return in;
	}
	//show metodu
	void ShowEngine()const {
		cout << "Engine Number: " << engine_no << endl;
		cout << "Engine Company: " << company << endl;
		cout << "Engine Volume: " << volume << endl;
	}
};
class Vehicle :public Engine {
	//fields
protected:
	static int static_id;
	int id;
	string model;
	string vendor;
	Engine engine;
public:
	//default parametr
	Vehicle() {
		static_id++;
		id = static_id;
		model = "";
		vendor = "";
	}
	//parametrli constructor
	Vehicle(Engine engine, string model, string vendor) {
		static_id++;
		this->id = static_id;
		this->engine = engine;
		this->model = model;
		this->vendor = vendor;
	}
	//copy constructor
	/*Vehicle(const Vehicle& obj) {
		static_id++;
		this->id = static_id;
		this->model = obj.model;
		this->vendor = obj.vendor;
		this->engine = obj.engine;
	}*/
	//copy assignment constructor
	Vehicle& operator=(const Vehicle& obj) {
		this->model = obj.model;
		this->engine = obj.engine;
		this->vendor = obj.vendor;
		return *this;
	}

	//get methods
	int Get_Id()const {
		return id;
	}
	string Get_Model()const {
		return model;
	}
	string Get_Vendor()const {
		return vendor;
	}

	//set methods
	void Set_Model(string model) {
		if (model.length() > 3 && model.length() < 20)
		{
			this->model = model;
		}
		else {
			assert(!"The length of the model name is limited.");
		}
	}
	void Set_Vendor(string vendor) {
		if (vendor.length() > 3 && vendor.length() < 20)
		{
			this->vendor = vendor;
		}
		else {
			assert(!"The length of the vendor name is limited.");
		}
	}
	//cout metodu
	friend ostream& operator<<(ostream& out, const Vehicle& obj) {
		out << "Id: " << obj.Get_Id() << endl;
		out << "Model: " << obj.Get_Model() << endl;
		out << "Vendor: " << obj.Get_Vendor() << endl;
		return out;
	}
	//cin metodu
	friend istream& operator>>(istream& in, Vehicle& obj) {
		cout << "Enter vehicle model: ";
		getline(in, obj.model);
		cout << "Enter vehicle vendor: ";
		getline(in, obj.vendor);
		return in;
	}
	//show metodu
	void ShowVehicle() {
		cout << "ID: " << this->Get_Id() << endl;
		cout << "Vendor: " << this->Get_Vendor() << endl;
		cout << "Model: " << this->Get_Model() << endl;
		engine.ShowEngine();
	}
};
int Vehicle::static_id = 0;
class Car :public Vehicle {
	bool hasSpoiler;
public:
	//default constructor
	Car() {
		this->hasSpoiler = false;
	}
	//parametrli constructor
	Car(Engine engine, string model, string vendor, bool hasSpoiler) :Vehicle(engine, model, vendor) {
		this->hasSpoiler = hasSpoiler;
	}
	Car(const Car& obj) :Vehicle(obj) {
		this->hasSpoiler = obj.hasSpoiler;
	}
	Car& operator=(const Car& obj) {
		this->hasSpoiler = obj.hasSpoiler;
		Vehicle::operator=(obj);
		return *this;
	}

	//get methods
	bool Get_hasSpoiler()const {
		return this->hasSpoiler;
	}
	//cout
	friend ostream& operator<<(ostream& out, const Car& obj) {
		out << "ID: " << obj.Get_Id() << endl;
		out << "Car model: " << obj.Get_Model() << endl;
		out << "Car vendor: " << obj.Get_Vendor() << endl;
		out << "Car spoiler: " << obj.Get_hasSpoiler() << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Car& obj) {
		cout << "Enter vehicle model: ";
		getline(in, obj.model);

		cout << "Enter vehicle vendor: ";
		getline(in, obj.vendor);

		int engine_no;
		cout << "Enter engine number: ";
		in >> engine_no;
		obj.engine.Set_Engine_No(engine_no);

		double volume;
		cout << "Enter engine volume: ";
		in >> volume;
		obj.engine.Set_Volume(volume);

		in.ignore();

		string company;
		cout << "Enter engine company: ";
		getline(in, company);
		obj.engine.Set_Company(company);

		cout << "Has Spoiler:  ";
		in >> obj.hasSpoiler;

		return in;
	}

	//show method
	void Show_Car() {
		ShowVehicle();
		cout << "Has Spoiler: " << this->Get_hasSpoiler();
	}
};
class Ship :public Vehicle {
	bool hasSail;
public:
	Ship() {
		this->hasSail = false;
	}
	Ship(Engine engine, string model, string vendor, bool hasSail) :Vehicle(engine, model, vendor) {
		this->hasSail = hasSail;
	}
	Ship(const Ship& obj) :Vehicle(obj) {
		this->hasSail = obj.hasSail;
	}
	Ship& operator=(const Ship& obj) {
		this->hasSail = obj.hasSail;
		Vehicle::operator=(obj);
		return *this;
	}
	bool Get_hasSail()const {
		return hasSail;
	}
	friend ostream& operator<<(ostream& out, const Ship& obj) {
		out << "ID: " << obj.Get_Id() << endl;
		out << "Ship model: " << obj.Get_Model() << endl;
		out << "Ship vendor: " << obj.Get_Vendor() << endl;
		out << "Ship spoiler: " << obj.Get_hasSail() << endl;
		return out;
	}

	friend istream& operator>>(istream& in, Ship& obj) {
		cout << "Enter ship model: ";
		getline(in, obj.model);
		cout << "Enter ship vendor: ";
		getline(in, obj.vendor);
		int engine_no;
		cout << "Enter engine number: ";
		in >> engine_no;
		obj.engine.Set_Engine_No(engine_no);
		double volume;
		cout << "Enter engine volume: ";
		in >> volume;
		obj.engine.Set_Volume(volume);

		in.ignore();
		string company;
		cout << "Enter engine company: ";
		getline(in, company);
		obj.engine.Set_Company(company);

		cout << "Has Sail:  ";
		in >> obj.hasSail;
		return in;
	}
	void Show_Ship() {
		ShowVehicle();
		cout << "Has Sail: " << this->Get_hasSail();
	}
};
class Airplane :public Vehicle {
	int engineCount;
	int passengersCapacity;
public:
	Airplane() {
		this->engineCount = 0;
		this->passengersCapacity = 0;
	}
	Airplane(Engine engine, string model, string vendor, int engineCount, int passengersCapacity) :Vehicle(engine, model, vendor) {
		this->engineCount = engineCount;
		this->passengersCapacity = passengersCapacity;
	}
	Airplane(const Airplane& obj) :Vehicle(obj) {
		this->engineCount = obj.engineCount;
		this->passengersCapacity = obj.passengersCapacity;
	}
	Airplane& operator=(const Airplane& obj) {
		this->engineCount = obj.engineCount;
		this->passengersCapacity = obj.passengersCapacity;
		Vehicle::operator=(obj);
		return *this;
	}
	//get methods
	int Get_Engine_Count()const {
		return this->engineCount;
	}
	int Get_Passengers_Capacity()const {
		return this->passengersCapacity;
	}
	//set methods
	void Set_Engine_Count(int engineCount) {
		if (this->engineCount > 0)
		{
			this->engineCount = engineCount;
		}
		else {
			assert(!"Engine count is wrong...");
		}
	}
	void Set_Passengers_Capacity(int passengersCapacity) {
		if (this->passengersCapacity > 0)
		{
			this->passengersCapacity = passengersCapacity;
		}
		else {
			assert(!"Passengers Capacity is wrong...");
		}
	}
	void Show_Airplane() {
		ShowVehicle();
		cout << "Engine count: " << this->engineCount << endl;
		cout << "Passengers capacity: " << this->passengersCapacity << endl;
	}
	friend ostream& operator<<(ostream& out, const Airplane& obj) {
		out << "ID: " << obj.Get_Id() << endl;
		out << "Airplane model: " << obj.Get_Model() << endl;
		out << "Airplane vendor: " << obj.Get_Vendor() << endl;
		out << "Airplane engine count: " << obj.Get_Engine_Count() << endl;
		out << "Airplane passengers capacity: " << obj.Get_Passengers_Capacity() << endl;
		return out;
	}

	friend istream& operator>>(istream& in, Airplane& obj) {
		cout << "Enter Airplane model: ";
		getline(in, obj.model);

		cout << "Enter Airplane vendor: ";
		getline(in, obj.vendor);

		int engine_no;
		cout << "Enter Airplane number: ";
		in >> engine_no;
		obj.engine.Set_Engine_No(engine_no);

		double volume;
		cout << "Enter engine volume: ";
		in >> volume;
		obj.engine.Set_Volume(volume);

		in.ignore();
		string company;
		cout << "Enter engine company: ";
		getline(in, company);
		obj.engine.Set_Company(company);

		int engine_Count;
		cout << "Enter Airplane Engine count: ";
		in >> obj.engineCount;

		int passengers_Capacity;
		cout << "Enter Passengers Capacity: ";
		in >> obj.passengersCapacity;
		return in;
	}
};
class VehicleDepo {
	stack<Car>cars;
	stack<Ship>ships;
	stack<Airplane>Airplanes;
public:
	void AddCar(Car car) {
		cars.push(car);
	}
	void AddShip(Ship ship) {
		ships.push(ship);
	}
	void AddAirplane(Airplane airplane)
	{
		Airplanes.push(airplane);
	}
	void ShowAllVehicles() {
		cout << "\t\t\t------- All Cars------\t\t\t" << endl;
		stack <Car> otherCars = cars;
		while (!otherCars.empty())
		{
			cout << "\t\t\t" << otherCars.top() << "\t\t\t" << endl;
			otherCars.pop();
		}

		cout << "\t\t\t------ All Ships----------\t\t\t" << endl;
		stack <Ship> otherShips = ships;
		while (!otherShips.empty())
		{
			cout << "\t\t\t" << otherShips.top() << "\t\t\t" << endl;
			otherShips.pop();
		}

		cout << "\t\t\t ---------- All Airplanes-----------\t\t\t" << endl;
		stack <Airplane> otherAirplanes = Airplanes;
		while (!otherAirplanes.empty()) {
			cout <<"\t\t\t" <<otherAirplanes.top()<<"\t\t\t" << endl;
			otherAirplanes.pop();
		}
	}
};
void main() {
	//Engine classini yoxlamaq


	//Engine engine1(1, "Cummins", 5.0);
	//Engine engine2(22, "Caterpillar", 2.3);
	//Engine engine3(333, "Honda", 6.1);
	//Engine engine4(21, "Ford", 4.2);
	//Engine engine5(57, "Toyota", 9.2);
	//Engine engine6(engine4);
	//cout << engine6;
	//Engine engine7;
	//engine7 = engine3;
	//cout << endl;
	//cout << engine7;
	//cout << endl;
	//Engine engine8;
	//cin >> engine8;
	//cout << endl;
	//cout << engine8;
	//cout << endl;
	//engine5.ShowEngine();




	//Vehicle clasini yoxlamaq

	//Engine engine1(1, "Cummins", 5.0);
	//Engine engine2(22, "Caterpillar", 2.3);
	//Vehicle vehicle1(engine1, "F30", "BMW");
	//cout << vehicle1;
	//cout << endl;
	//Vehicle vehicle2(vehicle1);
	//cout << vehicle2;
	//cout << endl;
	//Vehicle vehicle3;
	//vehicle3 = vehicle1;
	//cout << vehicle3;
	//cout << endl;
	//Vehicle vehicle4 = vehicle1;
	//vehicle4.ShowVehicle();
	//cout << endl;
	//Vehicle vehicle5;
	//cin >> vehicle5;
	//cout << vehicle5;


	//Car clasinin isledilmesi
	//Engine engine1(1, "Cummins", 5.0);
	//Car car1(engine1, "F30", "BMW", true);
	//cout << car1;
	//car1.Show_Car();
	//Car car2(car1);
	//cout << car2;
	//car2.Show_Car();
	//Car car3;
	//car3 = car1;
	//car3.Show_Car();
	//Car car4;
	//cin >> car4;
	//cout << endl;
	//cout << car4;


	//Ship classinin isledilmesi
	//Engine engine1(1, "Cummins", 5.0);
	//Car car1(engine1, "F30", "BMW", true);
	//Ship ship1(engine1, "Model1", "vendor1", 1);
	//cout << ship1;
	//cout << endl;
	//Ship ship2(ship1);
	//ship2.Show_Ship();
	//cout << endl;
	//cout << endl;
	//Ship ship3;
	//ship3 = ship1;
	//ship3.Show_Ship();
	//cout << endl << endl << endl;
	//Ship ship4;
	//cin >> ship4;
	//cout << ship4;

	//Airplane classinin isledilmesi
	/*Engine engine1(1, "Cummins", 5.0);
	Car car1(engine1, "F30", "BMW", true);
	Airplane airplane1(engine1, "Airplane1", "Vendor1", 2, 200);
	cout << airplane1;
	cout << endl<<endl;
	Airplane airplane2(airplane1);
	cout << airplane2;
	cout << endl << endl;
	Airplane airplane3;
	airplane3 = airplane1;
	cout << airplane3;
	cout << endl << endl;
	airplane3.Show_Airplane();
	cout << endl << endl;
	cout << endl << endl;
	Airplane airplane4;
	cin >> airplane4;
	cout << airplane4;*/

	//VehicleDepo
	VehicleDepo vehicledepo;
	Engine engine1(1, "Cummins", 5.0);
	Car car1(engine1, "F30", "BMW", true);
	Car car2(engine1, "F90", "BMW", true);

	Ship ship1(engine1, "Model1", "vendor1", 1);
	Ship ship2(engine1, "ModelShip2", "vendor2", 1);

	Airplane airplane1(engine1, "Airplane1", "Vendor1", 2, 200);

	vehicledepo.AddCar(car2);
	vehicledepo.AddCar(car1);
	vehicledepo.AddShip(ship2);
	vehicledepo.AddShip(ship1);

	vehicledepo.AddAirplane(airplane1);

	vehicledepo.ShowAllVehicles();

}