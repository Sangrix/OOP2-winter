#include <iostream>
using namespace std;

int main() {

	short* q = new short[100]; // 200byte 동적할당
	cout << q << endl;
	delete[] q;
	q = NULL; // 또는 '\0'다만, short 포인터에 char를 할당할 수 없어서 NULL만됨 
	cout << q << endl;

	int* p = new int; // 할당
	*p = 486;
	
	cout << *p << endl;

	delete p; // 해제
	// delete p; // 메모리 해제한 곳을 중복해서 delete하면 에러
	p = nullptr;

	return 0;
}