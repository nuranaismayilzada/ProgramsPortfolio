#include<iostream>
#include<iomanip>
using namespace std;
void main() {
	//1. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə
	//	doldurun.Massivdəki ədədlərin cəmini tapın.
	//srand(time(NULL));
	//int min = 0, max = 20;
	//const int size = 5;
	//int arr[size][size]{};
	//int sum = 0, random;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		random = min + rand() % (max - min + 1);
	//		arr[i][k] = random;
	//		sum += arr[i][k];
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		cout << setw(4) << arr[i][k];
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Massivdeki ededlerin cemi:" << sum;


//----------------------------------------------------------------------------------------------------------------
	//2. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə
	//	doldurun.Əsas və əks dioqanalda yerləşən rəqəmlərin cəmini
	//	hesablayan program yazın.

	//srand(time(NULL));
	//int min = 0, max = 20;
	//const int size = 5;
	//int arr[size][size]{};
	//int sum = 0, random;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		random = min + rand() % (max - min + 1);
	//		arr[i][k] = random;
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		if (i == k || i + k == size - 1)
	//		{
	//			sum += arr[i][k];
	//		}
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		cout << setw(4) << arr[i][k];
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Massivdeki esas ve eks dioqanaldaki ededlerin cemi:" << sum;


//----------------------------------------------------------------------------------------------------------------
	//3. 5x5 ölçüsündə ikiölçülü massivi(-100) və(100) aralığında random
	//	ədədlərlə doldurun.Massivdəki minimal və maksimal elementləri
	//	tapan program yazın.

	//srand(time(NULL));
	//int min = -100, max = 100;
	//const int size = 5;
	//int arr[size][size]{};
	//int random;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		random = min + rand() % (max - min + 1);
	//		arr[i][k] = random;
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		cout << setw(4) << arr[i][k];
	//	}
	//	cout << endl;
	//}
	//cout << endl;

	//int minNumber = arr[0][0];
	//int maxNumber = arr[0][0];

	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		if (arr[i][k]>maxNumber)
	//		{
	//			maxNumber = arr[i][k];
	//		}
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		if (arr[i][k] < minNumber)
	//		{
	//			minNumber = arr[i][k];
	//		}
	//	}
	//}

	//cout << endl;
	//cout << "Massivdeki maximal eded: " << maxNumber<<endl;
	//cout << "Massivdeki minimal eded: " << minNumber << endl;

//----------------------------------------------------------------------------------------------------------------
	//4. 5x5 ölçüsündə ikiölçülü massivi - 5 və 5 aralığında random ədədlərlə
	//doldurun.Massivdəki mənfi, müsbət, və sıfır olan elementlərin sayını
	//tapın.

	//srand(time(NULL));
	//int min = -5, max = 5;
	//const int size = 5;
	//int minusNumbersCount = 0, pilusNumbersCount = 0, zeroNumbersCount = 0;
	//int arr[size][size]{};
	//int random;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		random = min + rand() % (max - min + 1);
	//		arr[i][k] = random;
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		cout<< setw(3)<<arr[i][k];
	//	}
	//	cout << endl;
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		if (arr[i][k]>0)
	//		{
	//			pilusNumbersCount++;
	//		}
	//		else if (arr[i][k] < 0) {
	//			minusNumbersCount++;
	//		}
	//		else {
	//			zeroNumbersCount++;
	//		}
	//	}
	//}
	//cout << endl;
	//cout << "Massivdeki menfi ededlerin sayi:" << minusNumbersCount << endl;
	//cout << "Massivdeki musbet ededlerin sayi:" << pilusNumbersCount << endl;
	//cout << "Massivdeki sifirlarin sayi:" << zeroNumbersCount;


//----------------------------------------------------------------------------------------------------------------
	//5. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə
	//doldurun.Hər bir sətirdəki elementlərin cəmini tapın.


	//srand(time(NULL));
	//int min = 0, max = 20;
	//const int size = 5;
	//int arr[size][size]{};
	//int random;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		random = min + rand() % (max - min + 1);
	//		arr[i][k] = random;
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		cout << setw(5) << arr[i][k];
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//int sum = 0;
	//int sumofNumbersArr[size][1]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	sum = 0;
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		sum += arr[i][k];
	//	}
	//	sumofNumbersArr[i][0] = sum;
	//	cout << i << "-ci setirdeki elementlerin cemi:" << sum << endl;
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Cemden alinan massiv:" << endl;

	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < 1; k++)
	//	{
	//		cout << setw(10) << sumofNumbersArr[i][k] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;

