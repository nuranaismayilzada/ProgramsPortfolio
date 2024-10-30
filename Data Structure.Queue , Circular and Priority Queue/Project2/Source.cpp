#include<iostream>
#include<cassert>
#include<queue>
using namespace std;
template<class T>
class Queue {
	T* arr;
	int capacity;
	int count;
	int rear;  //en sonuncu hansi elementdirse onu gosterir  //back
	int front;  //novbede olan element.Ilk hansi cixacaq onu
public:
	Queue(int size = 5) {
		capacity = size;
		arr = new T[capacity]{};
		front = 0;
		count = 0;
		rear = -1;
	}
	bool IsFull() {
		return capacity == count;
	};
	bool IsEmpty() {
		return rear == -1;
	};
	void EnQueue(T value) {
		assert(!IsFull() && "Queue is Full...");
		arr[++rear] = value;
		count++;
	};
	void DeQueue() {
		assert(!IsEmpty() && "Queue is Empty...");
		for (size_t i = 0; i < count; i++)
		{
			arr[i] = arr[i + 1];
		}
		rear--;
		count--;
	};
	T Peek() {
		assert(!IsEmpty() && "Queue is Empty...");
		return arr[front];
	};
	~Queue()
	{
		delete[]arr;
	}
};
template<class T>
class CircularQueue {
	T* arr;
	int capacity;
	int count;
	int rear;
	int front;
public:
	CircularQueue(int size = 5) {
		capacity = size;
		arr = new T[capacity]{};
		count = 0;
		rear = -1;
		front = -1;
	}
	bool IsEmpty() {
		return count == 0;
	};
	bool IsFull() {
		return count == capacity;
	};
	void Enqueue(T value) {
		assert(!IsFull() && "Queue is full...");
		if (front==-1)
		{
			front = 0;
		}
		rear = (rear + 1) % capacity;
		arr[rear] = value;
		count++;
	};
	void Dequeue() {
		assert(!IsEmpty() && "Queue is Empty...");
		if (front==rear)
		{
			front = -1;
			rear = -1;
		}
		else {
			front = (front + 1) % capacity;
		}
		count--;
	};
	T Peek() {
		assert(!IsEmpty() && "Queue is Empty...");
		return arr[front];
	};
	~CircularQueue()
	{
		delete[]arr;
	}
};

class PriorityQueue {
	int* arr;
	int capacity;
	int rear;
	int count;
public:
	PriorityQueue(int size = 5) {
		capacity = size;
		arr = new int[capacity] {};
		rear = -1;
		count = 0;
	}
	bool IsFull() {
		return count == capacity;
	}
	bool IsEmpty() {
		return count == 0;
	}
	void EnQueue(int value) {
		assert(!IsFull() && "Queue is full...");
		arr[++rear] = value;
		count++;
	}
	int Get_Max_Element_Index() {
		int max_index = 0;
		for (size_t i = 0; i < count; i++)
		{
			if (arr[max_index]<arr[i])
			{
				max_index = i;
			}
		}
		return max_index;
	}
	void DeQueue() {
		assert(!IsEmpty() && "Queue is Empty...");
		int index = Get_Max_Element_Index();
		int* temp_arr = new int[capacity] {};
		for (size_t i = 0; i < index; i++)
		{
			temp_arr[i] = arr[i];
		}
		for (size_t i = index; i < count-1; i++)
		{
			temp_arr[i] = arr[i + 1];
		}
		delete[]arr;
		arr = temp_arr;
		rear--;
		count--;
	}
	int Peek() {
		assert(!IsEmpty() && "Queue is Empty...");
		int index = Get_Max_Element_Index();
		return arr[index];
	}
	~PriorityQueue()
	{
		delete[]arr;
	}
};
void main() {
	//Queue<int>q;
	//q.EnQueue(12);
	//q.EnQueue(22);
	//q.EnQueue(29);
	//q.EnQueue(49);
	//q.EnQueue(59);
	//q.EnQueue(59);
	//q.EnQueue(59);


	//cout << q.Peek() << endl;
	//q.DeQueue();
	//cout << q.Peek() << endl;
	//q.DeQueue();
	//cout << q.Peek() << endl;


	//queue<int>q;
	//q.push(90);
	//q.push(88);
	//q.push(38);
	//q.push(238);
	//cout << q.front() << endl;
	//cout << q.back() << endl;
	//cout << q.size() << endl;
	//q.pop();
	//cout << q.front() << endl;
	//q.pop();

	//CircularQueue<int> cq;
	//cq.Enqueue(20);
	//cq.Enqueue(22);
	//cq.Enqueue(32);
	//cq.Enqueue(40);

	//
	//cq.Dequeue();

	//cout << cq.Peek() << endl;

	PriorityQueue pq;
	pq.EnQueue(90);
	pq.EnQueue(21);
	pq.EnQueue(30);
	pq.EnQueue(200);
	pq.EnQueue(190);
	cout << pq.Peek() << endl;
	pq.DeQueue();
	cout << pq.Peek() << endl;
	pq.DeQueue();
	cout << pq.Peek() << endl;



}