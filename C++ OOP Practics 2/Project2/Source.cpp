#include<iostream>
using namespace std;
#include<cassert>
class Circle {
private:
	double radius;
public:
	const double PI = 3.14;
	Circle() {
		radius = 1;
	}
	Circle(int radius) {
		setRadius(radius);
	}
	double getRadius() {
		return this->radius;
	}
	void setRadius(int radius) {
		if (radius == 0)
		{
			cout << "Radius 0 ola bilmez !";
			return;
		}
		else {
			this->radius = radius;
		}
	}
	double Area() {
		return this->PI * this->getRadius() * this->getRadius();
	}
	double Lenght() {
		return this->PI * this->getRadius() * 2;
	}
	void Print() {
		cout << "Radius: " << this->radius << endl;
		cout << "Area: " << this->Area() << endl;
		cout << "Lenght: " << this->Lenght() << endl;
	}
};
class Counter {
private:
	int min;
	int max;
	int currentValue;
public:
	Counter() {
		min = 1;
		max = 1;
		currentValue=min;
	}
	Counter(int min, int max) {
		this->min = min;
		this->max = max;
		currentValue = min;
	}
	int getMin() {
		return this->min;
	}
	int getMax() {
		return this->max;
	}
	void setMax(int max) {
		if (currentValue >= max) {
			assert(!"Error: Deyer 100-den yuxari ola bilmez!");
		}
		currentValue++;
	}
	void set
	void Increment() {
		
	}
	void Decrement() {
		if (currentValue <= min) {
			assert(!"Error: Deyer 1-den asagi ola bilmez!");
		}
		currentValue--;
	}
	int getCurrent() {
		return this->currentValue;
	}
	void print() {
		cout << "Min: " << this->min << endl;
		cout << "Max: " << this->max << endl;
		cout << "Deyer: " << this->currentValue<<endl;
	}
};
void main() {
	//Circle c1(25);
	//c1.Print();
	Counter c1(0,100);
	c1.print();
	c1.Increment();
	cout << endl;
	c1.print();
	c1.Increment();
	c1.Increment();
	c1.print();
}