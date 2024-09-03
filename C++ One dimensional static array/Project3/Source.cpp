#include<iostream>
using namespace std;
void main() {
	//1. Ölçüsü 10 olan massiv yaradın və içərsini random rəqəmlərlə
	//doldurun.İndeksi cüt olan ədədlərin cəmini, indeksi tək olan
	//ədədlərin isə ədədi ortasını tapın.

	//srand(time(NULL));
	//const int size = 10;
	//int min = 10;
	//int max = 40;
	//float sumNumberEvenİndex = 0;
	//float sumNumberOddİndex = 0;
	//int count=0;
	//int arr[size]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	int random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (i % 2 == 0) {
	//		sumNumberEvenİndex += arr[i];
	//	}
	//	else {
	//		sumNumberOddİndex += arr[i];
	//		count++;
	//	}
	//}
	//cout << endl;
	//cout << "Indeksi cut olan ededlerin cemi:" << sumNumberEvenİndex<<endl;
	//cout << "Indeksi tek olan ededlerin ededi ortasi:" << sumNumberOddİndex / count;


//---------------------------------------------------------------------------------------------------------

	//2. 10 simvoldan ibarət char massivi yaradın(random doldurun - nəzərə
	//	alın ki char 0 - dan 255 - ə qədərdir).Neçə hərf, rəqəm və punktuasiya
	//	simvolu olduğunu hesablayan program yazın.

	//srand(time(NULL));
	//system("color 50");
	//const int size = 10;
	//char arr[size]{};
	//int min = 1;
	//int max = 255;
	//int letterCount = 0;
	//int numberCount = 0;
	//int punctationCount = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	char random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//for (size_t i = 0; i < size; i++)
	//{
	//	if ((int(arr[i]) > 63 && int(arr[i]) <91) || (int(arr[i]) > 96 && int(arr[i]) < 123))
	//	{
	//		letterCount++;
	//	}
	//	else if (int(arr[i]) > 47 && int(arr[i]) <58) {
	//		numberCount++;
	//	}
	//	else {
	//		punctationCount++;
	//	}
	//}
	//cout << "Herif sayi: " << letterCount;
	//cout << endl;
	//cout << "Reqem sayi: " << numberCount;
	//cout << endl;
	//cout << "Punktasiya sayi: " << punctationCount;

//---------------------------------------------------------------------------------------------------------
	/*3. Ölçüsü 50 olan massiv yaradın və içərisini random doldurun(1 - 100) .
		İstifadəçi 1 - 100 arasında rəqəm daxil edir, və massivdə bu əddədən
		neçə dənə olduğunu hesablayan program yazın.*/

		//const int size = 50;
		//int min = 1, max = 100;
		//srand(time(NULL));
		//int arr[size]{};
		//for (size_t i = 0; i < size; i++)
		//{
		//	int random = min + rand() % (max - min + 1);
		//	arr[i] = random;
		//}
		//cout << "Massiv:";
		//for (size_t i = 0; i < size; i++)
		//{
		//	cout << arr[i] <<" ";
		//}
		//cout << endl;
		//int number,Count=0;
		//cout << "Eded daxil edin:";
		//cin >> number;
		//for (size_t i = 0; i < size; i++)
		//{
		//	if (arr[i] == number) {
		//		Count++;
		//	}
		//}
		//cout << endl;
		//cout << "Daxil etdiyiniz ededden massivde " << Count << " eded var. ";

//---------------------------------------------------------------------------------------------------------
	/*4. 1 və 100 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv
		yaradın. 3 - ə, 5 - ə.7 - ə bölünən rəqəmlərin sayını tapın. (ayrı - ayrı)*/

		//srand(time(NULL));
		//const int size = 10;
		//int min = 1, max = 100;
		//int arr[size]{};
		//int numberDivisibleByThree = 0;
		//int numberDivisibleByFive = 0;
		//int numberDivisibleBySeven = 0;
		//int random;
		//for (size_t i = 0; i < size; i++)
		//{
		//	random = min + rand() % (max - min + 1);
		//	arr[i] = random;
		//}
		//cout << "Massiv:";
		//for (size_t i = 0; i < size; i++)
		//{
		//	cout << arr[i] << " ";
		//}
		//for (size_t i = 0; i < size; i++)
		//{
		//	if (arr[i] % 3 == 0) {
		//		numberDivisibleByThree += 1;
		//	}
		//	if (arr[i] % 5 == 0) {
		//		numberDivisibleByFive += 1;
		//	}
		//	if (arr[i] % 7 == 0) {
		//		numberDivisibleBySeven += 1;
		//	}
		//}
		//cout << endl;
		//cout << "Massivde 3-e bolunen ededlerin sayi:" << numberDivisibleByThree<<endl;
		//cout << "Massivde 5-e bolunen ededlerin sayi:" << numberDivisibleByFive << endl;
		//cout << "Massivde 7-e bolunen ededlerin sayi:" << numberDivisibleBySeven << endl;

//---------------------------------------------------------------------------------------------------------
	//5. 1 və 100 arasında random rəqəmlərdən ibarət ölçüsü 10 olan massiv
	//	yaradın. 3 - ə bölünüb 5 - ə bölünməyən rəqəmlərin sayını çıxarın. (eyni
	// anda həm 3ə bölünsün həm 5 - ə bölünməsin)


	/*srand(time(NULL));
	const int size = 10;
	int min = 1, max = 100;
	int arr[size]{};
	int numberDivisibleByThreeAndDontDivisibleFive = 0;
	int random;
	for (size_t i = 0; i < size; i++)
	{
		random = min + rand() % (max - min + 1);
		arr[i] = random;
	}
	cout << "Massiv:";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] % 3 == 0 && arr[i] % 5 != 0) {
			numberDivisibleByThreeAndDontDivisibleFive += 1;
		}
	}
	cout << endl;
	cout << "Massivde eyni anda 3-e bolunub,5-e bolunmeyen ededlerin sayi:" << numberDivisibleByThreeAndDontDivisibleFive;*/

//---------------------------------------------------------------------------------------------------------
				//6. - 10 və 30 arasında random rəqəmlərdən ibarət ölçüsü 10 olan
				//	massiv yaradın.Birinci mənfi ədəddən sonra gələn bütün rəqəmləri
				//	toplayan program yazın. (1, 2, -3, 4, 5, -6, 7 bu halda, 4 + 5 + (-6) + 7
				//		olacaq)

			//srand(time(NULL));
			//const int size = 10;
			//int arr[size]{};
			//int min = -10, max = 30;
			//int random, sum = 0;
			//bool isCheck = false;
			//for (size_t i = 0; i < size; i++)
			//{
			//	random = min + rand() % (max - min + 1);
			//	arr[i] = random;
			//}
			//cout << "Massiv:";
			//for (size_t i = 0; i < size; i++)
			//{
			//	cout << arr[i] << " ";
			//}
			//for (size_t i = 0; i < size; i++)
			//{
			//	if (arr[i] < 0 && isCheck==false) {
			//		isCheck = true;
			//		continue;
			//	}
			//	if (isCheck)
			//	{
			//		sum += arr[i];
			//	}
			//}
			//cout << endl;
			//cout << "Sum:" << sum;

//---------------------------------------------------------------------------------------------------------
	//7. - 30 və 20 arasında random rəqəmlərdən ibarət ölçüsü 10 olan
	//massiv yaradın.Birinci müsbət ədəddən sonra gələn bütün rəqəmləri
	//toplayan program yazın.


	//srand(time(NULL));
	//const int size = 10;
	//int arr[size]{};
	//int min = -30, max = 20;
	//int random, sum = 0;
	//bool isCheck = false;
	//for (size_t i = 0; i < size; i++)
	//{
	//	random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i]>0 && isCheck==false)
	//	{
	//		isCheck = true;
	//		continue;
	//	}
	//	if (isCheck)
	//	{
	//		sum += arr[i];
	//	}
	//}
	//cout << sum;
//---------------------------------------------------------------------------------------------------------
}