#include<iostream>
using namespace std;
void main() {
	//1. Pointerdən istifadə edərək, İstiadəçinin daxil etdiyi rəqəmin işarəsini tapan program yazın.

	//int number;
	//cout << "Please,enter number:";
	//cin >> number;
	//int* ptr_number = &number;
	//if (*ptr_number>0)
	//{
	//	cout << "This number is positive: +";
	//}
	//else if (*ptr_number < 0) {
	//	cout << "This number is negative: -";
	//}
	//else {
	//	cout << "This number is euqal to 0.";
	//}

	//2. Ancaq pointerdən istifadə edərək, primitiv kalkulyator yazın.
	//cout << "Calculator" << endl;
	//cout << "1.Addition   2.Subtraction   3.Multiplication  4.Division" << endl;
	//int choice;
	//cout << "Please enter your choice:";
	//cin >> choice;
	//double number1, number2;
	//cout << "Enter number1:";
	//cin >> number1;
	//cout << "Enter number2:";
	//cin >> number2;
	//double* ptr_number1 = &number1;
	//double* ptr_number2 = &number2;
	//if (choice == 1)
	//{
	//	cout << "Result:" << *ptr_number1 + *ptr_number2;
	//}
	//else if (choice == 2) 
	//{
	//	cout << "Result:" << *ptr_number1 - *ptr_number2;
	//}
	//else if (choice == 3)
	//{
	//	cout << "Result:" << (*ptr_number1) * (*ptr_number2);
	//}
	//else if (choice == 4)
	//{
	//	cout << "Result:" << (*ptr_number1) / (*ptr_number2);
	//}
	//else {
	//	cout << "There is no such choice!";
	//}



	//3. Tam ədədlərdən ibarət massivin elementlərini toplayan program yazın.

	//const int size = 5;
	//int arr[size]{ 1,2,3,4,5 };
	//int* ptr_arr = arr;
	//int sum = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	sum += ptr_arr[i];
	//}
	//cout << "The sum of all elements in the array:" << sum;


	//4. İki pointerdən istifadə edərək, bir massivdəki elementləri digərinə kopyalayn program yazın.

	//const int size = 5;
	//int arr1[size]{1,2,3,4,5};
	//int arr2[size]{};
	//int *arr1_ptr=arr1;
	//int* arr2_ptr = arr2;

	//for (size_t i = 0; i < size; i++)
	//{
	//	*(arr2_ptr + i) = *(arr1_ptr + i);
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << *(arr1_ptr + i)<<" ";
	//}

	//5. Pointerlərdən istifadə edərək, ölçüsü 10 olan massivdə elementlərin sırasını tərsinə çevirən program yazın.

	//const int size = 10;
	//int arr[size]{ 0,1,2,3,4,5,6,7,8,9 };
	//int* ptr_arr = arr;
	//int* ptr_arr_end = arr + (size - 1);
	//for (size_t i = 0; i < size/2; i++)
	//{
	//	int temp = *(ptr_arr+i);
	//	*(ptr_arr + i) = *(ptr_arr_end - i);
	//	*(ptr_arr_end - i) = temp;

	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << *(ptr_arr + i)<<" ";
	//}


	//6. İki pointerdən elə istifadə edin ki, birinci massivdən ikinci massivə ədədləri tərsinə kopyalayan program yazın.

	//const int size = 5;
	//int arr1[size]{ 23,89,92,19,21 };
	//int arr2[size]{};
	//int* ptr_arr1 = arr1;
	//int* ptr_arr2 = arr2;
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << *(ptr_arr1 + i) << " ";
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	int eded = *(ptr_arr1 + i);
	//	int ters = 0;
	//	while (eded > 0)
	//	{
	//		ters = ters * 10 + (eded % 10);
	//		eded /= 10;
	//	}
	//	*(ptr_arr2 + i) = ters;
	//}
	//cout << endl;
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << *(ptr_arr2 + i) << " ";
	//}

	//7. Pointerlərdən istifadə edərək, massivin maximal və minimal elementlərini tapan program yazın.
	//const int size = 5;
	//int arr1[size]{ 23,89,92,1,21 };
	//int* ptr_arr1 = arr1;
	//int* min_ptr = arr1;
	//int* max_ptr = arr1;
	//cout << endl;
	//for (size_t i = 0; i < size; i++)
	//{
	//	if ((*min_ptr)>(*(ptr_arr1+i)))
	//	{
	//		min_ptr = (ptr_arr1 + i);
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	if ((*max_ptr) < (*(ptr_arr1 + i)))
	//	{
	//		max_ptr = (ptr_arr1 + i);
	//	}
	//}

	//cout << "Massivdeki maximal element:" << *max_ptr << endl;
	//cout << "Massivdeki minimal element:" << *min_ptr << endl;

	//8. Pointerlərdən istifadə edərək massivi dövrü sürüşdürən program yazın. 
	//	(bu tapışırıq dövrlərdə iki dəfə yazmısınız, alqoritmini ordan götürə bilərsiniz) ([1,2,3,4,5] index=2 olanda ekrana 
	// [4,5,1,2,3]

	//const int size = 5;
	//int arr[size]{ 1, 2, 3, 4, 5};
	//int* ptr_arr = arr;

	//cout << "Index daxil edin: ";
	//int index;
	//cin >> index;


	//int temp[size];
	//for (size_t i = 0; i <index+1; i++)
	//{
	//	temp[i] = *(ptr_arr + i);
	//}
	//
	//int j;
	//for (size_t i = index+1; i < size; i++)
	//{
	//	*(ptr_arr + i - index - 1) = *(ptr_arr + i);
	//	j = i - index - 1;
	//}
	//int k = 0;
	//for (size_t i = j+1; i < size; i++)
	//{
	//	*(ptr_arr + i) = temp[k];
	//	k++;
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << *(ptr_arr+i)<< " ";
	//}
	
}