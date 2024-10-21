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
	Vector(size_t capacity):Vector() {
		while (this->capacity<capacity)
		{
			this->capacity += 10;
		}
	}
	int* Get_Data()const {
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
			out << obj.array[i] << " ";
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
			assert(!"Index out of range exception");
		}
	}
	~Vector()
	{
		delete[]array;
	}
};
void main() {
	//Vector v;
	//cout << "Size: " << v.Get_Size() << endl;
	//cout << "Capacity: " << v.Get_Capacity() << endl;
	//cout << v << endl;
	//v.Push_Back(90);
	//v.Push_Back(993);
	//v.Push_Back(190);
	//v.Push_Back(77);
	//v.Push_Back(888);
	//v.Push_Back(888);
	//v.Push_Back(888);
	//v.Push_Back(888);
	//v.Push_Back(888);
	//v.Push_Back(888);
	//v.Push_Back(888);
	//cout << v << endl;
	//cout << "Size: " << v.Get_Size() << endl;
	//cout << "Capacity: " << v.Get_Capacity() << endl;

	vector<int>v;
	v.push_back(56);
	v.push_back(23);
	v.push_back(156);
	v.push_back(5356);
	v.push_back(2456);
	v.push_back(657);
	v.push_back(5356);
	v.push_back(2456);
	v.push_back(5356);
	v.push_back(2456);
	v.push_back(657);
	v.push_back(5356);
	v.push_back(2456);
	v.push_back(657);
	v.push_back(657);
	v.push_back(5356);
	v.push_back(2456);
	v.push_back(5356);
	v.push_back(2456);
	v.push_back(657);
	v.push_back(657);
	auto arr = v.data();
	cout << "Capacity: " << v.capacity() << endl;
	cout << "Size: " << v.size() << endl;
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << v[8];

}