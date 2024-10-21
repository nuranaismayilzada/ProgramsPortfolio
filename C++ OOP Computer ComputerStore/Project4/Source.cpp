#include<string>
#include<iostream>
#include<cassert>
using namespace std;
class Computer {
	static int objectId;
	int id;
	char* model;
	char* vendor;
	char* videocard;
	double cpu_hz;
	int ram;
	int disk_size;
	bool isSSD;
public:
	Computer() {
		objectId++;
		this->id = objectId;
		this->model = new char[20] {};
		this->vendor = new char[20] {};
		this->videocard = new char[20] {};
		this->cpu_hz = 0;
		this->ram = 0;
		this->disk_size = 0;
		this->isSSD = false;
	}
	Computer(char* model, char* vendor, char* videocard, double cpu_hz, int ram, int disk_size, bool isSSD) :Computer() {
		this->model = model;
		this->vendor = vendor;
		this->videocard = videocard;
		this->cpu_hz = cpu_hz;
		this->ram = ram;
		this->disk_size = disk_size;
		this->isSSD = isSSD;
	}
	~Computer() {
		delete[] model;
		delete[] vendor;
		delete[] videocard;
	}
	//get methods
	int get_Id() {
		return id;
	}
	char* get_Model() {
		return model;
	}
	char* get_Vendor() {
		return vendor;
	}
	char* get_VideoCard() {
		return videocard;
	}
	double get_CpuHz() {
		return cpu_hz;
	}
	int get_Ram() {
		return ram;
	}
	int get_DiskSize() {
		return disk_size;
	}
	bool get_IsSSD() {
		return isSSD;
	}
	//set methods
	void set_Model(char* model) {
		if (strlen(model) > 0 && strlen(model) < 20)
		{
			this->model = model;
		}
		else {
			assert(!"Modelin adinin uzunlugu duzgun deyil !");
		}
	}
	void set_Vendor(char* vendor) {
		if (strlen(vendor) > 0 && strlen(vendor) < 20)
		{
			this->vendor = vendor;
		}
		else {
			assert(!"Vendorun adinin uzunlugu duzgun deyil !");
		}
	}
	void set_VideoCard(char* videocard) {
		if (strlen(videocard) > 0 && strlen(videocard) < 20)
		{
			this->videocard = videocard;
		}
		else {
			assert(!"Video card-in adinin uzunlugu duzgun deyil !");
		}
	}
	void set_CpuHz(double cpu_hz) {
		if (cpu_hz > 0)
		{
			this->cpu_hz = cpu_hz;
		}
		else {
			assert(!"Cpu Hz 0 dan boyuk olmalidir.");
		}
	}
	void set_Ram(int ram) {
		if (ram > 0)
		{
			this->ram = ram;
		}
		else {
			assert(!"Ram yaddas 0-dan boyuk olmalidir.");
		}
	}
	void set_DiskSize(int disk_size) {
		if (disk_size > 0)
		{
			this->disk_size = disk_size;
		}
		else {
			assert(!"Disk Size 0 dan boyuk olmalidir.");
		}
	}
	void set_IsSSD(bool isSSD) {
		this->isSSD = isSSD;
	}
	void Show_Computer() {
		cout << "Id: " << id << endl;
		cout << "Model: " << model << endl;
		cout << "Vendor: " << vendor << endl;
		cout << "Video-card: " << videocard << endl;
		cout << "Cpu-hz: " << cpu_hz << endl;
		cout << "Ram: " << ram << endl;
		cout << "Disk-size: " << disk_size << endl;
		cout << "isSSD: " << isSSD << endl;
	};
	Computer(const Computer& comp) {
		this->model = new char[20] {*comp.model};
		this->vendor = new char[20] {*comp.vendor};
		this->videocard = new char[20] {*comp.videocard};
		this->cpu_hz = comp.cpu_hz;
		this->ram = comp.ram;
		this->disk_size = comp.disk_size;
		this->isSSD = comp.isSSD;
	}
	Computer& operator=(const Computer& comp) {
		this->vendor = new char[20] {*comp.vendor};
		this->vendor = new char[20] {*comp.vendor};
		this->videocard = new char[20] {*comp.videocard};
		this->cpu_hz = comp.cpu_hz;
		this->ram = comp.ram;
		this->disk_size = comp.disk_size;
		this->isSSD = comp.isSSD;
		return *this;
	}

