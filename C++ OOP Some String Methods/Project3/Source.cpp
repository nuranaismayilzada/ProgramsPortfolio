#include<iostream>
using namespace std;
class String {
	char* array = nullptr;
	size_t size = 0;
	size_t capacity = 10;
public:
	String() {
		this->array = new char[capacity] {};
	}
	String(char* array) :String() {
		this->array = array;
	}
	//My strlen function
	int MyStrlen(char* array) {
		int len = 0;
		for (size_t i = 0; array[i] != '\0'; i++)
		{
			len++;
		}
		return len;
	}
	//check size capacity
	void Check_Size_Capacity(int length) {
		while (this->capacity <= length)
		{
			capacity += 10;
		}
		char* new_array = new char[capacity] {};
		int strLen = 0;
		for (size_t i = 0; array[i] != '\0'; i++)
		{
			strLen++;
		}
		for (size_t i = 0; i < strLen; i++)
		{
			new_array[i] = array[i];
		}
		delete[]array;
		array = new_array;
	}
	//set methods
	void Set_Array(char* new_array) {
		int size1 = MyStrlen(new_array);
		Check_Size_Capacity(size1);
		for (size_t i = 0; new_array[i] != '\0'; i++)
		{
			array[i] = new_array[i];
		}
	}
	//get Methods
	char* get_Array() const {
		return array;
	}
	size_t GetSize()const {
		return size;
	}
	size_t GetCapacity() const {
		return capacity;
	}
	friend ostream& operator<<(ostream& out, const String& obj) {
		out << obj.array << endl;
		return out;
	}
	//Upper method
	void Upper_String() {
		for (size_t i = 0; array[i] != '\0'; i++)
		{
			if (int(array[i]) >= 97 && int(array[i] <= 122)) {
				array[i] = array[i] - 32;
			}
		}
	}

	//Lower method
	void String_Lower() {
		for (size_t i = 0; array[i] != '\0'; i++)
		{
			if (int(array[i]) >= 64 && int(array[i] <= 91)) {
				array[i] = array[i] + 32;
			}
		}
	}

	//Append method
	void String_Append_Method(char* append_array) {
		int length = MyStrlen(array);
		int new_length = MyStrlen(append_array);
		int totalLength = length + new_length;
		Check_Size_Capacity(totalLength);

		char* new_array = new char[capacity] {};

		for (size_t i = 0; i < length; i++) {
			new_array[i] = array[i];
		}

		for (size_t i = 0; i < new_length; i++) {
			new_array[length + i] = append_array[i];
		}

		new_array[totalLength] = '\0';

		delete[] array;
		array = new_array;
	}

	// Reverse method
	void String_Reverse() {
		size_t len = MyStrlen(array);
		for (size_t i = 0; i < len / 2; i++) {
			char temp = array[i];
			array[i] = array[len - i - 1];
			array[len - i - 1] = temp;
		}
	}
	//Trim method
	void String_Trim() {
		int start = 0;
		int end = MyStrlen(array) - 1;

		while (array[start] == ' ') {
			start++;
		}
		// '     nurana     ' =16
		while (array[end] == ' ') {
			end--;
		}

		int newLength = end - start + 1;
		char* trim_arr = new char[newLength + 1] {};
		for (size_t i = 0; i < newLength; i++) {
			trim_arr[i] = array[start + i];
		}
		trim_arr[newLength] = '\0';

		delete[] array;
		array = trim_arr;
	}
	// Insert method
	void String_Insert(int position, char* subStr) {
		int len = MyStrlen(array);
		int subLen = MyStrlen(subStr);
		Check_Size_Capacity(len + subLen);

		char* new_array = new char[capacity] {};
		for (size_t i = 0; i < position; i++) {
			new_array[i] = array[i];
		}
		for (size_t i = 0; i < subLen; i++) {
			new_array[position + i] = subStr[i];
		}
		for (size_t i = position; i < len; i++) {
			new_array[i + subLen] = array[i];
		}

		new_array[len + subLen] = '\0';
		delete[] array;
		array = new_array;
	}
	// Replace method
	void String_Replace(char old_symbol, char new_symbol) {
		for (size_t i = 0; array[i] != '\0'; i++) {
			if (array[i] == old_symbol) {
				array[i] = new_symbol;
			}
		}
	}
	~String() {
		delete[] array;
	}


};
void main() {
	String* s1 = new String(new char[20] {"Nurana"});
	cout << *s1;

	String* s2 = new String(new char[20] {"Nunu"});
	cout << s2->MyStrlen(s2->get_Array());
	s2->Set_Array(new char[20] {"nu"});
	cout << endl;
	cout << s2->get_Array();
	cout << endl;

	//Upper method
	String* s3 = new String(new char[20] {"nurana"});
	s3->Upper_String();
	cout << *s3;
	cout << endl;


	//Lower method
	String* s4 = new String(new char[20] {"NUNU"});
	s4->String_Lower();
	cout << *s4;
	cout << endl;

	//Append method
	String* s5 = new String(new char[20] {"Nurana"});
	s5->String_Append_Method(new char[30] {"Ismayilzada"});
	cout << *s5;
	cout << endl;

	// Reverse method
	String* s6 = new String(new char[20] {"Nurana"});
	s6->String_Reverse();
	cout << *s6;
	cout << endl;

	// Trim method
	String* s7 = new String(new char[30] {"   Nurana   "});
	s7->String_Trim();
	cout << *s7;
	cout << endl;

	//Insert method
	String* s8 = new String(new char[20] {"Nurana"});
	s8->String_Insert(3, new char[10] {"ism"});
	cout << *s8;
	cout << endl;


	// Replace method
	String* s9 = new String(new char[20] {"Nurana"});
	s9->String_Replace('a', 'o');
	cout << *s9;

}