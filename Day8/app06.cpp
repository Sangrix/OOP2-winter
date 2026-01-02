#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
	char cstyle[3];
	string cppstyle;

	// cin으로 cstyle에 3개까지만(null 문자까지) 딱 받고, 넘어가면 cin객체의 상태를 fail로
	// getline(cin, cppstyle)을 실행하지 않음
	cin.getline(cstyle, 3); // c 스타일
	cin.clear(); // cin 객체의 상태 초기화
	getline(cin, cppstyle); // cpp 스타일

	// 1. spacebar가 구분자가 되는 문제
	// 2. cstyle은 null문자 들어가는 크기도 고려, 크기보다 큰 입력으로 런타임 에러
	/*cin >> cstyle;*/
	cin >> cppstyle;

	cout << cstyle << endl;
	cout << cppstyle << endl;

	return 0;
}