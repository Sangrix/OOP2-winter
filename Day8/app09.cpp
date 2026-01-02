#include <iostream>
using namespace std;

class Complex {
public:
	Complex(int r, int i) : real(r), imaginary(i) {}

	// 피연산자 1개라 매개변수 필요 x, 전위 후위가 구분이 안 됨
	// 전위 연산자
	Complex operator++() {
		this->real++;

		return *this;
	}

	// 매개변수 없이 자료형만
	// 후위 연산자: 객체를 하나 만들어두고 저장, real 증가, 저장한 객체 리턴
	Complex operator++(int) {
		Complex prev(this->real, this->imaginary);
		this->real++;
		
		return prev;
	}

	int Real() const { return real; }
	int Imaginary() const { return imaginary; }
private:
	int real; // 실수
	int imaginary; // 허수
};


int main() {
	Complex c1(1, 1);
	Complex prefix(0, 0);
	Complex postfix(0, 0);

	prefix = ++c1;
	postfix = c1++;

	cout << prefix.Real() << endl;
	cout << postfix.Real() << endl;
	cout << c1.Real() << endl;

	return 0;
}