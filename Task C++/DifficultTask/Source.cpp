#include <iostream>
using namespace std;

void Massiv_Yarat(int arr[], int olcu) {
	int min = 0, max = 100;
	for (size_t i = 0; i < olcu; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}

void Massiv_Yazdir(int arr[], int olcu) {
	for (size_t i = 0; i < olcu; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

double Ededi_Ortani_Hesabla(int arr[], int olcu) {
	double cemi = 0;
	for (size_t i = 0; i < olcu; i++) {
		cemi += arr[i];
	}
	return cemi / olcu;
}

int En_Yaxin_Elemani_Tap(int arr[], int olcu) {
	double ortalama = Ededi_Ortani_Hesabla(arr, olcu);
	int enYaxinElement = arr[0];
	double minimumMesafe = (arr[0] - ortalama) * (arr[0] - ortalama);

	for (int i = 1; i < olcu; i++) {
		double mesafe = (arr[i] - ortalama) * (arr[i] - ortalama);
		if (mesafe < minimumMesafe) {
			minimumMesafe = mesafe;
			enYaxinElement = arr[i];
		}
	}

	return enYaxinElement;
}

void main() {
	const int olcu = 10;
	int arr[olcu];
	Massiv_Yarat(arr, olcu);
	Massiv_Yazdir(arr, olcu);

	int enYaxinElement = En_Yaxin_Elemani_Tap(arr, olcu);
	cout << "Ededi ortaya en yaxin olan element: " << enYaxinElement << endl;

}
