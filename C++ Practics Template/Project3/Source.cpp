#include<iostream>
using namespace std;

//template <typename T1,typename T2>
//float Sum(T1 num1, T2 num2) {
//	return num1 + num2;
//}

//void Show(int data) {
//	cout << data << endl;
//	cout << "Int" << endl;
//	cout << "Overload" << endl;
//}
//void Show(float data) {
//	cout << data << endl;
//	cout << "Float" << endl;
//	cout << "Overload" << endl;
//}
//void Show(double data) {
//	cout << data << endl;
//	cout << "double" << endl;
//	cout << "Overload" << endl;
//}
//void Show(char data) {
//	cout << "Hello" <<data<<endl;
//}
//template <typename T>
//void Show(T data) {
//	cout << data << endl;
//	cout << "I am template" << endl;
//}
//void Show(char data) {
//	cout << "Special function" << data << endl;
//}

//void Init_Array(int arr[], int size) {
//	int min = 0, max = 255;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand()%(max - min + 1);
//	}
//}
//void Print_Array(int arr[], int size) {
//	int min = 0, max = 255;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout << endl;
//}
//
//void Init_Array(double arr[], int size) {
//	int min = 0, max = 255;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = double(min + rand() % (max - min + 1))/100;
//	}
//}
//void Print_Array(double arr[], int size) {
//	int min = 0, max = 255;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << "   ";
//	}
//	cout << endl;
//}


template<typename T>
void Init_Array(T arr[], int size) {
	int min = 0, max = 255;
	for (size_t i = 0; i < size; i++)
	{
		arr[i]=min+rand()%(max-min+1);
	}
	cout << endl;
}
void Init_Array(double arr[], int size) {
	int min = 0, max = 255;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = double(min + rand() % (max - min + 1))/100;
	}
}
template<typename T>
void Print_Array(T arr[], int size) {
	int min = 0, max = 255;
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}

void main() {
	//cout << Sum(9.5, 6);
	//Show('8');
	srand(time(NULL));
	const int size = 10;
	int arr[size]{};
	Init_Array(arr, size);
	Print_Array(arr, size);

	double arr2[size]{};
	Init_Array(arr2, size);
	Print_Array(arr2, size);


	char arr3[size]{};
	Init_Array(arr3, size);
	Print_Array(arr3, size);
}