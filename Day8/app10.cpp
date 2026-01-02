#include <iostream>
using namespace std;

class Complex {
	// 일반 함수 형태로 연산자 오버로딩할 때, friend 키워드를 사용
	// 해당 프로토타입을 갖는 함수들이 Complex 클래스의 친구로 지정해서 모든 멤버에 접근 가능하도록
	// 함수 프로토타입을 작성해줘야 함
	friend Complex operator+(const Complex& left, const Complex& right);

public:
	Complex(int r, int i) : real(r), imaginary(i) {}


	int Real() const { return real; }
	int Imaginary() const { return imaginary; }

private:
	int real; // 실수
	int imaginary; // 허수
};

Complex operator+(const Complex& left, const Complex& right) {
	int real = left.real + right.real;
	int imaginary = left.imaginary + right.imaginary;
	// 둘 다 private인 멤버 변수라서
	// 1. public으로 멤버 변수를 바꾸거나
	// 2. getter를 통해 값을 가져오거나
	// 3. friend 키워드를 사용

	return Complex(real, imaginary);
}

int main() {
	Complex c1(1, 1);
	Complex c2(7, 2);
	Complex c3(0, 0);

	c3 = c1 + c2;
	c3 = operator+(c1, c2);
	
	cout << c3.Real() << ", " << c3.Imaginary() << endl;

	return 0;
}