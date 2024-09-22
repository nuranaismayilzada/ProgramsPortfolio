#include<iostream>
using namespace std;

int& My_Strlen(char*& text) {
	int size = 0;
	for (size_t i = 0; text[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}

void My_Str_Copy(char*& new_text, int& length, char*& text) {
	for (size_t i = 0; i < length+1; i++)
	{
		new_text[i] = text[i];
	}
}

//--------------------------------------------------------------------------------------------------------------
//1. void mystrcat(char&* str1, const char* str2); - funksiya str2 - ni str1 - ə birləşdirir(konkatonatisya).

void My_Str_Cat(char*& str1, int& length, const char* str2) {
	int length1 = 0;
	for (size_t i = 0; str1[i] != '\0'; i++)
	{
		length1++;
	}
	int length2 = 0;
	for (size_t i = 0; str2[i] != '\0'; i++)
	{
		length2++;
	}
	int Length = length1 + length2;
	int j = 0;
	for (size_t i = length1; i < Length; i++)
	{
		str1[i] = str2[j];
		j++;
	}
	str1[Length] = '\0';
}
//2. char* mystrchr(char* str, char s); - funksiya s simvolunu str sətrində axtarır əgər taparsa həmin
//hərfə pointer qaytarır, tapmazsa 0.

char* My_Str_Chr(char* str, char s) {
	int Length = 0;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		Length++;
	}
	for (size_t i = 0; i < Length; i++)
	{
		if (str[i] == s)
		{
			return  &str[i];
		}
	}
	return nullptr;
}

//3. char* mystrstr(char* str1, char* str2); -funksiya str1 sətrinin içində str2 sətrini axtarır.Tapdığı halda ilk
//hərfə pointer qaytarır, tapmazsa 0.

char* My_Str_Str(char* str1, char* str2) {
	int size = 0;
	for (size_t i = 0; str2[i] != '\0'; i++)
	{
		size++;
	}
	for (size_t i = 0; str1[i] != '\0'; i++)
	{
		int j = 0;
		for (j = 0; j < size; j++)
		{
			if (str1[i + j] == '\0' || str1[i + j] != str2[j]) {
				break;
			}
		}
		cout << j << endl;
		if (j == size && str2[j] == '\0')
		{
			return &str1[i];
		}
	}
	return nullptr;

}
//2-ci usul
//void My_Str_Str(char*& str1, char*& str2) {
//	bool counter = false;
//	int k;
//	for (size_t i = 0; str1[i]!='\0'; i++)
//	{
//		if (str1[i] == str2[0]) {
//			counter = true;
//			k = i;
//			break;
//		}
//	}
//	if (counter) {
//		for (size_t i = k; str1[i] != '\0'; i++)
//		{
//			cout << str1[i];
//		}
//	}
//	else {
//		cout << 0;
//	}
//}
//-------------------------------------------------------------------------------------------------------------------------

//4. int mystrcmp(const char* str1, const char* str2); - funksiya iki sətri müqayisə edir, əgər sətirlər
//bərabərdirsə 0, birinci sətir ikinci sətirdən böyükdürsə 1, kiçikdirsə - 1 qayıdır.

int My_Str_Cmp(const char* str1, const char* str2) {
	for (size_t i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
		if (str1[i] != str2[i]) {
			if (str1[i] > str2[i]) {
				return 1;
			}
			else {
				return -1;
			}
		}
	}
	return 0;
}

//5. int mystrtonum(char* str); -funksiya sətiri rəqəmə çevirir və həmin rəqəmi qatarır.

int My_Str_To_Num(char* str) {
	int size = 0;
	int number = 1;
	bool check = true;
	int oldNumber = 1;
	int sum = 0;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	int copysize = size;
	for (int i = 0; i < size; i++)
	{
		if (int(str[i]) > 47 && int(str[i]) < 58)
		{

			number = (int(str[i])) - 48;
			oldNumber = number;
			for (size_t j = 1; j < copysize; j++)
			{
				oldNumber = oldNumber * 10;
			}
			copysize--;
			sum = sum + oldNumber;
		}
		else {
			check = false;
		}
	}
	if (check == false)
	{
		return -1;
	}
	else {
		return sum;
	}
}


//6. char* mynumtostr(int number); - funksiya rəqəmi sətirə çevirir və sətirə pointer qaytarır.

char* My_Num_To_Str(int number) {
	int copyNumber = number;
	int reverseNumber = 0;
	int size = 0;
	while (copyNumber>0)
	{
		int lastDigit = copyNumber % 10;
		copyNumber=copyNumber/10;
		reverseNumber = reverseNumber * 10 + lastDigit;
		size++;
	}
	char* str = new char[size] {};
	for (size_t i = 0; i < size; i++)
	{
		int lastDigit1 = reverseNumber % 10;
		str[i] = char(lastDigit1+48);
		reverseNumber /= 10;
	}
	str[size] = '\0';
	return str;

}

//7. void mystrup(char* str1); -funksiya sətirdəki bütün hərfləri böyük hərf edir.

void My_Str_Up(char* str) {
	int size = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	char* upStr = new char[size + 1] {};
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		if ((int(str[i])) > 64 && (int(str[i])) < 91)
		{
			upStr[j] = str[i];
			j++;
		}
		else if ((int(str[i])) > 96 && (int(str[i])) < 123) {
			upStr[j] = char((int(str[i]) - 32));
			j++;
		}
		else {
			upStr[j] = str[i];
			j++;
		}
	}
	cout << upStr;
}


