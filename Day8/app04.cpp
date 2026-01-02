#include<iostream>
#include<string>
using namespace std;

int main() {
	char cstyle[] = "Hi~";
	string cppstyle;

	// c -> cpp는 암시적 형변환
	// 메모리 상에서 복사로, 독립적인 공간
	cppstyle = cstyle;

	cout << cppstyle << endl;

	return 0;
}