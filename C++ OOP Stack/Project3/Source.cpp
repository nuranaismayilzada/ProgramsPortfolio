#include<iostream>
#include<cassert>
#include<stack>
using namespace std;
template<class T>
class Stack {
	T* arr;
	int top;
	int capacity;
public:
	Stack(int size = 5) {
		this->capacity = size;
		arr = new T[capacity] {};
		top = -1;
	}
	bool IsFull() {
		return top == capacity - 1;
	};
	bool IsEmpty() {
		return top == -1;
	};
	void Push(int value) {
		assert(!IsFull() && "Stack overflow...");
		top++;
		arr[top] = value;
	};
	void Pop() {
		assert(!IsEmpty() && "Stack is empty...");
		top -- ;
	};
	T Top() {
		assert(!IsEmpty() && "Stack is empty...");
		return arr[top];
	};
	~Stack()
	{
		delete[]arr;
	}
};
void main() {
	//Stack st1;
	//st1.Push(78);
	//st1.Push(17);
	//st1.Push(17);
	//st1.Push(32);
	//cout << st1.Top() << endl;
	//st1.Pop();
	//cout << st1.Top() << endl;

	//stack<int>st1;
	//st1.push(10);
	//st1.push(99);
	//cout << st1.top()<<endl;
	//st1.pop();
	//cout << st1.top() << endl;
}