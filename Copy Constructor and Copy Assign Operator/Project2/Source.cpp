#include<iostream>
#include<string>
#include<cassert>
using namespace std;
class Product {
	static int static_id;
	int id;
	string name;
	string description;
	double price;
	int discount;
public:
	Product() {
		static_id++;
		this->id = static_id;
		name = "";
		description = "";
		price = 0;
		discount = 0;
	}
	Product(string name, string description, double price, int discount) :Product() {
		this->name = name;
		this->description = description;
		this->price = price;
		this->discount = discount;
	}

	//get methods
	int get_Id() {
		return id;
	}

	string get_Name() {
		return name;
	}

	string get_Description() {
		return description;
	}

	double get_Price() {
		return price;
	}

	int get_Discount() {
		return discount;
	}

	//set methods
	void set_Name(string name) {
		if (name.length() > 3 && name.length() < 12)
		{
			this->name = name;
		}
		else {
			assert(!"Name uzunlugu duzgun yazilmayib!");
		}
	}

	void set_Description(string description) {
		if (description.length() > 3 && description.length() < 12)
		{
			this->description = description;
		}
		else {
			assert(!"Name uzunlugu duzgun yazilmayib!");
		}
	}

	void set_Price(double price) {
		if (price > 0)
		{
			this->price = price;
		}
		else {
			assert(!"Price 0-dan boyuk olmalidir!");
		}
	}
	void set_Discount(int discount) {
		if (discount > 0 && discount < 100)
		{
			this->discount = discount;
		}
		else {
			assert(!"Discount 0-dan boyuk 100 den kicik olmalidir!");
		}
	}
	//Show Product
	void Show_Product() {
		cout << "Id: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Description: " << description << endl;
		cout << "Price: " << price << endl;
		cout << "Discount: " << discount << endl;
	}

	//Get Price With Discount
	double getPriceWithDiscount() {
		double priceAfterDiscount;
		priceAfterDiscount = price - (price * discount) / 100;
		return priceAfterDiscount;
	}
	~Product()
	{}
};
int Product::static_id = 0;
class Stock {
	const char* address;
	Product** products;
	int count;
public:
	Stock() {
		address = new char [20] {"anonim"};
		count = 1;
		products = new Product * [count] {};
	}
	Stock(const char* address, Product** products, int count) :Stock() {
		this->address = address;
		this->products = products;
		this->count = count;
	}

