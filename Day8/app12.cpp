#include<iostream>
using namespace std;
/* 
const_cast: const, volatile 동의 속성을 변경(제거)
dynamic_cast: 상속 관계의 클래스 포인터 및 레퍼런스 타입 체크
static_cast: 논리적으로 변환 가능한 타입만 변환, 그 외의 변환은 에러로 처리
reinterpret_cast: 포인터끼리, 포인터와 수치형 간의 변환
*/

class A {
public:
	virtual void Func() {}
};

class B : public A{};
class C: public B{};

int main() {
	char univ[] = "Inha";
	const char* c1 = univ;
	char* c2;

	//c2 = c1;
	//포인터의 상수성만 바꿈
	c2 = const_cast<char*>(c1);
	
	//대상의 타입을 바꾸거나, 기본 타입을 포인터로 바꿀 수 없음
	//int* pi = const_cast<int*>(c1);
	c2[0] = 'i';
	cout << c2 << endl;


	// dynamic_cast
	A* pa1 = new C; //upcasting
	A* pa2 = new A;
	C* pc1 = dynamic_cast<C*>(pa1);
	C* pc2 = dynamic_cast<C*>(pa2); //downcasting, 캐스팅 실패하면 NULL 값 반환
	try {
		C& rc1 = dynamic_cast<C&>(*pa2); //레퍼런스 캐스팅 실패는 특정값 반환이 안되므로, bad_cast 예외 발생
	}
	catch (bad_cast& e) {
		cout << "bad_cast~" << endl;
	}


	return 0;
}