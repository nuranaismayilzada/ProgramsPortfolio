#include<iostream>
using namespace std;

//1. Massivin random ədədlərlə doldurulmasını realizasiya edin. (int,double, float, char)

//void Init_Array(int arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//void Print_Array(int arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//
//void Init_Array(double arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = double(min + rand() % (max - min + 1))/100;
//	}
//}
//
//void Print_Array(double arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}



//void Init_Array(char arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//void Print_Array(char arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}


//Template



//template <typename T1>
//void Init_Array(T1 arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//template <typename T2>
//void Print_Array(T2 arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}



//special function
//void Init_Array(double arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = double(min + rand() % (max - min + 1)) / 100;
//	}
//}
//
//void Print_Array(double arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "double";
//}




//2. Massivin verilən diapazonda ədədlərlə dolduruması. (Funksiya,massiv, onun ölçüsü, min və max qiymətlər qəbul edir)
//(Overload lazım deyil)

//void Init_Array(int arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//void Print_Array(int arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//
//void Init_Array(double arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = double(min + rand() % (max - min + 1))/100;
//	}
//}
//
//void Print_Array(double arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}



//void Init_Array(char arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//void Print_Array(char arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}


//Template



//template <typename T1>
//void Init_Array(T1 arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//template <typename T2>
//void Print_Array(T2 arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}



//special function
//void Init_Array(double arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = double(min + rand() % (max - min + 1)) / 100;
//	}
//}
//
//void Print_Array(double arr[], int size, int min, int max) {
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "double";
//}



//3. Massivi ekrana çıxaran funksiya. (int, double, float, char)

//void Init_Array(int arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//void Print_Array(int arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//
//void Init_Array(double arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = double(min + rand() % (max - min + 1))/100;
//	}
//}
//
//void Print_Array(double arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}



//void Init_Array(char arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//void Print_Array(char arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}


//Template



//template <typename T1>
//void Init_Array(T1 arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = min + rand() % (max - min + 1);
//	}
//}
//
//template <typename T2>
//void Print_Array(T2 arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}



//special function
//void Init_Array(double arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = double(min + rand() % (max - min + 1)) / 100;
//	}
//}
//
//void Print_Array(double arr[], int size) {
//	int min=1,max=100;
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << "double";
//}


//4. Bubble sort edən funksiya yazın. (Funksiya massiv, ölçüsü və bool
//	qəbul edir.Əgər funksiyaya true göndərilərsə sort - azalandan artana,
//	false qəbul edirsə artandan azalana sort olur)


