#include<iostream>
using namespace std;

class Base {
public:
	virtual void print() const { cout << "베이스 클래스" << endl; }
};

// 객체 간의 호환 (상속)
class Derived : public Base {
public:
	void print() const { cout << "파생 클래스" << endl; }
};

int main() {
	Base* ptr = nullptr;

	ptr = new Base();
	ptr -> print();

	delete ptr;
	ptr = nullptr;

	// upcasting, 부모클래스의 포인터로 자식 클래스의 주소를 받음 (리스코프 치환원칙) 
	// 하위 클래스 객체는 상위 클래스 객체에 호환된다.
	ptr = new Derived();
	ptr -> print();

	delete ptr;
	ptr = nullptr;

	return 0;
}

// 출력
// 베이스 클래스
// 파생 클래스