// 에러 메세지의 번호를 적어서 해당 warning을 무시하고 실행
#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char str1[10] = "I";
	char str2[] = "J";
	
	// 문자열 비교
	// 비교해서 같으면 0, 다르면 1 또는 -1
	if (strcmp(str1, str2) == 0) {
		cout << "같다" << endl;
		cout << strcmp(str1, str2) << endl;
	}
	else {
		cout << "다르다" << endl;
		cout << strcmp(str1, str2) << endl;
	}

	// 문자열 결합
	/*strcat(str1, str2);
	cout << str1 << endl;
	cout << str2 << endl;*/

	return 0;
}