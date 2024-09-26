#include<iostream>
using namespace std;
void main() {
	//Bubble sort algorithm
	const int size = 10;
	int arr[size]{};
	int min = 0, max = 100;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
	cout << "Massiv:    ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	//cout << "Sorted Massiv: ";
	//int temp = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size-1; k++)
	//	{
	//		if (arr[k]>arr[k+1])
	//		{
	//			temp = arr[k];
	//			arr[k] = arr[k + 1];
	//			arr[k + 1] = temp;
	//		}
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << "  ";
	//}



	//Selection sort

	//int arr[] = { 64,25,12,22,11 };
	//int temp,min_idx;
	//int size = sizeof(arr) / sizeof(arr[0]);
	//for (size_t i = 0; i < size; i++)
	//{
	//	min_idx = i;
	//	for (size_t j = i+1; j < size; j++)
	//	{
	//		if (arr[j]<arr[min_idx])
	//		{
	//			min_idx = j;
	//		}
	//	}
	//	if (min_idx!=i)
	//	{
	//		temp = arr[min_idx];
	//		arr[min_idx] = arr[i];
	//		arr[i] = temp;
	//	}
	//}


	//Linear Search

	//const int size = 10;
	//int arr[size]{};
	//int min = 0, max = 100;
	//for (size_t i = 0; i < size; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//}
	//cout << "Massiv:    ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << "  ";
	//}
	//cout << endl;

	//int search_number,counter=0;
	//cout << "Enter search number: ";
	//cin >> search_number;

	//for (size_t i = 0; i < size; i++)
	//{
	//	counter += 1;
	//	if (search_number==arr[i])
	//	{
	//		cout << "Found" << endl;
	//		break;
	//	}
	//}
	//cout << counter << endl;


	//Task
	//const int size = 10; 
	//int min = -10,max=10,random;
	//srand(time(NULL));
	//int arr[size]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:  ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//int minimum = arr[0];
	//int maximum = arr[0];
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i]>maximum)
	//	{
	//		maximum = arr[i];
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i]<minimum)
	//	{
	//		minimum = arr[i];
	//	}
	//}
	//cout << endl;
	//cout << "Arraydaki max element:" << maximum<<endl;
	//cout << "Arraydaki min element:" << minimum << endl;

	//Task
	//const int size = 26;
	//char arr[size]{};
	//int j = 0;
	//for (size_t i = 65; i < 91; i++)
	//{
	//	arr[j] = char(i);
	//	j++;
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i]<<" ";
	//}

	//Task

	//const int size = 6;
	//int arr[size]{ 5,6,7,8,9,10 };
	//int temp = 0;
	//cout << "Massiv:";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//
	//for (size_t i = 0; i <= size/2; i++)
	//{
	//	temp = arr[i];
	//	arr[i] = arr[size-i-1];
	//	arr[size-i-1] = temp;
	//}
	//cout << "Cevrilmis massiv: ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}



	//Task
	//const int size = 20; 
	//int min = 10,max=100,random;
	//srand(time(NULL));
	//int arr[size]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:  ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//int minimum = arr[0];
	//int minIndex, maxIndex;
	//int maximum = arr[0];
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i]>maximum)
	//	{
	//		maximum = arr[i];
	//		maxIndex = i;
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i]<minimum)
	//	{
	//		minimum = arr[i];
	//		minIndex = i;
	//	}
	//}
	//cout << endl;
	//cout << "Arraydaki max element:"<< maxIndex<< "." << maximum << endl;
	//cout << "Arraydaki min element:" << minIndex<<"."<< minimum << endl;


	//Task

	//const int size = 20;
	//int min = 2, max = 200, random;
	//srand(time(NULL));
	//double random_2;
	//int arr[size]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:  ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//int count = 0, bolen = 1;
	//cout << endl;
	//for (size_t i = 0; i < size; i++)
	//{
	//	count = 0;
	//	bolen = 1;
	//	while (arr[i]>=bolen)
	//	{
	//		if (arr[i]%bolen==0)
	//		{
	//			count++;
	//		}
	//		bolen++;
	//	}
	//	if (count==2)
	//	{
	//		cout << arr[i] << " ";
	//	}
	//}


	//Task

	//const int size = 10;
	//int min = 1, max = 50, random;
	//srand(time(NULL));
	//int arr[size]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:  ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//int temp;
	//for (size_t i = 0; i < size/2; i++)
	//{
	//	temp = arr[i];
	//	arr[i] = arr[size - 1 - i];
	//	arr[size - 1 - i] = temp;
	//}

	//cout << endl;
	//cout << "Massiv: ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}


	//Task

	//const int size = 10;
	//int min = 1, max = 50, random;
	//srand(time(NULL));
	//int arr[size]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:  ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//int temp;
	//for (size_t i = 0; i < size-1 ; i++)
	//{
	//	temp = arr[i*2];
	//	arr[i*2] = arr[i*2+1];
	//	arr[i*2+1] = temp;
	//}

	//cout << endl;
	//cout << "Massiv: ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}


	//Task

	//const int size = 5;
	//int aArr[size]{0,1,2,3,4};
	//int bArr[size]{5,6,7,8,9};
	//int cArr[size * 2]{};
	//int aindex = 0;
	//int bindex = 0;
	//for (size_t i = 0; i < size*2; i++)
	//{
	//	if (i%2==0)
	//	{
	//		cArr[i] = aArr[aindex];
	//		aindex++;
	//	}
	//	else {
	//		cArr[i] = bArr[bindex];
	//		bindex++;
	//	}
	//}
	//for (size_t i = 0; i < size*2; i++)
	//{
	//	cout << cArr[i] << " ";
	//}



	//Task

	//const int size = 10;
	//int arr[size]{ 0,2,3,4,5,-99,-22,-11,2,-33 };
	//int copyArr[size]{};
	//int index = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i] < 0)
	//	{
	//		copyArr[index] = arr[i];
	//		index++;
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i] == 0)
	//	{
	//		copyArr[index] = arr[i];
	//		index++;
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i] > 0)
	//	{
	//		copyArr[index] = arr[i];
	//		index++;
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << copyArr[i] << " ";
	//}


	//Task

	//const int size = 10;

	//int cArr[size]{1,2,3,0,4,5,6,7,8,9};
	//int aArr[size / 2]{};
	//int bArr[size / 2]{};
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (i%2==0)
	//	{
	//		aArr[i/2] = cArr[i];
	//	}
	//	else {
	//		bArr[i / 2] = cArr[i];
	//	}
	//}
	//cout << "A massivi:";
	//for (size_t i = 0; i < size/2; i++)
	//{
	//	cout << aArr[i] << " ";
	//}
	//cout << endl;
	//cout << "B massivi:";
	//for (size_t i = 0; i < size/2; i++)
	//{
	//	cout << bArr[i] << " ";
	//}


	//Task
	//const int size = 20; 
	//int min =1,max=200,random;
	//srand(time(NULL));
	//int arr[size]{};
	//int birreqemli = 0, ikireqemli = 0, ucreqemli = 0;
	//for (size_t i = 0; i < size; i++)
	//{
	//	random = min + rand() % (max - min + 1);
	//	arr[i] = random;
	//}
	//cout << "Massiv:  ";
	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	if (arr[i]>=0 && arr[i]<10)
	//	{
	//		birreqemli++;
	//	}
	//	else if (arr[i] >= 10 && arr[i] < 100) {
	//		ikireqemli++;
	//	}
	//	else if (arr[i] >= 100 && arr[i] < 1000) {
	//		ucreqemli++;
	//	}
	//}
	//cout << endl;
	//cout << (birreqemli * 100) / size << ":" << (ikireqemli * 100) / size << ":" << (ucreqemli * 100) / size;


	//Task
	//double nums[12] = { -20.4,20,12, 12.5, 10.1, 1, 2, 7.5, 8, 3, 9.75, 11 };

	//int count = 0;

	//for (int i = 0; i < 12; i++) {
	//	if (nums[i] == (int)nums[i]) {
	//		count++;
	//	}
	//}
	//cout << "Kesr hissesi olmayan ededlerin sayi: " << count <<endl;


}