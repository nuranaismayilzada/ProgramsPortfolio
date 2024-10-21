#include<iostream>
#include<vector>
#include<cassert>
#include<string>
using namespace std;
class Vector {
	int* array = nullptr;
	size_t size = 0;
	size_t capacity = 10;
public:
	Vector() {
		this->array = new int[capacity] {};
	}
	Vector(size_t capacity) :Vector() {
		while (this->capacity < capacity)
		{
			this->capacity += 10;
		}
	}
	int* Get_Array()const {
		return array;
	}
	size_t Get_Size()const {
		return size;
	}
	size_t Get_Capacity() const {
		return capacity;
	}
	friend ostream& operator<<(ostream& out, const Vector& obj) {
		for (size_t i = 0; i < obj.size; i++)
		{
			out << obj.array[i] << "  ";
		}
		out << endl;
		return out;
	}
	~Vector()
	{
		delete[] array;
	}
	Vector& Push_Back(int value) {
		if (size == capacity)
		{
			capacity += 10;
			int* new_array = new int[capacity] {};
			for (size_t i = 0; i < size; i++)
			{
				new_array[i] = array[i];
			}
			new_array[size] = value;
			size++;
			delete[]array;
			array = new_array;
		}
		else {
			array[size] = value;
			size++;
		}
		return *this;
	}
	Vector& Push_Front(int value) {
		if (capacity == size)
		{
			capacity += 10;
			int* new_array = new int[capacity] {};
			new_array[0] = value;
			for (size_t i = 0; i < size; i++)
			{
				new_array[i + 1] = array[i];
			}
			delete[]array;
			array = new_array;
			size++;
		}
		else {
			for (size_t i = 0; i < size; i++)
			{
				array[size - i] = array[size - i - 1];
			}
			size++;
			array[0] = value;
		}
		return *this;
	}
	Vector& Insert(size_t index, int value) {
		if (index > size) {
			assert(!"Indexden kenara cixildi ! Bele bir index movcud deyil!");
		}
		if (capacity == size)
		{
			capacity += 10;
			int j = 0;
			int* new_array = new int[capacity] {};
			for (size_t i = 0; i < size; i++)
			{
				if (i == index)
				{
					new_array[j] = value;
					j++;
				}
				else {
					new_array[j] = array[i];
					j++;
				}
			}
			delete[] array;
			array = new_array;
			size++;
		}
		else {
			for (size_t i = size; i > index; i--) {
				array[i] = array[i - 1];
			}
			array[index] = value;
			size++;
		}
		return *this;
	}
	Vector& Pop_Back() {
		if (size>0)
		{
			size--;
		}
		return *this;
	}
	Vector& Pop_Index(size_t index) {
		if (index >= size) {
			assert(!"Indexden kenara cixildi ! Bele bir index movcud deyil!");
		}
		int k = 0;
		int* new_arr = new int[capacity] {};
		for (size_t i = 0; i < index; i++)
		{
			new_arr[k] = array[i];
			k++;
		}
		for (size_t i = index+1; i < size; i++)
		{
			new_arr[k] = array[i];
			k++;
		}
		delete[] array;
		array = new_arr;
		size--;
		return *this;
	}
	Vector& Pop_Front() {
		for (size_t i = 0; i < size-1; i++)
		{
			array[i] = array[i+1];
		}
		size--;
		return *this;
	}
	int& operator[](size_t index) {
		if (index > 0 && index < size)
		{
			return array[index];
		}
		else {
			assert(!"Index out of range exception");
		}
	}

};
void main() {
	Vector v;
	cout << v << endl;
	v.Push_Back(22);
	v.Push_Back(44);
	v.Push_Back(1);
	v.Push_Back(31);
	v.Push_Back(21);
	v.Push_Back(91);
	//v.Push_Back(2);
	//v.Push_Back(424);
	//v.Push_Back(144);
	//v.Push_Back(244);
	//v.Push_Back(544);
	//v.Push_Back(744);
	//v.Push_Back(934);


	//cout << endl;
	//cout << v << endl;
	//v.Push_Front(11);
	//v.Push_Front(7);

	cout << v << endl;
	v.Insert(2, 777);
	cout << v << endl;
	//v.Pop_Back();
	//v.Pop_Back();
	//cout << v << endl;
	//cout << v[0] << endl;
	v.Pop_Index(1);
	cout << v << endl;
	v.Pop_Front();
	cout << v << endl;
	//vector <int>v1;
	//v1.push_back(22);
	//v1.push_back(44);
	//v1.push_back(66);
	//v1.push_back(33);
	//v1.push_back(22);
	//v1.push_back(11);
	//v1.push_back(55);
	//v1.push_back(99);
	//v1.push_back(77);
	//auto arr = v1.data();
	//for (size_t i = 0; i < v1.size(); i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

}