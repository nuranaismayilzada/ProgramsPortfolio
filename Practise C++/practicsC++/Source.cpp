#include<iostream>
using namespace std;

void Init_Array(int arr[], int size) {
	int min = 0, max = 100;
	for (size_t i = 0; i < size; i++)
	{
	 arr[i] = min + rand() % (max - min + 1);
	}
}

void Print_Array(int arr[], int size) {

	int min = 0, max = 100;
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void First_Element_Delete(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		arr[i] = arr[i + 1];  
	}
	size--;  
}

void Last_Element_Delete(int arr[], int size) {
	for (size_t i = 0; i < size - 1; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Delete_Index(int arr[], int size, int indexToSkip) {
	for (size_t i = 0; i < size; i++) {
		if (i == indexToSkip) {
			continue;
		}
		cout << arr[i] << " ";
	}
	cout << endl;
}

double Ededi_Ortani_Hesabla(int arr[], int size) {
	double cemi = 0;
	for (size_t i = 0; i < size; i++) {
		cemi += arr[i];
	}
	return cemi / size;
}

int En_Yaxin_Elemani_Tap(int arr[], int size) {
	double ort = Ededi_Ortani_Hesabla(arr, size);
	int yaxinIndex = 0;
	double minimumMesafe = arr[0] - ort;

	if (minimumMesafe < 0) {
		minimumMesafe = -minimumMesafe;
	}

	for (size_t i = 1; i < size; i++) {
		double mesafe = arr[i] - ort;
		if (mesafe < 0) {
			mesafe = -mesafe;
		}
		if (mesafe < minimumMesafe) {
			minimumMesafe = mesafe;
			yaxinIndex = i;
		}
	}

	return yaxinIndex;
}

void main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size]{};
	cout << "Array:";
	Init_Array(arr, size);
	Print_Array(arr, size);

	//cout << endl;
	//cout << "1-CI ELEMENTI SILINMIS ARRAY:";
	//First_Element_Delete(arr, size);  
	//Print_Array(arr, size); 
	//cout << endl;
	//cout << "Sonuncu elementi silinmis array:";
	//Last_Element_Delete(arr, size);
	cout << endl;

	int yaxinIndex = En_Yaxin_Elemani_Tap(arr, size);
	cout << "Ededi ortaya en yaxin olan element: " << arr[yaxinIndex] << endl;

}