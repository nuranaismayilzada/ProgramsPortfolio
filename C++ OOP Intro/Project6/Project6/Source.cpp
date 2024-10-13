#include<iostream>
using namespace std;
class Fraction {
public:
	int numerator;
	int denumerator;
	Fraction(int numerator, int denumerator) {
		this->numerator = numerator;
		this->denumerator = denumerator;
	}
	Fraction Addition(Fraction f2) {
		int denumeratorResult, numeratorResult;
		if (denumerator == f2.denumerator)
		{
			denumeratorResult = denumerator;
			numeratorResult = numerator + f2.numerator;
		}
		else {
			denumeratorResult = denumerator * f2.denumerator;
			numeratorResult = numerator * f2.denumerator + f2.numerator * denumerator;
		}
		Fraction result(numeratorResult, denumeratorResult);
		return result;
	}
	Fraction Subtraction(Fraction f2) {
		int denumeratorResult, numeratorResult;
		if (denumerator == f2.denumerator)
		{
			denumeratorResult = denumerator;
			numeratorResult = numerator - f2.numerator;
		}
		else {
			denumeratorResult = denumerator * f2.denumerator;
			numeratorResult = numerator * f2.denumerator - f2.numerator * denumerator;
		}
		Fraction result(numeratorResult, denumeratorResult);
		return result;
	}
	Fraction Multiply(Fraction f2) {
		int numeratorResult, denumeratorResult;
		numeratorResult = numerator * f2.numerator;
		denumeratorResult = denumerator * f2.denumerator;
		Fraction result(numeratorResult, denumeratorResult);
		return result;
	}

	Fraction Division(Fraction f2) {
		int numeratorResult, denumeratorResult;
		numeratorResult = numerator * f2.denumerator;
		denumeratorResult = denumerator * f2.numerator;
		Fraction result(numeratorResult, denumeratorResult);
		return result;
	}
	~Fraction()
	{
		//cout << "Deleted!";
	}
	void Simplify() {
		int bolen = 2;
		while (bolen <= numerator && bolen <= denumerator) {
			if (numerator % bolen == 0 && denumerator % bolen == 0) {
				numerator /= bolen;
				denumerator /= bolen;
			}
			else {
				bolen++;
			}
		}
	}
		void Show() {
			cout << numerator << "/" << denumerator;
		}
	};
	void main() {
		//Fraction f1(5, 8);
		//Fraction f2(4, 5);
		//Fraction result = f1.Addition(f2);
		//result.Show();


		//Fraction f1(5, 8);
		//Fraction f2(4, 5);
		//Fraction result = f1.Subtraction(f2);
		//result.Show();



		//Fraction f1(5, 8);
		//Fraction f2(4, 5);
		//Fraction result = f1.Multiply(f2);
		//result.Show();


		//Fraction f1(5, 8);
		//Fraction f2(4, 5);
		//Fraction result = f1.Division(f2);
		//result.Show();


		Fraction f1(30, 75);
		f1.Simplify();
		f1.Show();

	}