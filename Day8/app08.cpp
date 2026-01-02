#include <iostream>
using namespace std;

class Complex {
public:
	Complex(int r, int i) : real(r), imaginary(i) {}

	// c3 = c1 + c2;
	// c1은 this로 c2는 right로 return은 c3가 받음
	Complex operator+(const Complex& right) {
		int real = this->real + right.real; // this는 실행 시점의 객체
		int imaginary = this->imaginary + right.imaginary;
		
		return Complex(real, imaginary);
	}
	//Complex add(const Complex& right) {
	//	int real = this->real + right.real; // this는 실행 시점의 객체
	//	int imaginary = this->imaginary + right.imaginary;
	//	
	//	return Complex(real, imaginary);
	//}

	int Real() const { return real; }
	int Imaginary() const { return imaginary; }
private:
	int real; // 실수
	int imaginary; // 허수
};


int main() {
	Complex c1(1, 1);
	Complex c2(7, 2);
	Complex c3(0, 0);

	//// 기존에는 add 메서드를 생성해서 구함
	//c3 = c1.add(c2); 
	// // c3 = c1 + c2; 으로 코드를 바꾸고 싶다.

	c3 = c1 + c2;
	cout << c3.Real() << ", " << c3.Imaginary() << endl;

	return 0;
}