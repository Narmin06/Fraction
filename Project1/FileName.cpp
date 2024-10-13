#include<iostream>
using namespace std;

class Fraction {
	int numerator;
	int denumerator;
public:

	Fraction(int numerator, int denumerator) {
		this->numerator = numerator;
		this->denumerator = denumerator;
	}


	void Simplify() {
		int number = 2;
		for (int i = 2; i <= numerator && i <= denumerator; i++) {
			if ((this->numerator) % number == 0 && (this->denumerator) % number == 0) {
				number = i;
			}
		}
		this->numerator = (this->numerator) / number;
		this->denumerator = (this->denumerator) / number;
	}

	Fraction Addition(const Fraction& fraction) {
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
		Fraction result(new_num, new_denum); 
		result.Simplify();
		return result;
	}

	Fraction Subtraction(const Fraction& fraction) {
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
		Fraction result(new_num, new_denum);
		result.Simplify();
		return result;
	}


	Fraction Multiplied(const Fraction& fraction) {
		int new_num;
		int new_denum;
		new_num = this->numerator * fraction.numerator;
		new_denum = this->denumerator * fraction.denumerator;
		Fraction result(new_num, new_denum);
		result.Simplify();
		return result;
	}

	Fraction Division(const Fraction& fraction) {
		int new_num;
		int new_denum;
		new_num = this->numerator * fraction.denumerator;
		new_denum = this->denumerator * fraction.numerator;
		Fraction result(new_num, new_denum);
		result.Simplify();
		return result;
	}


	void Show(Fraction fraction) {
		cout << fraction.numerator << "/" << fraction.denumerator;
	}

	int GetNumerator() const {
		return numerator;
	}

	void SetNumerator() {
		int new_numerator = this->numerator;
		while (true) {
			if (new_numerator == 0) {
				cout << "Enter new numerator: ";
				cin >> new_numerator;
			}
			else
			{
				this->numerator = new_numerator;
				break;
			}
		}
	}

	int GetDenumerator() const {
		return denumerator;
	}

	void SetDenumerator() {
		int new_denumerator=this->denumerator;
		while (true) {
			if (new_denumerator == 0) {
				cout << "Enter new denumerator: ";
				cin >> new_denumerator;
			}
			else
			{
				this->denumerator = new_denumerator;
				break;
			}
		}
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
	fraction1.SetNumerator();
	fraction1.SetDenumerator();

	cout << endl;

	int num2;
	cout << "Enter numerator2: ";
	cin >> num2;

	int denum2;
	cout << "Enter denumerator2: ";
	cin >> denum2;

	Fraction fraction2(num2, denum2);
	fraction2.SetNumerator();
	fraction2.SetDenumerator();

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