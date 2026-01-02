// 에러 메세지의 번호를 적어서 해당 warning을 무시하고 실행
#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char src[] = "Inha";
	// c언어에서 사용하는 문자열 길이를 확인하는 stringlength 함수
	int len = strlen(src);
	cout << len << endl;

	// null 문자를 고려 len+1 동적할당
	// 복사할 공간을 동적할당
	char* dest = new char[len + 1];

	// 문자열 복사 함수(목적지, 원본)
	// c언어에서 쓰던 함수를 그대로 써서 warning이 뜸
	// strcpy_s를 사용하거나, warning을 무시하도록(보안 문제 주의) 하고 컴파일
	strcpy(dest, src);

	cout << src << endl;
	cout << dest << endl;

	delete[] dest;
	dest = nullptr;

	return 0;
}