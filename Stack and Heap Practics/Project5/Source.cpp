#include<iostream>
using namespace std;
void Print_Array(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
//---------------------------------------------------------------------------------
//1.Funksiyanin evveline element elave etmek

//int* pushFront(int* arr, int* size, int element) {
//	int* new_Array = new int[(*size) + 1];
//	new_Array[0] = element;
//	for (size_t i = 0; i < (*size); i++)
//	{
//		new_Array[i + 1] = arr[i];
//	}
//	delete[]arr;
//	arr = new_Array;
//	(*size)++;
//	return new_Array;
//}
//---------------------------------------------------------------------------------
//2.Istenilen indexe element elave etmek
//int* insertElement(int* arr, int* size, int index, int element) {
//	int* new_Arr = new int[(*size) + 1];
//	for (size_t i = 0; i < index; i++)
//	{
//		new_Arr[i] = arr[i];
//	}
//	new_Arr[index] = element;
//	for (size_t i = index; i < (*size); i++)
//	{
//		new_Arr[i + 1] = arr[i];
//	}
//	delete[]arr;
//  arr=nullptr;
//	arr = new_Arr;
//	(*size)++;
//	return new_Arr;
//}

//---------------------------------------------------------------------------------
//3.Arrayin ilk elementini silen funksiya yazin. 
//int* deleteFront(int* arr, int* size) {
//	int* new_Arr = new int[(*size) - 1];
//	for (size_t i = 0; i < (*size); i++)
//	{
//		new_Arr[i] = arr[i+1];
//	}
//	delete[]arr;
//	arr = nullptr;
//	arr = new_Arr;
//	(*size)--;
//	return new_Arr;
//}
//---------------------------------------------------------------------------------
//4.Arrayin sonuncu elementini silen funksiya yazin.
//int* deleteBack(int* arr, int* size) {
//	int* new_Arr = new int[(*size) - 1];
//	for (size_t i = 0; i < (*size)-1; i++)
//	{
//		new_Arr[i] = arr[i];
//	}
//	delete[]arr;
//	arr = nullptr;
//	arr = new_Arr;
//	(*size)--;
//	return new_Arr;
//}

//---------------------------------------------------------------------------------
//5.Indexe gore elementi silen funksiya yazin.
//int* deleteByIndex(int* arr, int* size, int index) {
//	int* newArr = new int[(*size) - 1];
//	for (size_t i = 0; i < index; i++)
//	{
//		newArr[i] = arr[i];
//	}
//	for (size_t i = index; i < (*size); i++)
//	{
//		newArr[i] = arr[i + 1];
//	}
//	delete[]arr;
//	arr = nullptr;
//	arr = newArr;
//	(*size)--;
//	return newArr;
// }
//---------------------------------------------------------------------------------
//6.Iki arrayi birlesdiren funksiya yazin.
//int* compineTwoBlock(int* arr_1, int* arr_2, int size_1, int size_2) {
//	int totalSize = size_1 + size_2;
//	int* newArr = new int[totalSize] {};
//	for (size_t i = 0; i < size_1; i++)
//	{
//		newArr[i] = arr_1[i];
//	}
//	int j = 0;
//	for (size_t i = size_1; i < totalSize; i++)
//	{
//		newArr[i] = arr_2[j];
//		j++;
//	}
//	delete[]arr_1;
//	delete[]arr_2;
//	arr_1 = nullptr;
//	arr_2 = nullptr;
//	return newArr;
//}

//---------------------------------------------------------------------------------
//7.Birinci massivden ikinci massivde olan elementleri silin.
//int* deleteBlockFrom(int* arr_1, int* arr_2, int &size_1, int size_2) {
//	int k = 0;
//	int* newArr = new int[size_1];
//	for (size_t i = 0; i < size_1; i++)
//	{
//		bool check = true;
//		for (size_t j = 0; j < size_2; j++)
//		{
//			if (arr_1[i] == arr_2[j])
//			{
//				check = false;
//				break;
//			}
//		}
//		if (check)
//		{
//			newArr[k] = arr_1[i];
//			k++;
//		}	
//	}
//	delete[]arr_1;
//	delete[]arr_2;
//	arr_1 = nullptr;
//	arr_2 = nullptr;
//	size_1 = k;
//	return newArr;
//}

//---------------------------------------------------------------------------------



void main() {

	//---------------------------------------------------------------------------------
	//1.Funksiyanin evveline element elave etmek
		/*int size = 5;
		int* arr = new int[size] {0, 1, 2, 3, 4};
		Print_Array(arr, size);
		cout << endl;
		int element;
		cout << "Elave etmek istediyiniz elementi daxil edin: ";
		cin >> element;
		arr = pushFront(arr, &size,element);
		Print_Array(arr, size);*/

		//---------------------------------------------------------------------------------
			//2.Istenilen indexe element elave etmek
			//int size = 5;
			//int* arr = new int[size] {0, 1, 2, 3, 4};
			//Print_Array(arr, size);
			//cout << endl;
			//int element;
			//cout << "Elave etmek istediyiniz elementi daxil edin: ";
			//cin >> element;
			//int index;
			//cout << "Elave etmek istediyiniz indexi daxil edin:";
			//cin >> index;
			//arr = insertElement(arr, &size, index, element);
			//arr = insertElement(arr, &size, index, element);
			//Print_Array(arr, size);
		//---------------------------------------------------------------------------------
			//3.Arrayin ilk elementini silen funksiya yazin. 
			//int size = 7;
			//int* arr = new int[size] {1, 2, 3, 4, 5, 6, 7};
			//Print_Array(arr, size);
			//arr = deleteFront(arr, &size);
			//cout << endl;
			//Print_Array(arr, size);
			//arr = deleteFront(arr, &size);
			//cout << endl;
			//Print_Array(arr, size);
			//arr = deleteFront(arr, &size);
			//cout << endl;
			//Print_Array(arr, size);

		//---------------------------------------------------------------------------------
			//4.Arrayin sonuncu elementini silen funksiya yazin.
			//int size = 7;
			//int* arr = new int[size] {1, 2, 3, 4, 5, 6, 7};
			//Print_Array(arr, size);
			//cout << endl;
			//arr = deleteBack(arr, &size);
			//Print_Array(arr, size);
			//arr = deleteBack(arr, &size);
			//cout << endl;
			//Print_Array(arr, size);
			//cout << endl;
		//---------------------------------------------------------------------------------
			//5.Indexe gore elementi silen funksiya yazin.
			//int size = 10;
			//int* arr = new int[size] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
			//Print_Array(arr, size);
			//cout << endl;
			//int index;
			//cout << "Silmek istediyiniz indexi daxil edin: ";
			//cin >> index;
			//arr = deleteByIndex(arr, &size, index);
			//Print_Array(arr, size);
			//cout << endl;
			//arr = deleteByIndex(arr, &size, index);
			//Print_Array(arr, size);
			//cout << endl;
			//arr = deleteByIndex(arr, &size, index);
			//Print_Array(arr, size);
			//cout << endl;

		//---------------------------------------------------------------------------------
			//6.Iki arrayi birlesdiren funksiya yazin.
			//int size1 = 5;
			//int* arr1 = new int [size1] {0,1, 2, 3, 4};
			//int size2 = 6;
			//int* arr2 = new int[size2] {5, 6, 7, 8, 9, 10};
			//int size3 = size1 + size2;
			//int* combinedArr = compineTwoBlock(arr1, arr2, size1, size2);
			//Print_Array(combinedArr, size3);
			//delete[] combinedArr; 
			//combinedArr = nullptr;
		//---------------------------------------------------------------------------------
			//7.Birinci massivden ikinci massivde olan elementleri silin.

	//int size1 = 10;
	//int* arr1 = new int[size1] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//int size2 = 6;
	//int* arr2 = new int[size2] {22, 1,2, 3, 4, 11};
	//int* totalArr = deleteBlockFrom(arr1, arr2, size1, size2);
	//Print_Array(totalArr, size1);
	//delete[]totalArr;

	//---------------------------------------------------------------------------------

}