#include<iostream>
using namespace std;
//1.1.Massivdeki cut elementleri duplicate eden funksiya yazin example:  1 2 3 4 5 ---1 2 2 3 4 4 5

int* Reserve_arr(int size) {
	int* arr = new int[size] {};
	return arr;
}

void Init_Array(int*& arr, int& size) {
	int min = 0, max = 7;
	for (size_t i = 0; i < size; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}

void Print_Array(int*& arr, int& size) {
	for (size_t i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int*& Dublicate_Array(int*& arr, int& size) {
	int even_count = 0;
	for (size_t i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			even_count++;
		}
	}
	int new_size = size + even_count;
	int* new_Arr = new int[new_size] {};

	int j = 0;
	for (size_t i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			new_Arr[j] = arr[i];
			j++;
		}
		new_Arr[j] = arr[i];
		j++;
	}
	delete[] arr;
	arr = new_Arr;
	size = new_size;
	return new_Arr;
}
//2.2.Massivdeki her 2 elementden bir elementlerin cemi sagina yazilsin 10 20 30 40 50 60 70 80---> 10 20 30 30 40 70 50 60 110 70 80 150
int*& Sum_Array(int*& arr, int& size) {
	int new_size = size + size / 2;
	int* newArr = new int[new_size];
	int j = 0;
	int sum = 0;
	for (size_t i = 0; i < size; i += 2)
	{
		sum = 0;
		newArr[j++] = arr[i];
		newArr[j++] = arr[i + 1];
		sum += arr[i] + arr[i + 1];
		newArr[j++] = sum;
	}
	arr = newArr;
	size = new_size;
	return newArr;
}
//3.3.Meselen     2 4 1 5 3-->2 0 0 4 0 0 0 0 1 0 5 0 0 0 0 0 3 0 0 0
int*& Zero_Array_Addition(int*& arr, int& size) {
	int size_sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		size_sum += arr[i];
	}
	int new_size = size + size_sum;
	int* new_Arr = new int[new_size] {};
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		new_Arr[j++] = arr[i];
		for (size_t k = 0; k < arr[i]; k++)
		{
			new_Arr[j++] = 0;
		}
	}
	delete[]arr;
	arr = new_Arr;
	size = new_size;
	return new_Arr;
}

void main() {
	srand(time(NULL));
	int size = 5;
	int* arr = Reserve_arr(size);
	//Print_Array(arr, size);
	//Init_Array(arr, size);
	//Print_Array(arr, size);
	//Dublicate_Array(arr, size);
	//Print_Array(arr, size);
	//delete[] arr;


	//Print_Array(arr, size);
	//Init_Array(arr, size);
	//Print_Array(arr, size);
	//Sum_Array(arr, size);
	//Print_Array(arr, size);
	//delete[] arr;

	Print_Array(arr, size);
	Init_Array(arr, size);
	Print_Array(arr, size);
	Zero_Array_Addition(arr, size);
	Print_Array(arr, size);
}