	friend ostream& operator<<(ostream& os, const Computer& comp) {
		cout << endl;
		os << "Id: " << comp.id << endl;
		os << "Model: " << comp.model << endl;
		os << "Vendor: " << comp.vendor << endl;
		os << "Video-card: " << comp.videocard << endl;
		os << "Cpu-hz: " << comp.cpu_hz << endl;
		os << "Ram: " << comp.ram << endl;
		os << "Disk-size: " << comp.disk_size << endl;
		os << "SSD: " << (comp.isSSD ? "Var" : "Yoxdur") << endl;
		return os;
	}
	friend istream& operator>>(istream& is, Computer& comp) {
		cout << "Komputerin cpu_hz olcusunu daxil edin : ";
		is >> comp.cpu_hz;
		cout << "Komputerin raminin olcusunu daxil edin:";
		cin >> comp.ram;
		cout << "Komputerin yeni disk olcusunu daxil edin: ";
		cin >> comp.disk_size;
		cin.ignore();
		cout << "Komputerin modelini daxil edin: ";
		cin.getline(comp.model, 20);
		cout << "Komputerin vendorunu daxil edin: ";
		cin.getline(comp.vendor, 20);
		cout << "Komputerin videocardini daxil edin : ";
		cin.getline(comp.videocard, 20);
		bool isnewSSD = true;
		return is;
	}
};
int Computer::objectId = 0;
class ComputerStore {
	char* store_name;
	char* store_address;
	Computer** computers;
	int count;
public:
	ComputerStore() {
		store_name = new char [20] {"anonim"};
		store_address = new char [20] {"anonim"};
		count = 1;
		computers = new Computer * [count] {};
	}
	ComputerStore(char* store_name, char* store_address, Computer** computers, int count) :ComputerStore() {
		this->store_name = store_name;
		this->store_address = store_address;
		this->computers = computers;
		this->count = count;
	}
	~ComputerStore()
	{
		delete store_name;
		delete store_address;
		for (int i = 0; i < count; i++) {
			delete computers[i];
		}
		delete[] computers;
	}
	//get methods
	char* get_Storename() {
		return store_name;
	}
	char* get_Storeaddress() {
		return store_address;
	}
	Computer** get_Computers() {
		return computers;
	}
	int get_Count() {
		return count;
	}
	//set methods
	void set_StoreAddress(char* store_address) {
		if (strlen(store_address) > 0 && strlen(store_address) < 50) {
			this->store_address = store_address;
		}
		else {
			assert(!"Address uzunlugu duzgun qeyd edilmeyib!");
		}
	}
	void set_StoreName(char* store_name) {
		if (strlen(store_name) > 0 && strlen(store_name) < 50) {
			this->store_name = store_name;
		}
		else {
			assert(!"Name uzunlugu duzgun qeyd edilmeyib!");
		}
	}
	void set_Count(int count) {
		if (count > 0)
		{
			this->count = count;
		}
		else {
			assert(!"Count sayi duzgun deyil!");
		}
	}
	void set_Computers(Computer** computers, int count) {
		if (count <= 0) {
			assert(!"Mehsul sayi 0-dan boyuk olmalidir.");
		}

		if (computers == nullptr) {
			assert(!"Mehsul gostericisi NULL ola bilmez.");
		}
		this->computers = computers;
		this->count = count;
	}
	ComputerStore(const ComputerStore& comp) {
		this->store_name = new char[30] {*comp.store_name};
		this->store_address = new char[30] {*comp.store_address};
		this->computers = new Computer * [count] {};
		for (size_t i = 0; i < count; i++)
		{
			this->computers[i] = comp.computers[i];
		}
	}
	ComputerStore& operator=(const ComputerStore& comp) {
		this->store_name = new char[30] {*comp.store_name};
		this->store_address = new char[30] {*comp.store_address};
		this->computers = new Computer * [count] {};
		for (size_t i = 0; i < count; i++)
		{
			this->computers[i] = comp.computers[i];
		}
		return *this;
	}


