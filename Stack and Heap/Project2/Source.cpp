#include<iostream>
using namespace std;
//void fillArray(int* arr, int size,int min=0,int max=10) {
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min);
//	}
//}
//
//void printArray(int* arr, int size) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//}
//int* appendArray(int* arr, int* size, int element) {
//	(*size)++;
//	int *newArray = new int[*size];
//	for (size_t i = 0; i < (*size)-1; i++)
//	{
//		newArray[i] = arr[i];
//	}
//	newArray[(*size) - 1] = element;
//	delete[]arr;
//	arr = newArray;
//	return arr;
//}
//-----------------------------------------------------------------------------------
//1.Dinamik yaddas ayiran funksiya yazin.
//int* Reserve_Array(int size) {
//	int* arr = new int[size] {};
//	return arr;
//}
//-----------------------------------------------------------------------------------
//2.Dinamik massivi random ededlerle dolduran funksiya yazin.
//void Init_Array(int* arr, int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//-----------------------------------------------------------------------------------
//3.Dinamik massivi ekrana cixaran funksiya yazin.
//void Print_Array(int* arr, int size) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//-----------------------------------------------------------------------------------
//4.Dinamik massivi silen funksiya yazin
//void Delete_Array(int* arr) {
//	delete[]arr;
//	arr = nullptr;
//}
//-----------------------------------------------------------------------------------
//5.Dinamik massivin sonuna element elave eden funksiya yazin
//int* Push_Back(int* arr, int* size, int element) {
//	int* newArr = new int[(*size) + 1];
//	for (size_t i = 0; i < *size; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	newArr[*size] = element;
//	delete[]arr;
//	arr = newArr;
//	(*size)++;
//	return newArr;
//}

//-----------------------------------------------------------------------------------



//6/Dinamik massivin gosterilen indexine element elave eden funksiya yazin.
//int * AddElement(int* arr, int* size, int element,int index) {
//	int* newArr = new int[(*size)+1];
//	for (size_t i = 0; i < index; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	newArr[index] = element;
//	for (size_t i = index+1; i < (*size)+1; i++)
//	{
//		newArr[i] = arr[i-1];
//	}
//	(*size)++;
//	delete[]arr;
//	arr = newArr;
//	return newArr;
//}
//void PrintArray(int* arr, int size) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//-----------------------------------------------------------------------------------
//7.Dinamik massivden gosterilen indexdeki elementin silinmesi
//int* Delete_Element_Delete(int* arr, int* size, int index) {
//	int* new_arr = new int[(*size)-1];
//	for (size_t i = 0; i < index; i++)
//	{
//		new_arr[i] = arr[i];
//	}
//	for (size_t i = index+1; i < *size; i++)
//	{
//		new_arr[i-1] = arr[i];
//	}
//	delete[]arr;
//	arr = new_arr;
//	(*size)--;
//	return new_arr;
//}
//-----------------------------------------------------------------------------------
//8.Dinamik massivin sonuna bir blok element elave eden funksiya yazin.
//void Add_Array(int* oldArray, int* size, int* newArray, int* newSize) {
//	int totalSize = (*size) + (*newSize);
//	int* new_Added_Array = new int[totalSize];
//	for (size_t i = 0; i < (*size); i++)
//	{
//		new_Added_Array[i] = oldArray[i];
//	}
//	int j = 0;
//	for (size_t i = (*size); i < totalSize; i++)
//	{
//		new_Added_Array[i] = newArray[j];
//		j++;
//	}
//	delete[]oldArray;
//	oldArray = new_Added_Array;
//	*size = totalSize;
//	for (size_t i = 0; i < totalSize; i++)
//	{
//		cout << new_Added_Array[i] << " ";
//	}
//}
//-----------------------------------------------------------------------------------
//9.Dinamik massivin gosterilen indexinden sonra bir blok element elave eden funksiya yazin.
//int * Add_Array_Index(int* oldArray, int *size, int* newArray, int *newSize, int index) {
//	int totalSize = (*size) + (*newSize);
//	int* new_Added_Array = new int[totalSize];
//	for (size_t i = 0; i < index; i++)
//	{
//		new_Added_Array[i] = oldArray[i];
//	}
//	int j = index;
//	for (size_t i = 0; i <(*newSize); i++)
//	{
//		new_Added_Array[j] = newArray[i];
//		j++;
//	}
//	for (size_t i = index; i < (*size); i++)
//	{
//		new_Added_Array[j] = oldArray[i];
//		j++;
//	}
//	delete[]oldArray;
//	oldArray = new_Added_Array;
//	*size = totalSize;
//	cout << endl;
//	return new_Added_Array;
//}
//-----------------------------------------------------------------------------------
//10.Dinamik massivden bir blok elementi silen funksiya yazin.
//int * Delete_Array_Elements(int* oldArray,int firstIndex,int* size, int count) {
//	int totalSize = (*size) - count;
//	int* newArray = new int[totalSize];
//	for (size_t i = 0; i < firstIndex; i++)
//	{
//		newArray[i] = oldArray[i];
//	}
//	int j = firstIndex;
//	for (size_t i = firstIndex + count; i < (*size); i++)
//	{
//		newArray[j] = oldArray[i];
//		j++;
//	}
//	delete[]oldArray;
//	oldArray = newArray;
//	*size = totalSize;
//	return newArray;
//}
//-----------------------------------------------------------------------------------



