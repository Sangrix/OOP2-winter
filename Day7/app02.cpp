#include <iostream>
#include <cassert>
using namespace std;

class Complex {
public:
	int realNumber;
	int imaginary;

	Complex(int realNumber, int imaginary) : realNumber(realNumber), imaginary(imaginary) {

	}

	//// 연산자의 왼쪽은 실행 타임의 객체 주소로 관리, 오른쪽은 right 매개변수
	//Complex operator+(const Complex& right) {
	//	return Complex(this->realNumber + right.realNumber, this->imaginary + right.imaginary);
	//}

	Complex operator++() {
		this->realNumber = this->realNumber + 1;

		return Complex(this->realNumber, this->imaginary);
	}

	/*Complex& operator++() {
		this->realNumber = this->realNumber + 1;

		return *this;
	}*/

	Complex operator++(int) {
		Complex previous(this->realNumber, this->imaginary);

		this->realNumber = this->realNumber + 1;
		return previous;
	}
};

// 일반 함수 (멤버함수가 아닌 경우)
Complex operator+(const Complex& left, const Complex& right) {
	return Complex(left.realNumber + right.realNumber, left.imaginary + right.imaginary);
}

ostream& operator<<(ostream& out, const Complex& right) {
	//out 객체를 하나 만듦
	out << right.realNumber << "+" << right.imaginary << "i\n";
	
	return out;
}

int main() {
	/* Complex c1(9, 7);
	Complex c2(1, 4);
	Complex c3 = c1 + c2;
	// Complex c3 = operator+(c1, c2);	
	// Complex c3 = c1.operator+(c2);

	cout << c3.realNumber << "+" << c3.imaginary << "i\n";
	// ++c3;
	// Complex c4 = ++c3;
	
	// 후위 연산이라 c3의 값을 먼저 던지고 증가되어야함
	Complex c4 = c3++;
	cout << c3.realNumber << "+" << c3.imaginary << "i\n";
	cout << c4.realNumber << "+" << c4.imaginary << "i\n";
	*/

	Complex c1(9, 7);
	cout << c1.realNumber << "+" << c1.imaginary << "i\n";
	cout << c1;

	return 0;
}