//----------------------------------------------------------------------------------------------------------------

		//6. 5x5 ölçüsündə ikiölçülü massivi 0 - 20 aralığında random ədədlərlə
		//doldurun.Hər bir sütundakı elementlərin cəmini tapın.

		//srand(time(NULL));
		//int min = 0, max = 20;
		//const int size = 5;
		//int arr[size][size]{};
		//int random;
		//for (size_t i = 0; i < size; i++)
		//{
		//	for (size_t k = 0; k < size; k++)
		//	{
		//		random = min + rand() % (max - min + 1);
		//		arr[i][k] = random;
		//	}
		//}

		//for (size_t i = 0; i < size; i++)
		//{
		//	for (size_t k = 0; k < size; k++)
		//	{
		//		cout << setw(3) << arr[i][k];
		//	}
		//	cout << endl;
		//}
		//cout << endl;
		//int sum = 0;
		//int sumofNumbersArr[size]{};
		//for (size_t i = 0; i < size; i++)
		//{
		//	sum = 0;
		//	for (size_t k = 0; k < size; k++)
		//	{
		//		sum += arr[k][i];
		//	}
		//	sumofNumbersArr[i] = sum;
		//	cout << i << "-ci setirdeki elementlerin cemi:" << sum << endl;
		//	cout << endl;
		//}
		//cout << endl;
		//cout << "Cemden alinan massiv:" << endl;
		//for (size_t i = 0; i < size; i++)
		//{
		//	cout << sumofNumbersArr[i] << " ";
		//}
		//cout << endl;


//----------------------------------------------------------------------------------------------------------------

	//7. 5x5 ölçüsündə ikiölçülü massivi - 10 və 40 aralığında random
	//ədədlərlə doldurun.Bütün sətirdə mənfi ədəd yoxdursa, bu sətirin
	//cəmini toplayın.


	//srand(time(NULL));
	//int min = -10, max = 40;
	//const int size = 5;
	//int arr[size][size]{};
	//int random;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		random = min + rand() % (max - min + 1);
	//		arr[i][k] = random;
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		cout << setw(3) << arr[i][k];
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//int sum = 0;
	//int sum_2 = 0;
	//int newSumArr[size]{};
	//bool isCheck = false;
	//for (size_t i = 0; i < size; i++)
	//{
	//	sum = 0;
	//	isCheck = false;
	//	for (size_t k = 0; k < size; k++)
	//	{
	//		if (arr[k][i] > 0)
	//		{
	//			continue;
	//		}
	//		else {
	//			isCheck = true;
	//		}
	//	}
	//	for (size_t j = 0; j < size; j++)
	//	{
	//		if (isCheck == false)
	//		{
	//			sum += arr[j][i];
	//		}
	//	}
	//	if (isCheck == false)
	//	{
	//		newSumArr[i] = sum;
	//		cout << i << "-ci setirde menfi eded yoxdur ve cemi " << sum << " -a beraberdir." << endl;
	//	}
	//}
	//cout << "[";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout<< newSumArr[i] << ",";
	//}
	//cout << "]";

