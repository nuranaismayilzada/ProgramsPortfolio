#include<iostream>
using namespace std;

//1.Massivin sonuna yeni element elave edin.
//void Added_New_Element_Array(int arr[],int newArr[], int size, int element) {
//	for (size_t i = 0; i < size; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	newArr[size] = element;
//	for (size_t i = 0; i < size+1; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}
//Massivin evveline yeni element elave edin.
//void Added_New_Element_Array1(int arr[], int newArr[], int size, int element) {
//	newArr[0] = element;
//	for (size_t i = 0; i < size+1; i++)
//	{
//		newArr[i+1] = arr[i];
//	}
//	for (size_t i = 0; i < size + 1; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}
//Massivin sonuncu elementini silin
//void Delete_Element_In_Array(int arr[], int newArr[], int size) {
//	for (size_t i = 0; i < size -1; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	for (size_t i = 0; i < size-1; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}
//Massivin ilk elementini silin
//void Delete_Element_In_Array1(int arr[], int newArr[], int size) {
//	for (size_t i = 0; i < size ; i++)
//	{
//		newArr[i] = arr[i+1];
//	}
//	for (size_t i = 1; i < size -1; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}

//Massivin verilen indexine element elave edin
//void Added_Element(int arr[], int newArr[], int size) {
//	int index, element;
//	cout << "Index daxil edin:";
//	cin >> index;
//	cout << "Element daxil edin:";
//	cin >> element;
//	int j = 0;
//
//	for (size_t i = 0; i < size+1 ; i++)
//	{
//		if (i==index)
//		{
//			newArr[index] = element;
//			continue;
//		};
//		newArr[i] = arr[j];
//		j++;
//	}
//	for (size_t i = 0; i < size+1; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}
//Massivin verilen indexindeki elementi silin
//void Delete_Element(int arr[], int newArr[], int size) {
//	int index, element;
//	cout << "Index daxil edin:";
//	cin >> index;
//	int j = 0;
//
//	for (size_t i = 0; i < size; i++)
//	{
//		if (i == index)
//		{
//			continue;
//		};
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size - 1; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}

void main() {
	//const int size = 5;
	//int arr[size]{ 1,2,3,4,5 };
	//int newArr[size + 1]{};
	//int element = 7;
	//Added_New_Element_Array(arr, newArr, size, element);
	//cout << endl;
	//Added_New_Element_Array1(arr, newArr, size, element);
	//cout << endl;
	//int arr2[size]{ 44,22,13,24,25 };
	//Delete_Element_In_Array(arr2, newArr, size);
	//cout << endl;
	//int arr3[size]{244,22,13,24,25 };
	//Delete_Element_In_Array1(arr3, newArr, size);

	//const int size = 5;
	//int arr[size]{ 1,2,3,4,5 };
	//int newArr[size + 1]{};
	//int element = 7;
	//int index = 2;
	//Added_Element(arr, newArr, size);

	//const int size = 5;
	//int arr[size]{ 1,2,3,4,5 };
	//int newArr[size - 1]{};
	//Delete_Element(arr, newArr, size);


	//srand(time(NULL));
	//int min = 1, max = 100, random;
	//const int size = 10;
	//int arr[size]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv: ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//int Index, number;
	//cout << "Enter index:";
	//cin >> Index;
	//cout << "Enter number:";
	//cin >> number;
	//int newArr[size + 1]{};
	//int j = 0;
	//newArr[Index] = number;
	//for (size_t i = 0; i < size + 1; i++)
	//{
	//	if (i == Index)
	//	{
	//		continue;
	//	}
	//	newArr[i] = arr[j];
	//	j++;
	//}
	//cout << endl;
	//for (size_t i = 0; i < size + 1; i++)
	//{
	//	cout << newArr[i] << " ";
	//}
}
