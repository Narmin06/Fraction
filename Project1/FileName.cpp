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

	Fraction Addition(Fraction& fraction) {
		int new_num;
		int new_denum;
		if (this->denumerator == fraction.denumerator) {
			new_denum = this->denumerator;
			new_num = this->numerator + fraction.numerator;

		}
		else {
			new_denum = this->denumerator * fraction.denumerator;
			new_num = (this->numerator * fraction.denumerator) + (this->denumerator * fraction.numerator);
		}
		return Fraction(new_num, new_denum);
	}

	Fraction Subtraction(Fraction& fraction) {
		int new_num;
		int new_denum;
		if (this->denumerator == fraction.denumerator) {
			new_denum = this->denumerator;
			new_num = this->numerator - fraction.numerator;

		}
		else {
			new_denum = this->denumerator * fraction.denumerator;
			new_num = (this->numerator * fraction.denumerator) - (this->denumerator * fraction.numerator);
		}
		return Fraction(new_num, new_denum);
	}


	Fraction Multiplied(Fraction& fraction) {
		int new_num;
		int new_denum;
		new_num = this->numerator * fraction.numerator;
		new_denum = this->denumerator * fraction.denumerator;
		return Fraction(new_num, new_denum);
	}

	Fraction Division(Fraction& fraction) {
		int new_num;
		int new_denum;
		new_num = this->numerator * fraction.denumerator;
		new_denum = this->denumerator * fraction.numerator;
		return Fraction(new_num, new_denum);
	}

	void Show(Fraction fraction) {
		cout << fraction.numerator << "/" << fraction.denumerator;
	}

};

void main() {
	int num1;
	cout << "Enter numerator1: ";
	cin >> num1;

	int denum1;
	cout << "Enter denumerator1: ";
	cin >> denum1;

	Fraction fraction1(num1, denum1);

	cout << endl;

	int num2;
	cout << "Enter numerator2: ";
	cin >> num2;

	int denum2;
	cout << "Enter denumerator2: ";
	cin >> denum2;

	Fraction fraction2(num2, denum2);

	cout << endl;
	Fraction result1 = fraction1.Addition(fraction2);
	cout << "Addition: ";
	result1.Show(result1);
	cout << endl;
	Fraction result2 = fraction1.Subtraction(fraction2);
	cout << "Subtraction: ";
	result2.Show(result2);
	cout << endl;
	Fraction result3 = fraction1.Multiplied(fraction2);
	cout << "Multiplied: ";
	result3.Show(result3);
	cout << endl;
	Fraction result4 = fraction1.Division(fraction2);
	cout << "Division: ";
	result4.Show(result4);


}