//--------------------------------------------------------------------------------------------------------------------
	//8. N x M ölçülü massivi elə ikirəqəmli ədədlərlə doldurun ki, birinci
	//rəqəm sətirin, ikinci rəqəm sütun nömrəsini göstərsin.

	//const int sizen = 7;
	//const int sizem = 9;
	//int arr[sizen][sizem]{};

	//for (size_t i = 0; i < sizen; i++)
	//{
	//	for (size_t k = 0; k < sizem; k++)
	//	{
	//		arr[i][k] = (i * 10 + k);
	//	}
	//}
	//for (size_t i = 0; i < sizen; i++)
	//{
	//	for (size_t k = 0; k < sizem; k++)
	//	{
	//		if (arr[i][k] < 10)
	//		{
	//			cout << "0" << arr[i][k] << "  ";
	//		}
	//		else {
	//			cout << arr[i][k] << "  ";
	//		}
	//	}
	//	cout << endl;
	//}

//--------------------------------------------------------------------------------------------------------------------


			//9. N xM ölçülü massivdə, birinci və sonuncu sütunun, ikinci və sondan
			//əvvəlki sütunun və s.yerini dəyişin.

			//srand(time(NULL));
			//int min = 10, max = 99;
			//const int sizem = 4;
			//const int sizen = 6;
			//int arr[sizem][sizen]{};
			//int random, temp;
			//cout << "   Massiv  " << endl<<endl;
			//for (size_t i = 0; i < sizem; i++)
			//{
			//	for (size_t k = 0; k < sizen; k++)
			//	{
			//		random = min + rand() % (max - min + 1);
			//		arr[i][k] = random;
			//	}
			//}

			//for (size_t i = 0; i < sizem; i++)
			//{
			//	for (size_t k = 0; k < sizen; k++)
			//	{
			//		cout << setw(3) << arr[i][k];
			//	}
			//	cout << endl;
			//}
			//cout << endl;

			//for (size_t i = 0; i < sizem; i++)
			//{
			//	for (size_t k = 0; k < sizen/2; k++)
			//	{
			//		temp = arr[i][k];
			//		arr[i][k] = arr[i][sizen -1- k];
			//		arr[i][sizen -k-1] = temp;
			//	}
			//}
			//cout << endl;
			//cout << " Cevrilmis massiv   "<<endl;
			//cout << endl;
			//for (size_t i = 0; i < sizem; i++)
			//{
			//	for (size_t k = 0; k < sizen; k++)
			//	{
			//		cout << setw(3) << arr[i][k];
			//	}
			//	cout << endl;
			//}

//----------------------------------------------------------------------------------------------------------------

						//10. 6 x 6 ölçülü massivdə, qonşu sətirlərin yerini dəyişin.

						//srand(time(NULL));
						//int min = 1, max = 100;
						//const int size = 6;
						//int arr[size][size]{};
						//int random;
						//for (size_t i = 0; i < size; i++)
						//{
						//	for (size_t k = 0; k < size; k++)
						//	{
						//		random = min + rand() % (max - min + 1);
						//		arr[i][k] = random;
						//	}
						//}

						//cout << "Massiv:" << endl;
						//for (size_t i = 0; i < size; i++)
						//{
						//	for (size_t k = 0; k < size; k++)
						//	{
						//		cout << setw(3) << arr[i][k];
						//	}
						//	cout << endl;
						//}
						//cout << endl;
						//cout << "Qonsu setirlerin yeri deyisilmis massiv:" << endl;
						//int temp;
						//for (size_t i = 0; i < size; i++)
						//{
						//	for (size_t k = 0; k < size; k++)
						//	{
						//		temp = arr[i * 2][k];
						//		arr[i * 2][k] = arr[i * 2 + 1][k];
						//		arr[i * 2 + 1][k] = temp;
						//	}
						//}
						//for (size_t i = 0; i < size; i++)
						//{
						//	for (size_t k = 0; k < size; k++)
						//	{
						//		cout << setw(3) << arr[i][k];
						//	}
						//	cout << endl;
						//}

//----------------------------------------------------------------------------------------------------------------
}