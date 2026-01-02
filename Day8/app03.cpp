#include<iostream>
#include<string>
using namespace std;

int main() {
	string str1 = "Inha";
	string str2 = "Inha";
	string str3 = "Hi, Inha";

	// 4번 위치부터 4개를 부분 추출
	string capture = str3.substr(4, 4);
	cout << capture << endl;

	// 문자열 탐색, Index 값을 return 해준다.
	cout << str3.find("Inha") << endl;

	// 문자열 비교
	if (str1 == str2) {
		cout << "같다." << endl;
		cout << typeid((str1 == str2)).name() << endl;

	}
	else {
		cout << "다르다" << endl;
		cout << (str1 == str2) << endl;
	}

	//// 문자열 결합
	//str1 = str1 + str2;
	//cout << str1 << endl;
	//cout << str2 << endl;

	return 0;
}