#pragma once
//Out of class
const char* Person::GetName() {
	return this->name;
}

const char* Person::GetSurname() {
	return this->surname;
}

int Person::GetAge() {
	return this->age;
}

Person::Person() {
	cout << "Object yaradildi" << endl;
	name = nullptr;
	surname = nullptr;
	age = 0;
}
Person::Person(const char* name, const char* surname, int age) {
	SetName(name);
	SetSurname(surname);
	SetAge(age);
}
void Person::SetName(const char* name) {
	int len = strlen(name);
	if (len > 3 && len <= 12)
	{
		if (this->name != nullptr)
		{
			delete[] this->name;
		}
		this->name = new char[len + 1];
		for (size_t i = 0; i < len; i++)
		{
			this->name[i] = name[i];
		}
		this->name[len] = '\0';
	}
	else {
		assert(!"Adin uzunlugu dogru deyil.");
	}
}
void Person::SetSurname(const char* surname) {
	int len = strlen(surname);
	if (len >= 5 && len <= 22)
	{
		if (this->surname != nullptr)
		{
			delete[] this->surname;
		}
		this->surname = new char[len + 1];
		for (size_t i = 0; i < len; i++)
		{
			this->surname[i] = surname[i];
		}
		this->surname[len] = '\0';
	}
	else {
		assert(!"Soyadin uzunlugu dogru deyil.");
	}
}
void Person::SetAge(int age) {
	if (age >= 18 && age <= 65)
	{
		this->age = age;
	}
	else {
		assert(!"Yas araligi 18 ve 65 olmalidir.");
	}
}
void Person::print() {
	cout << "Name: " << ((name != nullptr) ? name : "NULL") << endl
		<< "Surname: " << ((surname != nullptr) ? surname : "NULL") << endl
		<< "Age: " << age << endl;
}