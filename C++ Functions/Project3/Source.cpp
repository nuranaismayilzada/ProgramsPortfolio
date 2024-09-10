#include<iostream>
using namespace std;


//1. Ədədin kubunu qaytaran funksiya yazın.
int Function_Cube_Number(int number) {
	int cube = number * number * number;
	return cube;
}


//2. İki ədəddən böyüyünü tapan funksiya yazın.
double Finds_Larger_Numbers(double number1, double number2) {
	if (number1 > number2)
	{
		return number1;
	}
	else if (number1 < number2)
	{
		return number2;
	}
}

//3. Ədəd müsbətdirsə doğru, mənfidirsə yanlış qaytaran funksiya yazın.
bool Find_Number_Positive_And_Negative(int num) {
	if (num > 0)
	{
		return true;
	}
	else if (num < 0) {

		return false;
	}
}

//4. İstifadəçinin seçimindən asılı olaraq Toplama, Çıxma, Vurma, Bölmə funksiyalarından birini çağıran, funksiya yazın.
double Addition(double number1, double number2) {
	return number1 + number2;
}
double Multiply(double number1, double number2) {
	return number1 * number2;
}
double Subtraction(double number1, double number2) {
	return number1 - number2;
}
double Division(double number1, double number2) {
	return number1 / number2;
}

void Choice_Function() {
	int num1, num2;
	int choice;
	cout << "1-Toplama  2-Cixma  3-Vurma  4-Bolme" << endl;
	cout << "Seciminizi daxil edin:";
	cin >> choice;
	cout << "Ededi daxil edin:";
	cin >> num1;
	cout << "Ededi daxil edin:";
	cin >> num2;

	if (choice == 1)
	{
		cout << Addition(num1, num2);
	}
	else if (choice == 2) {
		cout << Subtraction(num1, num2);
	}
	else if (choice == 3) {
		cout << Multiply(num1, num2);
	}
	else if (choice == 4) {
		cout << Division(num1, num2);
	}
	else {
		cout << "Bele bir secim yoxdur.";
	}

}


//5. Parametr kimi tərfinin uzunluğunu qəbul edən, və ekrana həmin ölçüdə kvadrat çıxaran funksiya yazın.
void Create_Square(int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			if (k == 0 || i == size - 1 || i == 0 || k == size - 1)
			{
				cout << "*  ";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}
}


//6. Göndərilən rəqəmin sadə olub olmadığını yoxlayan funksiya yazın.
void Check_Number_Simple(int number) {
	int bolen = 1;
	int Count = 0;
	while (number >= bolen)
	{
		if (number % bolen == 0)
		{
			Count++;
		}
		bolen++;
	}
	if (Count == 2)
	{
		cout << "Eded sadedir.";
	}
	else {
		cout << "Eded murekkebdir.";
	}
}

//7. Ədədin faktorialını qaytaran funksiya yazın.

int Find_Number_Factorial(int num) {
	int factorial = 1;
	while (num > 0)
	{
		factorial *= num;
		num--;
	}
	return factorial;
}

//8. İki parametr qəbul edən : Üst və Qüvvət, və ədədin qüvvətini qaytaran funksiya yazın.

int Power_Find_Number(int number, int power) {
	int result = 1;
	while (power > 0)
	{
		result = result * number;
		power--;
	}
	return result;
}

//9. Funksiya 2 ədəd qəbul edir və bunlar arasındakı bütün ədədləri toplayıb qaytarır.

double Numbers_Between_Sum(double number1, double number2) {
	int sum = 0;
	if (number1 < number2)
	{
		while (number1 < number2)
		{
			sum += number1;
			number1++;
		}
	}
	else if (number1 > number2) {
		while (number1 > number2)
		{
			sum += number1;
			number1++;
		}
	}
	return sum;
}

//10. Massivdəki ən böyük ədədi qaytaran funksiya yazın.

void Init_Array(int arr[], int size) {
	int min = 1, max = 100;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void Show_Array(int arr[], int size) {
	cout << "Massiv:";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int Find_Biggest_Number(int arr[],int size) {
	cout << "Massivdeki en boyuk eded:";
	int maximumNumber = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i]>maximumNumber)
		{
			maximumNumber = arr[i];
		}
	}
	return maximumNumber;
}
void main() {

	srand(time(NULL));

//-------------------------------------------------------------------------------------------------------------------------------

		//1. Ədədin kubunu qaytaran funksiya yazın.

		//cout << Function_Cube_Number(6) << endl << endl;

//-------------------------------------------------------------------------------------------------------------------------------

		//2. İki ədəddən böyüyünü tapan funksiya yazın.

		//cout << Finds_Larger_Numbers(10.8, 9.9) << endl<<endl;

//-------------------------------------------------------------------------------------------------------------------------------
 
		//3. Ədəd müsbətdirsə doğru, mənfidirsə yanlış qaytaran funksiya yazın.

		//cout << Find_Number_Positive_And_Negative(5)<<endl;

//-------------------------------------------------------------------------------------------------------------------------------
 
		//4. İstifadəçinin seçimindən asılı olaraq Toplama, Çıxma, Vurma, Bölmə funksiyalarından birini çağıran, funksiya yazın.

		//Choice_Function();
		//cout << endl;

//-------------------------------------------------------------------------------------------------------------------------------

		//5. Parametr kimi tərfinin uzunluğunu qəbul edən, və ekrana həmin ölçüdə kvadrat çıxaran funksiya yazın.

		//Create_Square(10);


//-------------------------------------------------------------------------------------------------------------------------------

		//6. Göndərilən rəqəmin sadə olub olmadığını yoxlayan funksiya yazın.

		//Check_Number_Simple(9);
		//cout << endl;
		//Check_Number_Simple(7);

//-------------------------------------------------------------------------------------------------------------------------------
 
		//7.Ədədin faktorialını qaytaran funksiya yazın.

		//cout << Find_Number_Factorial(4);

//-------------------------------------------------------------------------------------------------------------------------------

		//8. İki parametr qəbul edən : Üst və Qüvvət, və ədədin qüvvətini qaytaran funksiya yazın.

		//cout<<Power_Find_Number(3, 3)<<endl;
		//cout << Power_Find_Number(5, 3);
		
//-------------------------------------------------------------------------------------------------------------------------------

		//9. Funksiya 2 ədəd qəbul edir və bunlar arasındakı bütün ədədləri toplayıb qaytarır.
		
		//cout<<Numbers_Between_Sum(5, 10);
		
//-------------------------------------------------------------------------------------------------------------------------------

		//10. Massivdəki ən böyük ədədi qaytaran funksiya yazın.

		//const int size = 10;
		//int arr[size]{};
		//Show_Array(arr, size);
		//Init_Array(arr, size);
		//Show_Array(arr, size);
		//cout << Find_Biggest_Number(arr, size);



//-------------------------------------------------------------------------------------------------------------------------------

}