#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;

int main() {
	string cppstyle = "Hello!";
	// 읽기 전용 cpp to c
	/*const char* cstyle = nullptr;*/

	// 복사하기 위해 새로 할당, 독립된 공간
	char* cstyle = new char[cppstyle.size() + 1];

	strcpy(cstyle, cppstyle.c_str());

	cstyle[0] = 'Y';

	//// 읽기 전용 형태의 return을 해줌
	//// string 객체 안에 있는 문자열을 읽기 전용으로 cpp의 값을 바꿀 수는 없음
	//cstyle = cppstyle.c_str();

	cout << cstyle << endl;
	cout << cppstyle << endl;

	delete[] cstyle;
	cstyle = nullptr;

	return 0;
}