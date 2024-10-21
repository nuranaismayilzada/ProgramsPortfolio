#include<iostream>
#include<cassert>
using namespace std;
class Vector {
	int* array = nullptr;
	size_t size = 0;
	size_t capacity = 10;
public:
	Vector() {
		this->array = new int[capacity];
	}
	Vector(size_t capacity) :Vector() {
		while (this->capacity<capacity)
		{
			this->capacity += 10; 
		}
	}
	int* Get_Data() const {
		return array;
	}
	size_t Get_Size()const {
		return size;
	}
	size_t Get_Capacity()const {
		return capacity;
	}
	friend ostream& operator<<(ostream& out, const Vector& obj) {
		for (size_t i = 0; i < obj.size; i++)
		{
			out << obj.array[i]<<" ";
		}
		out << endl;
		return out;
	}
	Vector& Push_Back(int value) {
		if (size==capacity)
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
	int& operator[](size_t index) {
		if (index>0 && index<size)
		{
			return array[index];
		}
		else {
			assert(!"Index out of exception!");
		}
	}
	Vector& Push_Front(int value) {
		if (size==capacity)
		{
			capacity += 10;
			int* new_array = new int[capacity] {};
			for (size_t i = 0; i < size; i++)
			{
				new_array[i + 1] = array[i];
			}
			delete[]array;
			array = new_array;
		}
		else {
			for (size_t i = size; i > 0 ; i--)
			{
				array[i] = array[i - 1];
			}
		}
		array[0] = value;
		size++;
		return *this;
	}
	Vector& Insert(int value, size_t index) {
		if (index > size) {
			assert(!"Indexden kenara cixildi ! Bele bir index movcud deyil!");
		}
		if (size==capacity)
		{
			capacity += 10;
			int j = 0;
			int* new_array = new int[capacity] {};
			for (size_t i = 0; i < size; i++)
			{
				if (i==index)
				{
					new_array[j] = value;
					j++;
				}
				else {
					new_array[j] = array[i];
					j++;
				}
			}
			delete[]array;
			array = new_array;
		}
		else {
			for (size_t i = size; i >index ; i--)
			{
				array[i] = array[i - 1];
			}
			array[index] = value;
		}
		size++;
		return *this;
	}
	Vector& Pop_Back() {
		if (size>0)
		{
			size--;
		}
		return *this;
	}
	Vector& Pop_Front() {
		for (size_t i = 0; i < size; i++)
		{
			array[i] = array[i + 1];
		}
		size--;
		return *this;
	}
	Vector& Pop_Index(size_t index) {
		if (index > size) {
			assert(!"Indexden kenara cixildi ! Bele bir index movcud deyil!");
		}
		for (size_t i = index; i <size; i++)
		{
			array[i] = array[i+1];
		}
		size--;
		return *this;
	}
	~Vector()
	{
		delete[]array;
	}

};
void main() {
	Vector v;
	v.Push_Back(2);
	v.Push_Back(88);
	v.Push_Back(44);
	v.Push_Back(244);
	v.Push_Back(14);
	v.Push_Back(24);
	v.Push_Back(93);
	cout << v;
	v.Push_Front(22);
	cout << v;
	v.Insert(33, 2);
	cout << v;
	v.Pop_Back();
	cout << v;
	v.Pop_Front();
	cout << v;
	v.Pop_Front();
	cout << v;
	v.Pop_Index(2);
	cout << v;
}