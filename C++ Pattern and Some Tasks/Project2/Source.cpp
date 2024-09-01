#include<iostream>
using namespace std;
void main() {

	//Task1

	//12345   -   3      45123
	//int number,surusme,count=0;
	//cout << "Enter Num:";
	//cin >> number;
	//cout << "Enter surusme:";
	//cin >> surusme;
	//int copyNumber = number;
	//while (copyNumber>0)
	//{
	//	count++;
	//	copyNumber /= 10;
	//}
	//int onUstu = 1;
	//for (size_t i = 0; i < count-surusme; i++)
	//{
	//	onUstu *= 10;
	//}
	//int onUstu_2 = 1;
	//for (size_t i = 0; i < surusme; i++)
	//{
	//	onUstu_2 *= 10;
	//}
	//int leftNumber = number / onUstu;
	//int rightNumber = number % onUstu;

	//int total = (rightNumber * onUstu_2) + leftNumber;

	//cout << "Netice:" << total;



	//Task2
	//int start = 1, end = 100;
	//int bolen = 1, bolenSay = 0;
	//while (start <= end)
	//{
	//	bolen = 1;
	//	bolenSay = 0;
	//	while (start >= bolen)
	//	{
	//		if (start % bolen == 0) {
	//			bolenSay++;
	//		}
	//		bolen++;
	//	}
	//	if (bolenSay == 2) {
	//		cout << start << " sade ededdir" << endl;
	//	}
	//	start++;
	//}

	//Pattern2
	/*int size = 5;
	for (size_t i = 1; i <= size; i++)
	{
		for (size_t k = 1; k <= size; k++) {
			cout << i << " ";
		}
		cout << endl;
	}*/


	//Pattern 5
	//int size = 5;
	//for (size_t i = 1; i <= size; i++)
	//{
	//	for (size_t k = size; k >0; k--) {
	//		cout << k << " ";
	//	}
	//	cout << endl;
	//}


	//Pattern6

	//int size = 5;
	//int num = 1;
	//for (size_t i = 1; i < size; i++)
	//{
	//	for (size_t k = 1; k <= size; k++) {
	//		cout << num << " ";
	//		num++;
	//	}
	//	cout << endl;
	//}

	//Pattern9
	//int size = 5;
	//for (size_t i = 1; i <= size; i++)
	//{
	//	for (size_t k = 1; k <= size; k++) {
	//		cout << i*k << " ";
	//	}
	//	cout << endl;
	//}

	//Pattern 11
	//int size = 5;
	//int j;
	//for (size_t i = 1; i <= size; i++)
	//{
	//	j = 1;
	//	for (size_t k = 1; k <= size+1; k++) {
	//		if (k % 2 == 0)
	//		{
	//			cout <<j<<" ";
	//			j++;
	//			
	//		}
	//		else {
	//			cout << i << " ";
	//		}
	//	}
	//	cout << endl;
	//}


	//Pattern 14

	//int size = 5;
	//for (size_t i = 0; i <size; i++)
	//{
	//	for (size_t j = 0; j < size; j++)
	//	{
	//		cout <<(size-i)+j*size<<" ";
	//	}
	//	cout << endl;
	//}


	//Pattern 18
	// 
	//int size = 5;
	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < size; j++) {
	//		cout << (i + j) % 2 << " ";
	//	}
	//	cout << endl;
	//}


	//Pattern 26
	//int size = 5;
	//int k = 65;
	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < size; j++) {
	//		cout << char(k) << " ";
	//	}
	//	k++;
	//	cout << endl;
	//}

	//Pattern 24
	//int size = 5;
	//for (int i = 0; i <= size; i++) {
	//	for (int j = 0; j <= size; j++) {
	//		if (i>j)
	//		{
	//			cout << "* ";
	//		}
	//	}
	//	cout << endl;
	//}


	//Pattern 36
	//int size = 5;
	//for (int i = 1; i <= size; i++) {
	//	for (int j = 1; j <= size; j++) {
	//		if (i >= j)
	//		{
	//			cout <<j<<" ";
	//		}
	//	}
	//	cout << endl;
	//}


	//Pattern 47
	//int size = 5;
	//for (int i = 1; i <= size; i++) {
	//	for (int j = 1; j <= size; j++) {
	//		if (i >= j)
	//		{
	//			cout << j*i << " ";
	//		}
	//	}
	//	cout << endl;
	//}



	//Pattern 91
	//int size = 5;
	//int k = 70;
	//for (int i = 1; i <= size; i++) {
	//	k = 70-i;
	//	for (int j = 1; j <= size; j++) {
	//		if (i<=j)
	//		{
	//			cout << char(k) << " ";
	//			k--;
	//		}
	//	}
	//	cout << endl;
	//}


	//Pattern 163
	//int size = 5; 
	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < i; j++) {
	//		cout << " ";
	//	}
	//	for (int k = 0; k < size - i; k++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}


	//Pattern 117
	//int size = 5;
	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < i; j++) {
	//		cout <<"  ";
	//	}
	//	for (int k = 0; k < size - i; k++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	//Pattern 121

	/*int size = 5;
	int j = 1;
	for (size_t i = 1; i <= size; i++)
	{
		for (size_t k = 0; k < i; k++)
		{
			cout <<"  ";
		}
		j = i;
		for (size_t n = 0; n <= size-i; n++)
		{
			cout << j <<" ";
			j++;
		}
		cout << endl;
	}*/


	//Pattern 128
	//int size = 5;

	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < size - i - 1; j++) {
	//		cout << " "; 
	//	}
	//	for (int k = 0; k < i + 1; k++) {  
	//		cout << "* ";
	//	}
	//	cout << endl; 
	//}



	//Pattern 129

	//int size = 5;
	//int p = 1;

	//for (int i = 0; i < size; i++) {
	//	for (int j = 0; j < size - i - 1; j++) {
	//		cout <<" ";
	//	}
	//	for (int k = 0; k < i + 1; k++) {  
	//		cout <<p<<" ";
	//	}
	//	p++;
	//	cout << endl; 
	//}



	//Pattern 133

	//int size = 5;

	//for (int i = size; i > 0; i--) {
	//	for (int j = 0; j < size - i; j++) {
	//		cout << " "; 
	//	}
	//	for (int k = 0; k < i; k++) { 
	//		cout << "* ";
	//	}
	//	cout << endl; 
	//}


	//Pattern 136
	//int size = 5;
	//int a = 69;

	//for (int i = size; i > 0; i--) {
	//	for (int j = 0; j < size - i; j++) {
	//		cout << " ";
	//	}
	//	for (int k = 0; k < i; k++) {
	//		cout << char(a) << " ";
	//	}
	//	a--;
	//	cout << endl;
	//}


	//Pattern 163

	////int size = 9;
	////for (int i = size; i > 0; i--) {
	////	for (int j = 0; j < size - i; j++) {
	////		cout << "  ";
	////	}
	////	for (int k = 0; k < i*2-1; k++) {
	////		cout << "* ";
	////	}
	////	cout << endl;
	////}


	//Pattern 164
	//int size = 5;

	//for (int i = size; i > 0; i--) {
	//	for (int j = 0; j < size - i; j++) {
	//		cout << "  "; 
	//	}
	//	for (int k = 0; k < i*2-1; k++) { 
	//		cout <<i<<" ";
	//	}
	//	cout << endl; 
	//}

	//Pattern 171
	/*int size = 5;
	int n = 3;

	for (size_t i = size; i > 0; i--)
	{
		for (size_t j = 0; j <i*2-1; j++)
		{
			cout << j <<" ";
		}
		cout << endl;
	}*/


	//Pattern 180

	//int size = 4; 
	//for (int i = 1; i <= size; i++) {

	//	for (int j = size; j > i; j--) {
	//		cout <<"  "; 
	//	}
	//	for (int k = 1; k <= i; k++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}
	//for (int i = size - 1; i >= 1; i--) {
	//	for (int j = size; j > i; j--) {
	//		cout << "  ";
	//	}
	//	for (int k = 1; k <= i; k++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}

	//Pattern 171
	//int rows = 5; 

	//for (int i = 0; i < rows; i++) {
	//	if (i == 1) {
	//		
	//		for (int j = 3; j >= 0; j--) {
	//			cout << j << " ";
	//		}
	//	}
	//	else {
	//		
	//		for (int j = 3; j >= i; j--) {
	//			cout << j << " ";
	//		}
	//	}
	//	cout << endl; 
	//}

	//Pattern 185

	//char startChar = 'D'; 
	//int size = 4; 

	//for (int i = 0; i < size; i++) {
	//	for (int j = size - 1; j > i; j--) {
	//		cout << "  "; 
	//	}
	//	for (char ch = startChar - i; ch <= startChar; ch++) {
	//		cout << ch << " "; 
	//	}
	//	cout << endl;
	//}

	//for (int i = size - 2; i >= 0; i--) {
	//	for (int j = size - 1; j > i; j--) {
	//		cout << "  "; 
	//	}
	//	for (char ch = startChar - i; ch <= startChar; ch++) {
	//		cout << ch << " ";
	//	}
	//	cout << endl;
	//}

	//Pattern 207
	//int size = 5;
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t j = 0; j < size; j++)
	//	{
	//		if (i >= j) {
	//			cout << "1 ";
	//		}
	//		else {
	//			cout << "0 ";
	//		}
	//	}
	//	cout << endl;
	//}


	//Pattern 208

	//int size = 5;
	//for (size_t i = 1; i < size; i++)
	//{
	//	for (size_t j = 1; j <= size; j++)
	//	{
	//		if (i == j) {
	//			cout <<i<<" ";
	//		}
	//		else {
	//			cout << "0 ";
	//		}
	//	}
	//	cout << endl;
	//}


	//Pattern 218

	//int size = 5;
	//for (size_t i = size; i>0; i--)
	//{
	//	for (size_t j = 1; j <= size; j++)
	//	{
	//		if (i >= j) {
	//			cout << j << " ";
	//		}
	//		else {
	//			cout << "* ";
	//		}
	//	}
	//	cout << endl;
	//}

}