//8. void mystrlow(char* str1) - funksiya sətirdəki bütün hərfləri kiçik hərf edir.

void My_Str_Low(char* str) {
	int size = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	char* upStr = new char[size + 1] {};
	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		if ((int(str[i])) > 96 && (int(str[i])) < 123)
		{
			upStr[j] = str[i];
			j++;
		}
		else if ((int(str[i])) > 64 && (int(str[i])) < 91) {
			upStr[j] = char((int(str[i]) + 32));
			j++;
		}
		else {
			upStr[j] = str[i];
			j++;
		}
	}
	cout << upStr;
}



//9. char* mystrrev(char* str); - funksiya verilən sətri əksinə çevirir. (Salam-- - malaS)

char* My_Str_Rev(char* str) {
	int size = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	char* revstr = new char[size + 1];
	int j = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		revstr[j] = str[i];
		j++;
	}
	revstr[size] = '\0';
	return revstr;
}



void main() {
	//1. void mystrcat(char&* str1, const char* str2); - funksiya str2 - ni str1 - ə birləşdirir(konkatonatisya).

		//int totalSize = 30;
		//char* text = new char[totalSize] {};
		//int length1 = My_Strlen(text);
		//cout << "Enter text1: ";
		//cin.getline(text, totalSize);
		//char* text2 = new char[totalSize] {};
		//int length2 = My_Strlen(text2);
		//cout << "Enter text2: ";
		//cin.getline(text2, totalSize);
		//int Length = length1 + length2;
		//My_Str_Cat(text, Length, text2);
		//cout << text;
		//cout << endl;
		//int total = My_Strlen(text);
		//cout << "Total text size:" << total;
		//delete[]text;
		//delete[]text2;


	//-------------------------------------------------------------------------------------------------------------

	//2. char* mystrchr(char* str, char s); -funksiya s simvolunu str sətrində axtarır əgər taparsa həmin
	//hərfə pointer qaytarır, tapmazsa 0.

	//char* text = new char[7] {"nurane"};  
	//char* result = My_Str_Chr(text, 'r'); 
	//cout << result;
	//cout << endl;  
	//delete[]text;

	//-------------------------------------------------------------------------------------------------------------------

	//3. char* mystrstr(char* str1, char* str2); -funksiya str1 sətrinin içində str2 sətrini axtarır.Tapdığı halda ilk
	//hərfə pointer qaytarır, tapmazsa 0.

	//char text1[] = {"nurane"};
	//char text2[] = {"ura"};
	//char* result = My_Str_Str(text1,text2);
	//cout << result;
	//cout << endl;
	//delete[]text1;
	//delete[]text2;

	//2ci usul
	//char* str1 = new char[20] {};
	//cout << "Enter str1: ";
	//cin.getline(str1, 20);
	//char* str2 = new char[20] {};
	//cout << "Enter str2: ";
	//cin.getline(str2, 20);
	//My_Str_Str(str1, str2);
	//delete[] str1;
	//delete[] str2;

	//------------------------------------------------------------------------------------------------------------------

	//4. int mystrcmp(const char* str1, const char* str2); - funksiya iki sətri müqayisə edir, əgər sətirlər
	//bərabərdirsə 0, birinci sətir ikinci sətirdən böyükdürsə 1, kiçikdirsə - 1 qayıdır.

	//const char* str1 = "salam";
	//const char* str2 = "salams";
	//int res=My_Str_Cmp(str1, str2);
	//cout << res << endl;

	//------------------------------------------------------------------------------------------------------------------

	//5. int mystrtonum(char* str); -funksiya sətiri rəqəmə çevirir və həmin rəqəmi qatarır.

	//char str[] = "12343";
	//cout<<My_Str_To_Num(str);

	//------------------------------------------------------------------------------------------------------------------

	//6. char* mynumtostr(int number); - funksiya rəqəmi sətirə çevirir və sətirə pointer qaytarır.

	//int number = 1212345;
	//cout<<My_Num_To_Str(number);

	//------------------------------------------------------------------------------------------------------------------


	//7. void mystrup(char* str1); -funksiya sətirdəki bütün hərfləri böyük hərf edir.

	//char str[] = "Nurana How are you? 22 Nunuu";
	//My_Str_Up(str);

	//------------------------------------------------------------------------------------------------------------------

	//8. void mystrlow(char* str1) - funksiya sətirdəki bütün hərfləri kiçik hərf edir.

	//char str[] = "Nurana How are you? 22 Nunuu NURANA";
	//My_Str_Low(str);

	//------------------------------------------------------------------------------------------------------------------

	//9. char* mystrrev(char* str); -funksiya verilən sətri əksinə çevirir. (Salam-- - malaS)

	//char* str = new char[20] {"nurana"};
	//char* reversedStr = My_Str_Rev(str);
	//cout<< reversedStr <<endl;
	//delete[] reversedStr;

	//------------------------------------------------------------------------------------------------------------------



}