#pragma once
class Person {
private:
	char* name;
	char* surname;
public:
	int age;
	//Person() = delete;
	//private:
	//parametrli konstructor yaratmaqla
	Person();
	Person(const char* name, const char* surname, int age);
	const char* GetName();
	const char* GetSurname();
	int GetAge();
	void print();
	void SetName(const char* name);
	void SetSurname(const char* surname);
	void SetAge(int age);
};