//void BubbleSortFunction(int arr[], int size, bool choice) {
//	int temp = 0, counter = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size - 1; k++)
//		{
//			if (choice == true)
//			{
//				if (arr[k] > arr[k + 1])
//				{
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//			}
//			if (choice == false)
//			{
//				if (arr[k] < arr[k + 1])
//				{
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//			}
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void BubbleSortFunction(float arr[], int size, bool choice) {
//	float temp = 0, counter = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size - 1; k++)
//		{
//			if (choice == true)
//			{
//				if (arr[k] > arr[k + 1])
//				{
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//			}
//			if (choice == false)
//			{
//				if (arr[k] < arr[k + 1])
//				{
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//			}
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " | ";
//	}
//}
//
//void BubbleSortFunction(double arr[], int size, bool choice) {
//	double temp = 0, counter = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size - 1; k++)
//		{
//			if (choice == true)
//			{
//				if (arr[k] > arr[k + 1])
//				{
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//			}
//			if (choice == false)
//			{
//				if (arr[k] < arr[k + 1])
//				{
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//			}
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " | ";
//	}
//}
//
//template <typename T1>
//void BubbleSortFunction(T1 arr[], int size, bool choice) {
//	T1 temp = 0, counter = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t k = 0; k < size - 1; k++)
//		{
//			if (choice == true)
//			{
//				if (arr[k] > arr[k + 1])
//				{
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//			}
//			if (choice == false)
//			{
//				if (arr[k] < arr[k + 1])
//				{
//					temp = arr[k];
//					arr[k] = arr[k + 1];
//					arr[k + 1] = temp;
//				}
//			}
//		}
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << arr[i] << " | ";
//	}
//}

//5. Massivdəki elementi axtaran funksiya yazın.(Funksiyaya massiv,
//	ölçüsü və axtarılan rəqəm göndərilir.) Funksiya tapılan elementin
//	indexini qaytarır. (int, double, float, char)


//int FindsElementArray(int arr[], int size, int number) {
//	int index;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (number == arr[i])
//		{
//			index = i;
//		}
//	}
//	return index;
//}
//
//int FindsElementArray(double arr[], int size, double number) {
//	int index;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (number == arr[i])
//		{
//			index = i;
//		}
//	}
//	return index;
//}
//int FindsElementArray(float arr[], int size, float number) {
//	int index;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (number == arr[i])
//		{
//			index = i;
//		}
//	}
//	return index;
//}
//int FindsElementArray(char arr[], int size, char number) {
//	int index;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (number == arr[i])
//		{
//			index = i;
//		}
//	}
//	return index;
//}

//template
//template<typename T1>
//int FindsElementArray(T1 arr[], int size, T1 number) {
//	int index;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (number == arr[i])
//		{
//			index = i;
//		}
//	}
//	return index;
//}

//6. Massivdəki ən kiçik elemnti tapan funksiya yazın. (Massivi sort etmək
//	olmaz)

//void FindSmallestElementArray(int arr[], int size) {
//	int minNumber = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (minNumber > arr[i])
//		{
//			minNumber = arr[i];
//		}
//	}
//	cout << "Minimum number in Array:" << minNumber;
//}
//
//void FindSmallestElementArray(float arr[], int size) {
//	float minNumber = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (minNumber > arr[i])
//		{
//			minNumber = arr[i];
//		}
//	}
//	cout << "Minimum number in Array:" << minNumber;
//}
//void FindSmallestElementArray(double arr[], int size) {
//	double minNumber = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (minNumber > arr[i])
//		{
//			minNumber = arr[i];
//		}
//	}
//	cout << "Minimum number in Array:" << minNumber;
//}

//template
//template <typename T1>
//void FindSmallestElementArray(T1 arr[], int size) {
//	T1 minNumber = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (minNumber > arr[i])
//		{
//			minNumber = arr[i];
//		}
//	}
//	cout << "Minimum number in Array:" << minNumber;
//}


//7. Massivdəki ən böyük elementi tapan funksiya yazın. (Massivi sort
//	etmək olmaz) (int, double, float, )


//
//void FindBiggestElemenetInArray(int arr[], int size) {
//	int maxNumber = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (maxNumber < arr[i])
//		{
//			maxNumber = arr[i];
//		}
//	}
//	cout << "Maximum number in Array:" << maxNumber;
//}
//
//void FindBiggestElemenetInArray(float arr[], int size) {
//	float maxNumber = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (maxNumber < arr[i])
//		{
//			maxNumber = arr[i];
//		}
//	}
//	cout << "Maximum number in Array:" << maxNumber;
//}
//void FindBiggestElemenetInArray(double arr[], int size) {
//	double maxNumber = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (maxNumber < arr[i])
//		{
//			maxNumber = arr[i];
//		}
//	}
//	cout << "Maximum number in Array:" << maxNumber;
//}

//template
//template <typename T1>
//void FindBiggestElemenetInArray(T1 arr[], int size) {
//	T1 maxNumber = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (maxNumber < arr[i])
//		{
//			maxNumber = arr[i];
//		}
//	}
//	cout << "Maximum number in Array:" << maxNumber;
//}


//8. Massivin funksiyaya ötürülən rəqəm qədər sağa dövrü sürüşməsini
//yerinə yetirən funksiya yazın. (Funksiyaya massiv, ölçüsü, və
//	sürüşmə indeksi göndərilir) Məsələn massiv : 1, 2, 3, 4, 5 rəqəmləri ilə
//	dolurudur, sürüşmə indexi 2dirsə, cavab : 4, 5, 1, 2, 3

//void ArrayChangeRight(int arr[],int size, int index) {
//	int j = 0;
//	int newArr[5]{};
//
//	for (size_t i = index+1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index+1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i]<<" ";
//	}
//}
//
//void ArrayChangeRight(float arr[], int size, int index) {
//	int j = 0;
//	float newArr[5]{};
//
//	for (size_t i = index + 1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index + 1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}
//void ArrayChangeRight(double arr[], int size, int index) {
//	int j = 0;
//	double newArr[5]{};
//
//	for (size_t i = index + 1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index + 1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}
//
//void ArrayChangeRight(char arr[], int size, int index) {
//	int j = 0;
//	char newArr[5]{};
//
//	for (size_t i = index + 1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index + 1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}

//template <typename T1>
//void ArrayChangeRight(T1 arr[],int size, int index) {
//	int j = 0;
//	T1 newArr[5]{};
//
//	for (size_t i = index+1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index+1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i]<<" ";
//	}
//}

//8. Massivin funksiyaya ötürülən rəqəm qədər sağa dövrü sürüşməsini
//yerinə yetirən funksiya yazın. (Funksiyaya massiv, ölçüsü, və
//	sürüşmə indeksi göndərilir) Məsələn massiv : 1, 2, 3, 4, 5 rəqəmləri ilə
//	dolurudur, sürüşmə indexi 2dirsə, cavab : 4, 5, 1, 2, 3

//2ci usul

//void ArrayChangeRight(int arr[],int newArr[], int size, int index) {
//	int j = 0;
//	for (size_t i = index+1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index+1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i]<<" ";
//	}
//}
//
//void ArrayChangeRight(float arr[], float newArr[], int size, int index) {
//	int j = 0;
//	for (size_t i = index + 1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index + 1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}
//
//void ArrayChangeRight(double arr[], double newArr[], int size, int index) {
//	int j = 0;
//	for (size_t i = index + 1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index + 1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}
//
//void ArrayChangeRight(char arr[], char newArr[], int size, int index) {
//	int j = 0;
//	for (size_t i = index + 1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index + 1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i] << " ";
//	}
//}

//template
//template <typename T1>
//void ArrayChangeRight(T1 arr[],T1 newArr[], int size, int index) {
//	int j = 0;
//	for (size_t i = index+1; i < size; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < index+1; i++)
//	{
//		newArr[j] = arr[i];
//		j++;
//	}
//	for (size_t i = 0; i < size; i++)
//	{
//		cout << newArr[i]<<" ";
//	}
//}

void main() {
	//1. Massivin random ədədlərlə doldurulmasını realizasiya edin. (int,double, float, char)
	//srand(time(NULL));
	//const int size = 10;
	//int arr[size]{};
	//Print_Array(arr, size);
	//Init_Array(arr, siz);
	//cout << endl;
	//Print_Array(arr, size);


	//-----------------------------------------

	//double arr1[size]{};
	//Print_Array(arr1, size);
	//Init_Array(arr1, size);
	//cout << endl;
	//Print_Array(arr1, size);

	//------------------------------------------

	//float arr2[size]{};
	//Print_Array(arr2, size);
	//Init_Array(arr2, size);
	//cout << endl;
	//Print_Array(arr2, size);

	//-------------------------------------------


	//char arr3[size]{};
	//Print_Array(arr3, size);
	//Init_Array(arr3, size);
	//cout << endl;
	//Print_Array(arr3, size);


	//-------------------------------------------

	//Print_Array(arr, size);
	//Init_Array(arr, size);
	//cout << endl;
	//Print_Array(arr, size);


	//double arr1[size]{};
	//Print_Array(arr1, size);
	//Init_Array(arr1, size);
	//cout << endl;
	//Print_Array(arr1, size);


	//float arr2[size]{};
	//Print_Array(arr2, size);
	//Init_Array(arr2, size);
	//cout << endl;
	//Print_Array(arr2, size);



	//char arr3[size]{};
	//Print_Array(arr3, size);
	//Init_Array(arr3, size);
	//cout << endl;
	//Print_Array(arr3, size);


	//2. Massivin verilən diapazonda ədədlərlə dolduruması. (Funksiya,massiv, onun ölçüsü, min və max qiymətlər qəbul edir)
	//(Overload lazım deyil)

	//srand(time(NULL));
	//const int size = 10;
	//int min = 1;
	//int max = 255;
	//int arr[size]{};
	//Print_Array(arr, size, min, max);
	//Init_Array(arr, size, min, max);
	//cout << endl;
	//Print_Array(arr, size, min, max);


	//-----------------------------------------

	//double arr1[size]{};
	//Print_Array(arr1, size, min, max);
	//Init_Array(arr1, size, min, max);
	//cout << endl;
	//Print_Array(arr1, size, min, max);

	//------------------------------------------

	//float arr2[size]{};
	//Print_Array(arr2, size, min, max);
	//Init_Array(arr2, size, min, max);
	//cout << endl;
	//Print_Array(arr2, size, min, max);

	//-------------------------------------------


	//char arr3[size]{};
	//Print_Array(arr3, size, min, max);
	//Init_Array(arr3, size, min, max);
	//cout << endl;
	//Print_Array(arr3, size, min, max);


	//-------------------------------------------

	//Print_Array(arr, size, min, max);
	//Init_Array(arr, size, min, max);
	//cout << endl;
	//Print_Array(arr, size, min, max);


	//double arr1[size]{};
	//Print_Array(arr1, size, min, max);
	//Init_Array(arr1, size, min, max);
	//cout << endl;
	//Print_Array(arr1, size, min, max);


	//float arr2[size]{};
	//Print_Array(arr2, size, min, max);
	//Init_Array(arr2, size, min, max);
	//cout << endl;
	//Print_Array(arr2, size, min, max);



	//char arr3[size]{};
	//Print_Array(arr3, size, min, max);
	//Init_Array(arr3, size, min, max);
	//cout << endl;
	//Print_Array(arr3, size, min, max);



//3. Massivi ekrana çıxaran funksiya. (int, double, float, char)

//srand(time(NULL));
	//const int size = 10;
	//int arr[size]{};
	//Print_Array(arr, size);
	//Init_Array(arr, siz);
	//cout << endl;
	//Print_Array(arr, size);


	//-----------------------------------------

	//double arr1[size]{};
	//Print_Array(arr1, size);
	//Init_Array(arr1, size);
	//cout << endl;
	//Print_Array(arr1, size);

	//------------------------------------------

	//float arr2[size]{};
	//Print_Array(arr2, size);
	//Init_Array(arr2, size);
	//cout << endl;
	//Print_Array(arr2, size);

	//-------------------------------------------


	//char arr3[size]{};
	//Print_Array(arr3, size);
	//Init_Array(arr3, size);
	//cout << endl;
	//Print_Array(arr3, size);


	//-------------------------------------------

	//Print_Array(arr, size);
	//Init_Array(arr, size);
	//cout << endl;
	//Print_Array(arr, size);


	//double arr1[size]{};
	//Print_Array(arr1, size);
	//Init_Array(arr1, size);
	//cout << endl;
	//Print_Array(arr1, size);


	//float arr2[size]{};
	//Print_Array(arr2, size);
	//Init_Array(arr2, size);
	//cout << endl;
	//Print_Array(arr2, size);



	//char arr3[size]{};
	//Print_Array(arr3, size);
	//Init_Array(arr3, size);
	//cout << endl;
	//Print_Array(arr3, size);


//4. Bubble sort edən funksiya yazın. (Funksiya massiv, ölçüsü və bool
//	qəbul edir.Əgər funksiyaya true göndərilərsə sort - azalandan artana,
//	false qəbul edirsə artandan azalana sort olur)

	//const int size = 10;
	//bool choice = false;
	//int arr[size]{ 1,8,2,3,9,22,83,29,37,55 };
	//BubbleSortFunction(arr, size, choice);


	//const int size = 10;
	//bool choice = true;
	//float arr1[size]{ 1.2,8.9,2.3,3.2,22.3,22.2,83.2,29.4,37.5,55.2 };
	//BubbleSortFunction(arr1, size, choice);



	/*const int size = 10;
	bool choice = true;
	double arr2[size]{ 1.2,8.9,2.3,3.2,22.3,22.2,83.2,29.4,37.5,55.2 };
	BubbleSortFunction(arr2, size, choice);*/


	//Template

	//const int size = 10;
	//bool choice = false;
	//int arr[size]{ 1,8,2,3,9,22,83,29,37,55 };
	//BubbleSortFunction(arr, size, choice);
	//cout << endl;
	//float arr1[size]{ 1.2,8.9,2.3,3.2,22.3,22.2,83.2,29.4,37.5,55.2 };
	//BubbleSortFunction(arr1, size, choice);
	//cout << endl;
	//double arr2[size]{ 1.2,8.9,2.3,3.2,22.3,22.2,83.2,29.4,37.5,55.2 };
	//BubbleSortFunction(arr2, size, choice);




	//5. Massivdəki elementi axtaran funksiya yazın.(Funksiyaya massiv,
	//	ölçüsü və axtarılan rəqəm göndərilir.) Funksiya tapılan elementin	
	//	indexini qaytarır. (int, double, float, char)


	//const int size = 10;
	//int arr[size]{ 1,2,3,0,4,5,7,8,9,10 };
	//int number = 3;
	//cout << FindsElementArray(arr, size, number);


	//const int size = 10;
	//double arr1[size]{ 1.2,2.3,39.2,0,4.2,5.2,7,89.2,9,10 };
	//double number = 89.2;
	//cout << FindsElementArray(arr1, size, number);

	//const int size = 10;
	//double arr2[size]{ 1.2,2.3,39.2,0,4.2,5.2,7,89.2,9,10.6 };
	//double number = 89.2;
	//cout << FindsElementArray(arr2, size, number);

	//const int size = 10;
	//char arr3[size]{'2','a','9','22','n','u','r','e','19','25'};
	//char symbol ='n';
	//cout << FindsElementArray(arr3, size, symbol);


	//template

	//const int size = 10;
	//int arr[size]{ 1,2,3,0,4,5,7,8,9,10 };
	//int number = 3;
	//cout << FindsElementArray(arr, size, number);
	//cout << endl;
	//double arr1[size]{ 1.2,2.3,39.2,0,4.2,5.2,7,89.2,9,10 };
	//double number1 = 89.2;
	//cout << FindsElementArray(arr1, size, number1);
	//cout << endl;
	//double arr2[size]{ 1.2,2.3,39.2,0,4.2,5.2,7,89.2,9,10.6 };
	//double number2 = 89.2;
	//cout << FindsElementArray(arr2, size, number2);
	//cout << endl;
	//char arr3[size]{'2','a','9','22','n','u','r','e','19','25'};
	//char symbol ='n';
	//cout << FindsElementArray(arr3, size, symbol);

//6. Massivdəki ən kiçik elemnti tapan funksiya yazın. (Massivi sort etmək
//	olmaz)

	//const int size = 10;
	//int arr[size]{ 1,4,-20,45,2,3,44,888,21,24 };
	//FindSmallestElementArray(arr, size);

	//const int size = 10;
	//float arr1[size]{ 1,4.9,-20.8,45.2,2.02,3.11,-44.99,-888.22,2122,242 };
	//FindSmallestElementArray(arr1, size);

	//const int size = 10;
	//double arr2[size]{ 1,4.9,-20.8,45.2,2.02,3.11,-44.99,-888.22,2122,242 };
	//FindSmallestElementArray(arr2, size);


	//template

	//const int size = 10;
	//int arr[size]{ 1,4,-20,45,2,3,44,888,21,24 };
	//FindSmallestElementArray(arr, size);
	//cout << endl;
	//float arr1[size]{ 1,4.9,-20.8,45.2,2.02,3.11,-44.99,-888.22,2122,242 };
	//FindSmallestElementArray(arr1, size);
	//cout << endl;
	//double arr2[size]{ 1,4.9,-20.8,45.2,2.02,3.11,-44.99,-888.22,-2122.2,242 };
	//FindSmallestElementArray(arr2, size);



//7. Massivdəki ən böyük elementi tapan funksiya yazın. (Massivi sort
//	etmək olmaz) (int, double, float)

	//const int size = 10;
	//int arr[size]{ 1,4,-20,45,2,3,44,888,21,24 };
	//FindBiggestElemenetInArray(arr, size);

	//const int size = 10;
	//float arr1[size]{ 1,4.9,-20.8,45.2,2.02,3.11,-44.99,-888.22,2122.22,242 };
	//FindBiggestElemenetInArray(arr1, size);

	//const int size = 10;
	//double arr2[size]{ 1,4.9,-20.8,45.2,2.02,3.11,-44.99,-888.22,2122,73242 };
	//FindBiggestElemenetInArray(arr2, size);


	//template

	//const int size = 10;
	//int arr[size]{ 1,4,-20,45,2,3,44,888,21,24 };
	//FindBiggestElemenetInArray(arr, size);
	//cout << endl;
	//float arr1[size]{ 1,4.9,-20.8,45.2,2.02,3.11,-44.99,-888.22,6122.62,242 };
	//FindBiggestElemenetInArray(arr1, size);
	//cout << endl;
	//double arr2[size]{ 1,4.9,-20.8,45.2,2.02,9311.22,-44.99,-888.22,-2122.2,242 };
	//FindBiggestElemenetInArray(arr2, size);



//8. Massivin funksiyaya ötürülən rəqəm qədər sağa dövrü sürüşməsini
//yerinə yetirən funksiya yazın. (Funksiyaya massiv, ölçüsü, və
//	sürüşmə indeksi göndərilir) Məsələn massiv : 1, 2, 3, 4, 5 rəqəmləri ilə
//	dolurudur, sürüşmə indexi 2dirsə, cavab : 4, 5, 1, 2, 3

//const int size = 5;
//int arr[size]{ 1,2,3,4,5 };
//int index = 2;
//ArrayChangeRight(arr, size, index);

//const int size = 5;
//float arr[size]{ 1.2,2.9,3.2,4.2,5.1 };
//int index = 2;
//ArrayChangeRight(arr, size, index);

//const int size = 5;
//double arr[size]{ 1.2020,2.29,22.3,1.34,83.5 };
//int index = 2;
//ArrayChangeRight(arr, size, index);

//const int size = 5;
//char arr[size]{ 'a','b','s','n','u'};
//int index = 2;
//ArrayChangeRight(arr, size, index);

//template

//const int size = 5;
//int arr[size]{ 1,2,3,4,5 };
//int index = 2;
//ArrayChangeRight(arr, size, index);
//cout << endl;
//float arr1[size]{ 1.2,2.9,3.2,4.2,5.1 };
//ArrayChangeRight(arr1, size, index);
//cout << endl;
//double arr2[size]{ 1.2020,2.29,22.3,1.34,83.5 };
//ArrayChangeRight(arr2, size, index);
//cout << endl;
//char arr3[size]{ 'a','b','s','n','u'};
//ArrayChangeRight(arr3, size, index);


//8. Massivin funksiyaya ötürülən rəqəm qədər sağa dövrü sürüşməsini
//yerinə yetirən funksiya yazın. (Funksiyaya massiv, ölçüsü, və
//	sürüşmə indeksi göndərilir) Məsələn massiv : 1, 2, 3, 4, 5 rəqəmləri ilə
//	dolurudur, sürüşmə indexi 2dirsə, cavab : 4, 5, 1, 2, 3

//2ci usul

//const int size = 5;
//int arr[size]{ 1,2,3,4,5 };
//int newArr[size]{};
//int index = 2;
//ArrayChangeRight(arr,newArr, size, index);


//const int size = 5;
//float arr[size]{ 2.1,2.2,4.3,24.2,5 };
//float newArr[size]{};
//int index = 2;
//ArrayChangeRight(arr, newArr, size, index);
//
//const int size = 5;
//double arr[size]{ 2.1,2.2,4.3,124.2,5.222 };
//double newArr[size]{};
//int index = 2;
//ArrayChangeRight(arr, newArr, size, index);

//const int size = 5;
//char arr[size]{ 'n','u','r','a','e'};
//char newArr[size]{};
//int index = 2;
//ArrayChangeRight(arr, newArr, size, index);


//template

//const int size = 5;
//int arr[size]{ 1,2,3,4,5 };
//int newArr[size]{};
//int index = 2;
//ArrayChangeRight(arr,newArr, size, index);
//cout << endl;
//float arr1[size]{ 1.2,2.9,3.2,4.2,5.1 };
//float newArr1[size]{};
//ArrayChangeRight(arr1,newArr1, size, index);
//cout << endl;
//double arr2[size]{ 1.2020,2.29,22.3,1.34,83.5 };
//double newArr2[size]{};
//ArrayChangeRight(arr2,newArr2, size, index);
//cout << endl;
//char arr3[size]{ 'a','b','s','n','u'};
//char newArr3[size]{};
//ArrayChangeRight(arr3,newArr3, size, index);

}