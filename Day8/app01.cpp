#include<iostream>
#include<string>
using namespace std;

int main() {
	string src = "Inha";
	string dest;

	// src는 string 객체, string 클래스가 가진 문자열 길이 구하는 함수
	cout << src.size() << endl;
	
	// 문자열 복사
	dest = src;

	cout << src << endl;
	cout << dest << endl;

	return 0;
}