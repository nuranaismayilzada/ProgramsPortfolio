#include<iostream>
using namespace std;

//1. Dinamik yaddaş ayıran funskiya yazın.
int* Reserve_Array(int size) {
	int* arr = new int[size] {};
	return arr;
}
//2. Dinamik massivi random ədədlərlə dolduran funksiya yazın.
template<typename T1>
void Init_Array(T1* arr, int* size, int max, int min) {
	for (size_t i = 0; i < *size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}
//speacial function-double
void Init_Array(double* arr, int* size, int max, int min) {
	for (size_t i = 0; i < *size; i++)
	{
		arr[i] = double(min + rand() % (max - min + 1)) / 10;
	}
}
//speacial function-float
void Init_Array(float* arr, int* size, int max, int min) {
	for (size_t i = 0; i < *size; i++)
	{
		arr[i] = float(min + rand() % (max - min + 1)) / 100;
	}
}
//3. Dinamik massivi ekrana çıxaran funksiya yazın.
template<typename T1>
void Print_Array(T1* arr, int* size, int max, int min) {
	for (size_t i = 0; i < *size; i++)
	{
		cout << arr[i] << " ";
	}
}

//4. Dinamik massivi silən funksiya yazın.
template<typename T1>
void Delete_Array(T1* arr) {
	delete[]arr;
}

//5. Dinamik massivin sonuna element əlavə edən funksiya yazın.
template<typename T>
T* Push_Back(T* arr, int* size, T new_element) {
	if (size == nullptr)
	{
		return nullptr;
	}
	T* new_Arr = new T[*size + 1]{};
	for (size_t i = 0; i < *size; i++)
	{
		new_Arr[i] = arr[i];
	}
	new_Arr[*size] = new_element;
	delete[]arr;
	arr = nullptr;
	*size += 1;
	return new_Arr;
}

//6. Dinmaik massivin göstərilən indexinə element əlavə edən funksiya yazın.
template<typename T>
T* Index_Push(T* arr, int* size, T new_element, int index) {
	if (index<0 || size == nullptr || index>*size)
	{
		return nullptr;
	}
	T* new_Arr = new T[*size + 1];
	int j = 0;
	for (size_t i = 0; i < *size + 1; i++)
	{
		if (i == index)
		{
			new_Arr[index] = new_element;
			continue;
		}
		new_Arr[i] = arr[j];
		j++;
	}
	*size += 1;
	delete[] arr;
	arr = nullptr;
	return new_Arr;
}

//7. Dinamik massivdən göstərilən indexdəki elementin silinməsi
template<typename T>
T* Delete_Index(T* arr, int* size, int index) {
	if (index<0 || size == nullptr || index>*size)
	{
		return nullptr;
	}
	T* new_Arr = new T[*size - 1];
	int j = 0;
	for (size_t i = 0; i < *size; i++)
	{
		if (i == index)
		{
			continue;
		}
		new_Arr[j] = arr[i];
		j++;
	}
	*size -= 1;
	delete[]arr;
	arr = nullptr;
	return new_Arr;
}
//8. Dinamik massivin sonuna bir blok element əlavə edən funksiya yazın.
template<typename T>
T* Push_Back_Array(T* arr, int* size, T* push_new_arr, int* new_arr_size) {
	if (push_new_arr == nullptr || size == nullptr || new_arr_size == nullptr)
	{
		return nullptr;
	}
	T* new_Arr = new T[(*new_arr_size) + (*size)];
	int j = 0;
	for (size_t i = 0; i < *size; i++)
	{
		new_Arr[i] = arr[i];
		j = i;
	}
	for (size_t i = 0; i < *new_arr_size; i++)
	{
		new_Arr[++j] = push_new_arr[i];

	}
	*size += *new_arr_size;
	delete[]arr;
	arr = nullptr;
	return new_Arr;
}
//ikinci usul-massivi ozumuz elle daxil edirik.
//8. Dinamik massivin sonuna bir blok element əlavə edən funksiya yazın.
template<typename T>
T* Push_Back_Array_Second_Way(T* arr, int* size, T* push_new_arr, int* new_arr_size) {
	if (push_new_arr == nullptr || size == nullptr || new_arr_size == nullptr)
	{
		return nullptr;
	}
	T* new_Arr = new T[(*new_arr_size) + (*size)];
	int j = 0;
	for (size_t i = 0; i < *new_arr_size; i++)
	{
		T new_array_element;
		cout << "Massivin elementini daxil edin:";
		cin >> new_array_element;
		T* new_array_element_ptr = new T(new_array_element);
		push_new_arr[i] = *new_array_element_ptr;
	}
	for (size_t i = 0; i < *size; i++)
	{
		new_Arr[i] = arr[i];
		j = i;
	}
	for (size_t i = 0; i < *new_arr_size; i++)
	{
		new_Arr[++j] = push_new_arr[i];

	}
	*size += *new_arr_size;
	delete[]arr;
	arr = nullptr;
	return new_Arr;
}
//9. Dinamik massivin göstərilən indexindən sonra bir blok element əlavə edən funksiya yazın.
template<typename T>
T* Push_Insert_Index_Array(T* arr, int* size, int index, T* push_new_arr, int* new_arr_size) {
	if (push_new_arr == nullptr || index<0 || size == nullptr || new_arr_size == nullptr || index>*size)
	{
		return nullptr;
	}
	T* new_Arr = new T[(*new_arr_size) + (*size)];
	int j = 0;
	for (size_t i = 0; i < index; i++)
	{
		new_Arr[i] = arr[i];
		j = i;
	}
	for (size_t i = 0; i < *new_arr_size; i++)
	{
		new_Arr[++j] = push_new_arr[i];
	}
	for (size_t i = index; i < *size; i++)
	{
		new_Arr[++j] = arr[i];
	}

	*size += *new_arr_size;
	delete[]arr;
	arr = new_Arr;
	//////arr=nullptr
	return new_Arr;
}

//ikinci usul-massivi elle daxil etmek
//9. Dinamik massivin göstərilən indexindən sonra bir blok element əlavə edən funksiya yazın.
template<typename T>
T* Push_Insert_Index_Array_Second_Way(T* arr, int* size, int index, T* push_new_arr, int* new_arr_size) {
	if (push_new_arr == nullptr || index<0 || size == nullptr || new_arr_size == nullptr || index>*size)
	{
		return nullptr;
	}
	T* new_Arr = new T[(*new_arr_size) + (*size)];
	int j = 0;
	for (size_t i = 0; i < *new_arr_size; i++)
	{
		T new_array_element;
		cout << "Massivin elementini daxil edin:";
		cin >> new_array_element;
		T* new_array_element_ptr = new T(new_array_element);
		push_new_arr[i] = *new_array_element_ptr;
	}
	for (size_t i = 0; i < index; i++)
	{
		new_Arr[i] = arr[i];
		j = i;
	}
	for (size_t i = 0; i < *new_arr_size; i++)
	{
		new_Arr[++j] = push_new_arr[i];
	}
	for (size_t i = index; i < *size; i++)
	{
		new_Arr[++j] = arr[i];
	}

	*size += *new_arr_size;
	delete[]arr;
	arr = new_Arr;
	//////arr=nullptr
	return new_Arr;
}
//10. Dinamik massivdən bir blok elementi silən funksiya yazın.
template<typename T>
T* Delete_Array_In_Array(T* arr, int* size, int index, int coount) {
	if (index<0 || size == nullptr || index>*size || coount < 0)
	{
		return nullptr;
	}
	T* new_Arr = new T[*size - coount];
	int j = 0;
	for (size_t i = 0; i < index; i++)
	{
		new_Arr[j++] = arr[i];

	}
	for (size_t i = (index + coount); i < *size; i++)
	{
		new_Arr[j] = arr[i];
		j++;
	}
	*size -= coount;
	delete[]arr;
	arr = new_Arr;
	return new_Arr;
}

void main() {
	//srand(time(NULL));
	int size = 10;
	int min = 1;
	int max = 100;
	//int* arr = Reserve_Array(size);
	//Print_Array(arr, &size, max, min);
	//cout << endl;
	//Init_Array(arr, &size, max, min);
	//Print_Array(arr, &size, max, min);
	//Delete_Array(arr);


	//double* arr1 = new double [size] {};
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//Delete_Array(arr1);


	//float* arr2 = new float [size] {};
	//Print_Array(arr2, &size, max, min);
	//cout << endl;
	//Init_Array(arr2, &size, max, min);
	//Print_Array(arr2, &size, max, min);
	//Delete_Array(arr2);


	//char* arr3 = new char [size] {};
	//Print_Array(arr3, &size, max, min);
	//cout << endl;
	//Init_Array(arr3, &size, max, min);
	//Print_Array(arr3, &size, max, min);
	//Delete_Array(arr3);



	//int* arr4 = Reserve_Array(size);
	//Delete_Array(arr);


	//int* arr5 = Reserve_Array(size);
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//int new_element;
	//cout << "Enter new element:";
	//cin >> new_element;
	//cout << endl;
	//arr5= Push_Back(arr5, &size, new_element);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;
	//cout << "Enter new element:";
	//cin >> new_element;
	//cout << endl;
	//arr5 = Push_Back(arr5, &size, new_element);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//Delete_Array(arr6);

	//double* arr5 = new double[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//double new_element;
	//cout << "Enter new element:";
	//cin >> new_element;
	//cout << endl;
	//arr5 = Push_Back(arr5, &size, new_element);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;
	//cout << "Enter new element:";
	//cin >> new_element;
	//cout << endl;
	//arr5 = Push_Back(arr5, &size, new_element);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//Delete_Array(arr6);


	//float* arr5 = new float[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//float new_element;
	//cout << "Enter new element:";
	//cin >> new_element;
	//cout << endl;
	//arr5 = Push_Back(arr5, &size, new_element);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;
	//cout << "Enter new element:";
	//cin >> new_element;
	//cout << endl;
	//arr5 = Push_Back(arr5, &size, new_element);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;

	//char* arr5 = new char[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//char new_element;
	//cout << "Enter new element:";
	//cin >> new_element;
	//cout << endl;
	//arr5 = Push_Back(arr5, &size, new_element);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;
	//cout << "Enter new element:";
	//cin >> new_element;
	//cout << endl;
	//arr5 = Push_Back(arr5, &size, new_element);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;

	//int* arr1 = Reserve_Array(size);
	//cout << "evvelki size:"<<size << endl;
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//int new_element;
	//cout << "Elave etmek istediyiniz elementi daxil edin:";
	//cin >> new_element;
	//cout << "indexi daxil edin:";
	//int index;
	//cin >> index;
	//cout << endl;
	//arr1 = Index_Push(arr1, &size, new_element, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;
	//cout << "Elave etmek istediyiniz elementi daxil edin:";
	//cin >> new_element;
	//cout << "indexi daxil edin:";
	//cin >> index;
	//cout << endl;
	//arr1 = Index_Push(arr1, &size, new_element, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;


	//double* arr1 = new double[size] {};
	//cout << "evvelki size:" << size << endl;
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//double new_element;
	//cout << "Elave etmek istediyiniz elementi daxil edin:";
	//cin >> new_element;
	//cout << "indexi daxil edin:";
	//int index;
	//cin >> index;
	//cout << endl;
	//arr1 = Index_Push(arr1, &size, new_element, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;
	//cout << "Elave etmek istediyiniz elementi daxil edin:";
	//cin >> new_element;
	//cout << "indexi daxil edin:";
	//cin >> index;
	//cout << endl;
	//arr1 = Index_Push(arr1, &size, new_element, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;

	//float* arr1 = new float[size] {};
	//cout << "evvelki size:" << size << endl;
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//float new_element;
	//cout << "Elave etmek istediyiniz elementi daxil edin:";
	//cin >> new_element;
	//cout << "indexi daxil edin:";
	//int index;
	//cin >> index;
	//cout << endl;
	//arr1 = Index_Push(arr1, &size, new_element, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;
	//cout << "Elave etmek istediyiniz elementi daxil edin:";
	//cin >> new_element;
	//cout << "indexi daxil edin:";
	//cin >> index;
	//cout << endl;
	//arr1 = Index_Push(arr1, &size, new_element, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;

	//char* arr1 = new char[size] {};
	//cout << "evvelki size:" << size << endl;
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//char new_element;
	//cout << "Elave etmek istediyiniz elementi daxil edin:";
	//cin >> new_element;
	//cout << "indexi daxil edin:";
	//int index;
	//cin >> index;
	//cout << endl;
	//arr1 = Index_Push(arr1, &size, new_element, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;
	//cout << "Elave etmek istediyiniz elementi daxil edin:";
	//cin >> new_element;
	//cout << "indexi daxil edin:";
	//cin >> index;
	//cout << endl;
	//arr1 = Index_Push(arr1, &size, new_element, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;


	//int* arr1 = Reserve_Array(size);
	//cout << "evvelki size:"<<size << endl;
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "indexi daxil edin:";
	//int index;
	//cin >> index;
	//cout << endl;
	//arr1 =Delete_Index(arr1, &size, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;
	//cout << "indexi daxil edin:";
	//cin >> index;
	//cout << endl;
	//arr1 = Delete_Index(arr1, &size, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;



	//double* arr1 = new double[size] {};
	//cout << "evvelki size:" << size << endl;
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "indexi daxil edin:";
	//int index;
	//cin >> index;
	//cout << endl;
	//arr1 = Delete_Index(arr1, &size, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;
	//cout << "indexi daxil edin:";
	//cin >> index;
	//cout << endl;
	//arr1 = Delete_Index(arr1, &size, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;


	//float* arr1 = new float[size] {};
	//cout << "evvelki size:" << size << endl;
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "indexi daxil edin:";
	//int index;
	//cin >> index;
	//cout << endl;
	//arr1 = Delete_Index(arr1, &size, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;
	//cout << "indexi daxil edin:";
	//cin >> index;
	//cout << endl;
	//arr1 = Delete_Index(arr1, &size, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;


	//char* arr1 = new char[size] {};
	//cout << "evvelki size:" << size << endl;
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//Init_Array(arr1, &size, max, min);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "indexi daxil edin:";
	//int index;
	//cin >> index;
	//cout << endl;
	//arr1 = Delete_Index(arr1, &size, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;
	//cout << "indexi daxil edin:";
	//cin >> index;
	//cout << endl;
	//arr1 = Delete_Index(arr1, &size, index);
	//Print_Array(arr1, &size, max, min);
	//cout << endl;
	//cout << "sonraki size:" << size << endl;



	//int* arr5 = Reserve_Array(size);
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1 = 5;
	//int* new_Arr = new int [size1] {90, 28, 99, 33, 11};
	//arr5 = Push_Back_Array(arr5,&size,new_Arr,&size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;


	//double* arr5 = new double[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1 = 5;
	//double* new_Arr = new double [size1] {2.2102, 9.28, 2.99, 1.33, 11.9999};
	//arr5 = Push_Back_Array(arr5, &size, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;




	//float* arr5 = new float[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1 = 5;
	//float* new_Arr = new float [size1] {2.2102, 9.28, 2.99, 1.33, 11.9999};
	//arr5 = Push_Back_Array(arr5, &size, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;



	//char* arr5 = new char[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1 = 5;
	//char* new_Arr = new char [size1] {'a','b','s','e','n'};
	//arr5 = Push_Back_Array(arr5, &size, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;


	//second way-massivi ozumuz elle daxil edib elave edirik

	//int* arr5 = Reserve_Array(size);
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1;
	//cout << "Elave etmek istediyiniz massivin olcusunu daxil edin:";
	//cin >> size1;
	//int* new_Arr = new int [size1] {};
	//arr5 = Push_Back_Array_Second_Way(arr5,&size,new_Arr,&size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;


	//char* arr5 = new char[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1;
	//cout << "Elave etmek istediyiniz massivin olcusunu daxil edin:";
	//cin >> size1;
	//char* new_Arr = new char [size1] {};
	//arr5 = Push_Back_Array_Second_Way(arr5, &size, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;




	//int* arr5 = Reserve_Array(size);
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1 = 5;
	//int* new_Arr = new int [size1] {90, 28, 99, 33, 11};
	//cout << "Elave olunacaq massiv:";
	//for (size_t i = 0; i < size1; i++)
	//{
	//	cout << new_Arr[i] << " ";
	//}
	//cout << endl;
	//int index = 4;
	//cout << "Index daxil edin:";
	//cin >> index;
	//arr5 = Push_Insert_Index_Array(arr5,&size,index,new_Arr,&size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;





	//double* arr5 = new double[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1 = 5;
	//double* new_Arr = new double [size1] {9.202, 9.28, 5.99, 2.33, 12.1};
	//cout << "Elave olunacaq massiv:";
	//for (size_t i = 0; i < size1; i++)
	//{
	//	cout << new_Arr[i] << " ";
	//}
	//cout << endl;
	//int index = 4;
	//cout << "Index daxil edin:";
	//cin >> index;
	//arr5 = Push_Insert_Index_Array(arr5, &size, index, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;




	//float* arr5 = new float[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1 = 5;
	//float* new_Arr = new float [size1] {9.202, 9.28, 5.99, 2.33, 12.1};
	//cout << "Elave olunacaq massiv:";
	//for (size_t i = 0; i < size1; i++)
	//{
	//	cout << new_Arr[i] << " ";
	//}
	//cout << endl;
	//int index = 4;
	//cout << "Index daxil edin:";
	//cin >> index;
	//arr5 = Push_Insert_Index_Array(arr5, &size, index, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;


	//char* arr5 = new char[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1 = 6;
	//char* new_Arr = new char [size1] {'n', 'u', 'r', 'a', 'n', 'e'};
	//cout << "Elave olunacaq massiv:";
	//for (size_t i = 0; i < size1; i++)
	//{
	//	cout << new_Arr[i] << " ";
	//}
	//cout << endl;
	//int index = 4;
	//cout << "Index daxil edin:";
	//cin >> index;
	//arr5 = Push_Insert_Index_Array(arr5, &size, index, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;


	//second-way-massivi elle daxil etmek
	//int* arr5 = Reserve_Array(size);
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1;
	//cout << "Elave etmek istediyiniz massivin olcusunu daxil edin:";
	//cin >> size1;
	//int* new_Arr = new int [size1] {};
	//cout << endl;
	//int index;
	//cout << "Index daxil edin:";
	//cin >> index;
	//arr5 = Push_Insert_Index_Array_Second_Way(arr5, &size, index, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;

	//char* arr5 = new char[size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//int size1;
	//cout << "Elave etmek istediyiniz massivin olcusunu daxil edin:";
	//cin >> size1;
	//char* new_Arr = new char [size1] {};
	//cout << endl;
	//int index;
	//cout << "Index daxil edin:";
	//cin >> index;
	//arr5 = Push_Insert_Index_Array_Second_Way(arr5, &size, index, new_Arr, &size1);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;



	//int* arr5 = Reserve_Array(size);
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//cout << endl;
	//int index;
	//cout << "Hansi indexden etibaren silmek istediyinizi daxil edin:";
	//cin >> index;
	//int countt;
	//cout << "Nece eded element silmek istediyinizi daxil edin:";
	//cin >> countt;
	//arr5 =Delete_Array_In_Array(arr5,&size,index,countt);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;



	//double* arr5 = new double [size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//cout << endl;
	//int index;
	//cout << "Hansi indexden etibaren silmek istediyinizi daxil edin:";
	//cin >> index;
	//int countt;
	//cout << "Nece eded element silmek istediyinizi daxil edin:";
	//cin >> countt;
	//arr5 = Delete_Array_In_Array(arr5, &size, index, countt);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;


	//float* arr5 = new float [size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//cout << endl;
	//int index;
	//cout << "Hansi indexden etibaren silmek istediyinizi daxil edin:";
	//cin >> index;
	//int countt;
	//cout << "Nece eded element silmek istediyinizi daxil edin:";
	//cin >> countt;
	//arr5 = Delete_Array_In_Array(arr5, &size, index, countt);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;

	//char* arr5 = new char [size] {};
	//Print_Array(arr5, &size, max, min);
	//Init_Array(arr5, &size, max, min);
	//cout << endl;
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size << endl;
	//cout << endl;
	//int index;
	//cout << "Hansi indexden etibaren silmek istediyinizi daxil edin:";
	//cin >> index;
	//int countt;
	//cout << "Nece eded element silmek istediyinizi daxil edin:";
	//cin >> countt;
	//arr5 = Delete_Array_In_Array(arr5, &size, index, countt);
	//Print_Array(arr5, &size, max, min);
	//cout << endl;
	//cout << size;
	//cout << endl;
}