	friend ostream& operator<<(ostream& os, const ComputerStore& comp) {
		os << "Store name: " << comp.store_name << endl;
		os << "Store address: " << comp.store_address << endl;
		int j = 1;
		for (size_t i = 0; i < comp.count; i++)
		{
			os << "Computer " << j << " " << *comp.computers[i] << endl;
			j++;
		}
		return os;
	}
	friend istream& operator>>(istream& is, ComputerStore& comp) {
		cout << "Computer Store-nin name-ni daxil edin:";
		is.getline(comp.store_name, 30);
		cout << endl;
		cout << "Computer Store-nin addresini daxil edin:";
		is.getline(comp.store_address, 30);
		return is;
	}
	void AddComputer() {
		double new_cpu_hz;
		cout << "Elave olunacaq komputerin cpu_hz olcusunu daxil edin:";
		cin >> new_cpu_hz;
		int new_ram;
		cout << "Elave olunacaq komputerin raminin olcusunu daxil edin:";
		cin >> new_ram;
		int new_disk_size;
		cout << "Elave olunacaq komputerin yeni disk olcusunu daxil edin: ";
		cin >> new_disk_size;
		cin.ignore();
		char* new_computer_model = new char[20] {};
		cout << "Elave olunacaq komputerin adini daxil edin: ";
		cin.getline(new_computer_model, 20);
		char* new_computer_vendor = new char[20] {};
		cout << "Elave olunacaq komputerin vendorunu daxil edin: ";
		cin.getline(new_computer_vendor, 20);
		char* new_computer_videocard = new char[20] {};
		cout << "Elave olunacaq komputerin videocardini daxil edin: ";
		cin.getline(new_computer_videocard, 20);
		bool isnewSSD = true;
		Computer* new_computer = new Computer{ new_computer_model,new_computer_vendor,new_computer_videocard
		,new_cpu_hz,new_ram,new_disk_size,isnewSSD };
		Computer** new_computers = new Computer * [count + 1] {};
		for (size_t i = 0; i < count; i++)
		{
			new_computers[i] = this->computers[i];

		}
		new_computers[count] = new_computer;
		delete[]computers;
		computers = new_computers;
		count++;
	}
	void Delete_Computer(int deleted_id) {
		Computer** new_computers = new Computer * [count - 1] {};
		int j = 0;
		for (size_t i = 0; i < count; i++)
		{
			if (computers[i]->get_Id() == deleted_id)
			{
				continue;
			}
			else {
				new_computers[j] = computers[i];
				j++;
			}
		}
		delete[]computers;
		computers = new_computers;
		count--;
	}
};
void main() {
	Computer* c1 = new Computer{ new char[20] {"HP"},new char[30] {"PAVILION"},new char[30] {"SSD"},20.9,16,256,true };
	Computer* c2 = new Computer{ new char[30] {"DEL"},new char[30] {"MARCO"},new char[20] {"HHD"},20.9,8,128,true };
	Computer* c3 = new Computer{ new char[30] {"MAC"},new char[30] {"APPLE"},new char[30] {"SSD"},20.9,32,516,true };
	int size = 3;
	Computer** computers = new Computer * [size] {c1, c2, c3};
	Computer* c4 = new Computer{};
	//cin >> *c4;
	//cout << *c3;
	//cout << *c4;
	//Computer* c6(c1);
	//cout << *c6;
	//cout << endl;
	//Computer* c7;
	//c7 = c2;
	//cout << *c7;
	//Computer* c2 = c1;
	//Computer* c3;
	//c3 = c2;
	//c1->Show_Computer();
	//cout << "------------------" << endl;
	//c2->Show_Computer();
	//cout << "--------------" << endl;
	//c3->Show_Computer();
	//cout << *c1;
	//Computer c4;
	//cin >> c4;
	//cout << c4;
	 
	
	//ComputerStore* cs1 = new ComputerStore(new char[30] {"Baku Electronics"}, new char[30] {"Nerimanov"}, computers, size);
	//cout << *cs1;
	//ComputerStore* cs2(cs1);
	//cout << *cs2;
	//cout << endl;
	//cout << cs2->get_Storename();

	//ComputerStore* cs1 = new ComputerStore(new char[30] {"Baku Electronics"}, new char[30] {"Nerimanov"}, computers, size);
	//cout << *cs1;
	//ComputerStore* cs2;
	//cs2 = cs1;
	//cout << cs1->get_Storename();
	//cout << endl;
	//cout << cs2->get_Storename();

	//ComputerStore* cs1 = new ComputerStore(new char[30] {"Baku Electronics"}, new char[30] {"Nerimanov"}, computers, size);
	//cout << *cs1;
	//cs1->AddComputer();
	//cout << endl;
	//cout << "Komputer elave olunduqdan sonra:" << endl;
	//cout << *cs1;

	//ComputerStore* cs1 = new ComputerStore(new char[30] {"Baku Electronics"}, new char[30] {"Nerimanov"}, computers, size);
	//cout << "Evvel:" << endl;
	//cout << *cs1;
	//cout << "Komputeri sildikden sonra:" << endl;
	//cs1->Delete_Computer(1);
	//cout << *cs1;

}