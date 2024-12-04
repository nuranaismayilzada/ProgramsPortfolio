#include<iostream>
using namespace std;
void Print_Array(int*& arr, int size) {
	if (size==0)
	{
		cout << "Array bosdur" << endl;
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Append(int*& arrPtr, int* n, int element) {
	int* newArr = new int[*n+1] {};
	for (size_t i = 0; i < *n; i++)
	{
		newArr[i] = arrPtr[i];
	}
	newArr[*n] = element;
	(*n)++;
	delete[]arrPtr;
	arrPtr = newArr;
}
bool insertByIndex(int*& arrPtr, int& n, int index, int element) {
	int* newArr = new int[n+1];
	if (index>=n || index<0)
	{
		return false;
	}
	for (size_t i = 0; i < index; i++)
	{	
		newArr[i] = arrPtr[i];
	}
	newArr[index] = element;
	for (size_t i = index+1; i < n+1; i++)
	{
		newArr[i] = arrPtr[i - 1];
	}
	delete[]arrPtr;
	arrPtr = newArr;
	n++;
	return true;
}
bool deleteByIndex(int*& arrPtr, int& n, int index) {
	int* newArr = new int[n - 1];
	if (index>=n || index<0)
	{
		return false;
	}
	for (size_t i = 0; i < index; i++)
	{
		newArr[i] = arrPtr[i];
	}
	for (size_t i = index+1; i < n; i++)
	{
		newArr[i-1] = arrPtr[i];
	}
	delete[]arrPtr;
	arrPtr = newArr;
	n--;
	return true;
}
bool pop(int*& arrPtr, int& n) {
	if (n==0)
	{
		return false;
	}
	int* newArr = new int[n - 1];
	for (size_t i = 0; i < n-1; i++)
	{
		newArr[i] = arrPtr[i];
	}
	delete[]arrPtr;
	arrPtr = newArr;
	n--;
	return true;
}
bool remove(int*& arrPtr, int& n, int element) {
	int findIndex;
	bool isCheck = false;
	for (size_t i = 0; i < n; i++)
	{
		if (arrPtr[i]==element)
		{
			isCheck = true;
			findIndex = i;
			break;
		}
	}
	if (isCheck==false)
	{
		cout << "Element tapilmadi!" << endl;
		return false;
	}
	int* newArr = new int[n-1] {};
	for (size_t i = 0; i < findIndex; i++)
	{
		newArr[i] = arrPtr[i];
	}
	for (size_t i =findIndex+1; i < n; i++)
	{
		newArr[i - 1] = arrPtr[i];
	}
	delete[]arrPtr;
	arrPtr = newArr;
	n--;
	return true;
}
void main() {
	int size = 0;
	int* arr = new int[size] {};

	while (true)
	{
		int choice;
		cout << "0.Exit\n1.Print\n2.Append\n3.InsertByIndex\n4.DeleteByIndex\n5.Pop\n6.Remove\n";
		cout << "Seciminizi daxil edin: ";
		cin >> choice;
		if (choice == 1)
		{
			Print_Array(arr, size);
		}
		else if (choice == 2) {
			int newElement;
			cout << "Elave olunacaq elementi daxil edin: ";
			cin >> newElement;
			Append(arr, &size, newElement);
		}
		else if (choice==3)
		{
			int index;
			cout << "Daxil edeceyiniz indexi qeyd edin:";
			cin >> index;
			int element;
			cout << "Daxil edeceyiniz elementi qeyd edin:";
			cin >> element;
			bool check = insertByIndex(arr, size, index, element);
			if (check)
			{
				cout << "Ugurla elave olundu!" << endl;
			}
			else {
				cout << "Ugursuz!" << endl;
			}
		}
		else if (choice == 4) {
			int deletedIndex;
			cout << "Daxil edeceyiniz indexi qeyd edin:";
			cin >> deletedIndex;
			bool check = deleteByIndex(arr, size, deletedIndex);
			if (check)
			{
				cout << "Element ugurla silindi!"<<endl;
			}
			else {
				cout << "Ugursuz!" << endl;
			}
		}
		else if (choice==5)
		{
			bool check = pop(arr, size);
			if (pop)
			{
				cout << "Silindi!" << endl;
			}
			else {
				cout << "Siline bilmedi!" << endl;
			}
		}
		else if (choice==6)
		{
			cout << "Silmek istediyiniz elementi daxil edin:";
			int newElement;
			cin >> newElement;
			bool check = remove(arr, size, newElement);
			if (check)
			{
				cout << "Element silindi!" << endl;
			}
			else {
				cout << "Element siline bilmedi!" << endl;
			}
		}
		else if (choice == 0) {
			break;
		}
		else {
			cout << "Secim duzgun deyil.Zehmet olmasa teklif olunan secimlerden birini secin!" << endl;
		}
	}


}