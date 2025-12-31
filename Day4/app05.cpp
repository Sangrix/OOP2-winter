#include <iostream>
using namespace std;

int main() {

	int* p;
	int length;
	int total = 0;
	double average;

	cin >> length;
	p = new int[length]; // 동적 메모리 할당

	for (int i = 0; i < length; i++) {
		// cin >> *(p+i);
		cin >> p[i];
	}

	for (int i = 0; i < length; i++) {
		total = total + p[i];
	}

	average = total / (double) length; // casting
	cout << total << endl;
	cout << average << endl;

	delete[] p; // 사용한 메모리 해제
	p = nullptr;

	return 0;
}