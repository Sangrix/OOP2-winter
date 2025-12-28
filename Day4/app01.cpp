#include <iostream>
using namespace std;

int main() {
	// Lambada Expression (C++11, 14)
	// [캡쳐블럭](매개변수리스트)->리턴타입{함수바디};

	[]() -> void {};
	[]() {};
	[] {};

	// 맨끝의 소괄호는 람다 표현식 즉시 실행
	//[] {cout << "Hi Lambda!" << endl; }(); 
	//auto temp = [] {cout << "Hi Lambda!" << endl; };
	//temp();

	//auto temp = []() {return 5 + 10; };
	//cout << temp() << endl;

	//auto temp = [](int a, int b) {return a + b; };
	//cout << temp(5, 10) << endl;
	
	//auto temp = [](int a, int b) -> int {return a + b; };
	//cout << temp(5, 10) << endl;

	//auto temp = [](int a, int b) -> int {return a + b; }(5,10);
	//cout << temp << endl;

	//auto temp = [](float a, int b) -> int {return a + b; };
	//cout << temp(7.7f, 2) << endl;

	//auto temp = [](float a, int b) -> float {return a + b; };
	//cout << temp(7.7f, 2) << endl;

	//auto temp = [](float a, int b){return a + b; };
	//cout << temp(7.7f, 2) << endl;

	short c = 5, d = 7;
	auto temp = [c, d](float a, int b) -> int {
		return a + b + c + d;
	};

	cout << temp(1.9f, 2) << endl;

	return 0;
}