void main() {
	srand(time(NULL));
	//int size = 5;
	//int* arr = new int[size] {};
	//int max = 10;
	//int min = 1;
	//fillArray(arr, size, min, max);
	//printArray(arr, size);
	//cout << endl;
	//cout << "Daxil etmek istediyiniz elementi daxil edin:";
	//int newelement;
	//cin >> newelement;
	//arr=appendArray(arr, &size, newelement);
	//cout << endl;
	//printArray(arr, size);
//-----------------------------------------------------------------------------------

//1.Dinamik yaddas ayiran funksiya yazin.
	/*int *arr = Reserve_Array(5);
	cout << *arr;*/

//-----------------------------------------------------------------------------------
//2.Dinamik massivi random ededlerle dolduran funksiya yazin.
	//int* arr = Reserve_Array(15);
	//Init_Array(arr, 15, 10, 50);
	//Print_Array(arr, 15);

//-----------------------------------------------------------------------------------

//3.Dinamik massivi ekrana cixaran funksiya yazin.

	//Print_Array(arr, 15);

//-----------------------------------------------------------------------------------
	//4.Dinamik massivi silen funksiya yazin

	/*int Size = 10;
	int* Arr = new int[Size];
	Delete_Array(Arr);*/
//-----------------------------------------------------------------------------------

//5.Dinamik massivin sonuna element elave eden funksiya yazin
	/*
	int sizee = 5;
	int* new_Arr = new int[sizee] {1, 2, 3, 4, 5};
	new_Arr=Push_Back(new_Arr, &sizee, 20);
	new_Arr=Push_Back(new_Arr, &sizee, 33);
	new_Arr=Push_Back(new_Arr, &sizee, 40);
	new_Arr=Push_Back(new_Arr, &sizee,55);
	int* arr2 = Push_Back(new_Arr, &sizee, 50);
	cout << sizee;
	cout << endl;
	Print_Array(arr2,sizee);*/


//-----------------------------------------------------------------------------------

	//6/Dinamik massivin gosterilen indexine element elave eden funksiya yazin.
	//int size = 10;
	//int* arr = new int [size] {1,2,3,8,2,6,8,3,2,22};
	//int max = 10;
	//int min = 1;
	//int element = 55;
	//int index = 4;
	//PrintArray(arr, size);
	//arr=AddElement(arr, &size, element,index);
	//cout << endl;
	//PrintArray(arr, size);

//-----------------------------------------------------------------------------------

//7.Dinamik massivden gosterilen indexdeki elementin silinmesi

	//int sizee = 5;
	//int* new_Arr = new int[sizee] {1, 2, 3, 4, 5};
	//new_Arr = Push_Back(new_Arr, &sizee, 20);
	//new_Arr = Push_Back(new_Arr, &sizee, 33);
	//int* arr2 = Push_Back(new_Arr, &sizee, 50);
	//cout << sizee;
	//cout << endl;
	//Print_Array(arr2, sizee);
	//cout << endl;
	//int *new_Arrr=Delete_Element_Delete(arr2, &sizee, 3);
	//Print_Array(new_Arrr, sizee);
	//cout << endl;
	//cout << sizee;

//-----------------------------------------------------------------------------------
	//8.Dinamik massivin sonuna bir blok element elave eden funksiya yazin.

	//int size = 5;
	//int size2 = 4;
	//int* arr = new int [size] {1, 2, 3, 4, 5};
	//int* newArr = new int[size2] {6, 7, 8, 9};
	//Add_Array(arr, &size, newArr, &size2);
	//delete[]arr;
	//delete[]newArr;
	
//-----------------------------------------------------------------------------------
//9.Dinamik massivin gosterilen indexinden sonra bir blok element elave eden funksiya yazin.

	//int size = 5;
	//int size2 = 4;
	//int* arr = new int [size] {1, 2, 3, 4, 5};
	//int* newArr = new int[size2] {6, 7, 8, 9};
	//arr=Add_Array_Index(arr, &size, newArr, &size2,3);
	//Print_Array(arr, size);
	//cout << endl;
	//cout << size;
	//delete[]arr;
	//delete[]newArr;
//-----------------------------------------------------------------------------------
//10.Dinamik massivden bir blok elementi silen funksiya yazin.
	//int size = 10;
	//int* arr = new int [size] {1, 3, 4, 5,6,7,8,9,10,11};
	//int count = 5;
	//int index = 2;
	//arr=Delete_Array_Elements(arr, index, &size, count);
	//Print_Array(arr, size);
	//delete[] arr;
	
//-----------------------------------------------------------------------------------







} 