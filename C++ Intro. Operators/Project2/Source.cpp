#include<iostream>

using namespace std;

void main() {

	//1. Istifadəçi ədəd daxil edir.Ekrana əgər ədəd cütdürsə True, təkdirsə False çap olunsun.

	//int number;

	//cout << "Enter number:";

	//cin >> number;

	//cout << (number % 2 == 0);

	//ve ya

	//int number;

	//cout << "Enter number:";

	//cin >> number;

	//(number % 2 == 0) && cout << "True" || cout << "False";

	//-------------------------------------------------------------

	//2. İstifadəçi 1 - 20 arası ədəd daxil edir.Ədəd sadədirsə True,

	//	mürəkkəbdirsə False çap olunsun. (Sadə ədədlər yalnız özünə və 1 - ə bölünən ədədlərdir)

	/*int number;

	cout << "Enter number:";

	cin >> number;

	cout << (number % 2 != 0 && number % 3 != 0 && number % 5 != 0);*/

	//---------------------------------------------------------------------

	//3. İstifadəçi 5 rəqəmli ədəd daxil edir.Ədədin polindrom olub olmamasını təyin edin. 

	//(Polindrom - əksinə və düzünə eyni cür oxunur 12321 polindromdur, 12345 polindrom deyil)

	//int number;

	//cout << "Enter number:";

	//cin >> number;

	//int firstNumber = number / 10000;

	//int secondNumber = (number / 1000) % 10;

	//int thirdNumber = (number / 100) % 10;

	//int fourthNumber = (number / 10) % 10;

	//int lastNumber = (number % 10);

	//cout << (firstNumber == lastNumber && secondNumber == fourthNumber);

	// 

	// 

	//---------------------------------------------------------------------


	//4. İstifadəçi rəqəm daxil edir(1dən - 9 rəqəmliyə kimi ola bilər).

	//Onun neçə rəqəmdən ibarət olduğunu tapın.Sadece 1 dəyişənden istifadə edə bilərsiniz.

	//int number;

	//cout << "Enter number:";

	//cin >> number;

	//(number >= 1 and number <= 9) and cout << "1 reqemlidir\n";
	//(number >= 10 and number <= 99) and cout << "2 reqemlidir\n";
	//(number >= 100 and number <= 999) and cout << "3 reqemlidir\n";
	//(number >= 1000 and number <= 9999) and cout << "4 reqemlidir\n";
	//(number >= 10000 and number <= 99999) and cout << "5 reqemlidir\n";
	//(number >= 100000 and number <= 999999) and cout << "6 reqemlidir\n";
	//(number >= 1000000 and number <= 9999999) and cout << "7 reqemlidir\n";
	//(number >= 10000000 and number <= 99999999) and cout << "8 reqemlidir\n";
	//(number >= 100000000 and number <= 999999999) and cout << "9 reqemlidir\n";

	//---------------------------------------------------------------------


	/*5. İstifadəçi 3 ədəd daxil edir.Proqram, əgər birinci ədəd o birilərdən böyükdürsə
	‘1 - ci: True’, ikinci ədəd böyükdürsə ‘2 - ci : True’, üçüncü ədəd böyükdürsə
	‘3 - cu : True’  çap olunsun.*/

	//int num1, num2, num3;
	//cout << "Num1:";
	//cin >> num1;
	//cout << "Num2:";
	//cin >> num2;
	//cout << "Num3:";
	//cin >> num3;
	//(num1 > num2 && num1 > num3) && cout << "1-ci True";
	//(num2 > num1 && num2 > num3) && cout << "2-ci True";
	//(num3 > num1 && num3 > num2) && cout << "3-cu True";


	//---------------------------------------------------------------------

	/* 6. İstifadəçi 6 rəqəmli ədəd daxil edir.Tək yerdə duranların cəmi cüt yerdə duranların cəmindən çoxdursa,
	True, və ya False.Numune: (756189) Tək yerdə duranlar - 7, 6, 8 */// Cüt yerdə duranlar - 5,1,9
	//	
	//int number;
	//cout << "6 ededli eded daxil edin:";
	//cin >> number;

	//int firstNumber = number / 100000;

	//int secondNumber = (number / 10000) % 10;

	//int thirdNumber = (number / 1000) % 10;

	//int fourthNumber = (number / 100) % 10;

	//int fifthNumber = (number / 10) % 10;

	//int lastNumber = (number % 10);

	//int sumOfNumbersOdd = firstNumber + thirdNumber + fifthNumber;

	//int sumOfNumbersTwin = secondNumber + fourthNumber + lastNumber;

	//(sumOfNumbersOdd > sumOfNumbersTwin) && cout << "True";
	//(sumOfNumbersOdd < sumOfNumbersTwin) && cout << "False";

}
