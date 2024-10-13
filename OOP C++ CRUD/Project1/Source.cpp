#include<iostream>
#include <string> 
#include<cassert>
using namespace std;
class User {
	static int static_id;
	int id;
	string fullname;
	string mail;
	int age;
	double height;
public:
	User() {
		this->fullname = "no";
		this->mail = "no";
		this->age = 0;
		this->height = 0;
		static_id++;
		this->id = static_id;
	}
	User(string fullname, string mail, int age, double height):User() {
		this->fullname = fullname;
		this->mail = mail;
		this->age = age;
		this->height = height;
	}
	//get methods
	string get_Fullname() {
		return fullname;
	}
	string get_Mail() {
		return mail;
	}
	int get_Age() {
		return age;
	}
	int get_Id() {
		return id;
	}
	double get_Height() {
		return height;
	}

	//set methods
	void set_Fullname(string fullname) {
		if (fullname.length()>5 && fullname.length()<30)
		{
			this->fullname = fullname;
		}
		else {
			assert(!"Fullname uzunlugu duzgun qeyd edilmeyib!");
		}
	}
	void set_Email(string mail) {
		if (mail.length() > 10 && mail.length() < 30)
		{
			this->mail = mail;
		}
		else {
			assert(!"Mail uzunlugu duzgun qeyd edilmeyib!");
		}
	}
	void set_Age(int age) {
		if (age>18 && age<50)
		{
			this->age = age;
		}
		else {
			assert(!"Age araligi duzgun deyil!");
		}
	}
	void set_Height(double height) {
		if (height > 130 && height < 200)
		{
			this->height = height;
		}
		else {
			assert(!"Height araligi duzgun deyil!");
		}
	}

	void Show_User() {
		cout << "Id:" << id<<endl;
		cout << "Fullname:" << fullname << endl;
		cout << "Mail:" << mail << endl;
		cout << "Age:" << age << endl;
		cout << "Height:" << height << endl;
		cout << endl;
	}
	~User()
	{};
};


void Show_All_Users(User**& users, int& size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << "------------------------------------" << endl;
		users[i]->Show_User();
	}
}
void Delete_User(User**&users,int &size,int delete_user_id) {
	User** new_users = new User * [size-1];
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (users[i]->get_Id() == delete_user_id)
		{
			delete users[i];
			continue;
		}
		new_users[j] = users[i];
		j++;
	}
	delete[]users;
	users = new_users;
	size--;
}
void Create_User(User**& users, int& size) {
	User** new_users = new User * [size + 1];
	string new_email;
	int new_age;
	double new_height;

	cout << "Yeni userin age-ni daxil edin: ";
	cin >> new_age;

	cin.ignore();  
	string new_fullname;
	cout << "Yeni userin fullname-sini daxil edin: ";
	getline(cin, new_fullname); 

	cout << "Yeni userin email-ni daxil edin: ";
	getline(cin, new_email);

	cout << "Yeni userin height-ni daxil edin: ";
	cin >> new_height;
	new_users[size]=new User(new_fullname, new_email, new_age, new_height);
	for (size_t i = 0; i < size; i++)
	{
		new_users[i] = users[i];
	}
	delete[]users;
	users = new_users;
	size++;
}
void Search_User(User**& users, int& size,int search_id) {
	for (size_t i = 0; i < size; i++)
	{
		if (i==search_id-1)
		{
			users[i]->Show_User();
		}
	}
}
int User::static_id = 0;
void main() {
	User* user1 = new User("Nurane Ismayilzade", "nurane@gmail.com", 21, 173);
	User* user2 = new User("Konul Qasimova", "konul@gmail.com", 46, 162);
	User* user3 = new User("Ismayil Ismayilov", "ismayil@gmail.com", 18, 167);
	User* user4 = new User("Gulay Ismayilova", "gulay@gmail.com", 12, 144);
	User* user5= new User("Alisa Ismayilzade", "alisa@gmail.com", 15, 180);
	User** users = new User * [5] {user1, user2, user3,user4,user5};
	int size = 5;
	//cout << "Evvel:" << endl;
	//Show_All_Users(users, size);
	//cout << endl;
	//cout << "Silmek istediyiniz userin id-sini daxil edin:";
	//int delete_user_id;
	//cin >> delete_user_id;
	//cout << endl;
	//cout << "Silinenden sonra: " << endl;
	//Delete_User(users, size, delete_user_id);
	//Show_All_Users(users, size);
	//cout << endl;
	//Create_User(users, size);
	//cout << "Yeni user elave etdikden sonra: " << endl;
	//Show_All_Users(users, size);
	//Search_User(users, size, 5);
}