	~Stock()
	{
		delete address;
		for (int i = 0; i < count; i++) {
			delete products[i];
		}
		delete[] products;
	}
	//get methods
	const char* get_Address() {
		return address;
	}
	Product** get_Products() {
		return products;
	}
	int get_Count() {
		return count;
	}
	//set methods
	void set_Address(char* address) {
		if (strlen(address) > 0 && strlen(address) < 50) {
			this->address = address;
		}
		else {
			assert(!"Address uzunlugu duzgun qeyd edilmeyib!");
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
	void set_Products(Product** products, int count) {
		if (count <= 0) {
			assert(!"Mehsul sayi 0-dan boyuk olmalidir.");
		}

		if (products == nullptr) {
			assert(!"Mehsul gostericisi NULL ola bilmez.");
		}
		this->products = products;
		this->count = count;
	}
	Stock(const Stock& object) {
		this->address = new char[30] {*object.address};
		this->count = object.count;
		this->products = new Product * [count] {};
		for (int i = 0; i < count; i++)
		{
			this->products[i] = object.products[i];
		}
	}
	Stock& operator=(const Stock& object) {
		this->address = new char[30] {*object.address};
		this->count = object.count;
		this->products = new Product * [count] {};
		for (int i = 0; i < count; i++)
		{
			this->products[i] = object.products[i];
		}
		return *this;
	}
	void Show_Stock() {
		cout << "Address: " << get_Address() << endl;
		cout << "Number of products: " << count << endl;
		cout << "-----------------------------------------------" << endl;
		for (size_t i = 0; i < count; i++)
		{
			products[i]->Show_Product();
			cout << "--------------------------------------------" << endl;
		}
	}
	void Delete_Product(int deleted_id) {
		Product** new_Products = new Product * [count - 1] {};
		int j = 0;
		for (size_t i = 0; i < count; i++)
		{
			if (products[i]->get_Id() == deleted_id)
			{
				continue;
			}
			else {
				new_Products[j] = products[i];
				j++;
			}
		}
		delete[]products;
		products = new_Products;
		count--;
	}
	void ChangeProductDiscount(int newDiscount, int productId) {
		for (size_t i = 0; i < count; i++)
		{
			if (products[i]->get_Id() == productId)
			{
				if (newDiscount > 0 && newDiscount < 100)
				{
					products[i]->set_Discount(newDiscount);
					cout << "Mehsulun endirimi ugurla deyisdirildi." << endl;
				}
				else {
					cout << "Endirim deyeri 0-100 araliginda olmalidir.!"<<endl;
				}
				return;
			}
		}
		cout << "Mehsul tapilmadi." << endl;
	}
	void SearchProduct(int productId) {
		for (size_t i = 0; i < count; i++)
		{
			if (products[i]->get_Id() == productId)
			{
				products[i]->Show_Product();
				return;
			}
		}
		cout << "Product tapilmadi!" << endl;
	}
	void CreateProduct() {
		Product** new_products = new Product * [count+1] {};
		string new_name;
		string new_description;
		double new_price;
		int new_discount;
		cout << "Yeni productun adini daxil edin: ";
		getline(cin, new_name);
		cout << "Yeni productun descriptionunu daxil edin: ";
		getline(cin, new_description);
		cout << "Yeni productun price-ni daxil edin: ";
		cin >> new_price;
		cout << "Yeni productun discountunu daxil edin: ";
		cin >> new_discount;
		cin.ignore();
		Product* new_product = new Product{new_name,new_description,new_price,new_discount};
		for (size_t i = 0; i < count; i++)
		{
			new_products[i] = products[i];
		}
		new_products[count] = new_product;
		delete[]products;
		products = new_products;
		count++;
	}
	Product getProduct(int id) {
		for (size_t i = 0; i < count; i++)
		{
			if (products[i]->get_Id() == id)
			{
				return *products[i];
			}
		}
		assert(!"Product tapilmadi!");
	}

};
void main() {
	Product* p1 = new Product("Defter", "Yasil", 10, 50);
	Product* p2 = new Product("Alma", "Qirmizi", 20, 25);
	Product* p3 = new Product("Karandas", "Qara", 30, 80);
	Product* p4 = new Product("Qelem", "Mavi", 5, 50);
	int size = 4;
	Product** products = new Product * [size] {p1, p2, p3, p4};
	//p4->Show_Product();
	//cout<<p4->getPriceWithDiscount();

	//Stock* s1 = new Stock("Baki", products, size);
	//Stock* s2 = new Stock("Tovuz", products, size);
	//Stock* s3 = new Stock("Gence", products, size);
	//Stock* s4 = new Stock("Sumqayit", products, size);
	//Stock* s5 = new Stock("Ramana", products, size);
	//Stock* s6(s1);
	//cout<<s1->get_Address();
	//cout << endl;
	//cout << s6->get_Address();
	//Stock* s7;
	//cout << endl;
	//s7 = s2;
	//cout << s2->get_Address();
	//cout << endl;
	//cout << s7->get_Address();


	//int stockSize = 5;
	//Stock** stocks = new Stock * [stockSize] {s1, s2, s3, s4, s5};
	//cout << "SILINMEMISDEN EVVEL:" << endl;
	//s1->Show_Stock();
	//cout << "Silinenden sonra: " << endl;
	//s1->Delete_Product(1);
	//s1->Show_Stock();
	//cout << "Endirimden evvel:"<<endl;
	//s1->Show_Stock();
	//s1->ChangeProductDiscount(20, 3);
	//cout << "Endirimden sonra:" << endl;
	//s1->Show_Stock();
	//s1->SearchProduct(2);

	//cout << "Yeni product elave olunmamisdan evvel: " << endl;
	//s1->Show_Stock();
	//s1->CreateProduct();
	//cout << "Yeni product elave olunandan sonra: " << endl;
	//s1->Show_Stock();
	 //s1->getProduct(3);
	 //s1->getProduct(55);
}