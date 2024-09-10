#include<iostream>
using namespace std;

void Init_Array(int arr[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void Init_Array(double arr[], int size, double min, double max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + (rand() % 100) * (max - min) / 100.0;
    }
}


void Init_Array(char arr[], int size, char min, char max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

template <typename T>
void Print_Array(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void main() {
    srand(time(NULL)); 

    const int size = 10;

    int arr[size];
    Init_Array(arr, size, 10, 50); 
    Print_Array(arr, size);

    double arr2[size];
    Init_Array(arr2, size, 1.0, 5.0); 
    Print_Array(arr2, size);

    char arr3[size];
    Init_Array(arr3, size, 'a', 'z'); 
    Print_Array(arr3, size);

}
