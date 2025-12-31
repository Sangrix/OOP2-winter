#include <iostream>
#include <cassert>
using namespace std;

class Complex {
public:
	int realNumber;
	int imaginary;

	Complex(int realNumber, int imaginary) : realNumber(realNumber), imaginary(imaginary) {

	}

	// 연산자의 왼쪽은 실행 타임의 객체 주소로 관리, 오른쪽은 right 매개변수
	Complex operator+(Complex right) {
		return Complex(this->realNumber + right.realNumber, this->imaginary + right.imaginary);
	}
};

int main() {
	Complex c1(9, 7);
	Complex c2(1, 4);
	// Complex c3 = c1 + c2;
	Complex c3 = c1.operator+(c2);

	cout << c3.realNumber << "+" << c3.imaginary << "i\n";

	return 0;
}