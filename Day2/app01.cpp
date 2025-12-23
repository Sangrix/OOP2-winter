#include <iostream>
using namespace std; 

int main() {
	int human = 0;
	// int ages[human]

	cout << "how many? ";
	cin >> human;

	// heap 메모리 할당
	int* ages = new int[human]; 

	/*cout << ages;
	cout << '\n';
	cout << &ages;
	cout << '\n';
	cout << &human;
	cout << '\n';
	cout << &test;*/


	// heap 메모리 해제
	delete[] ages;

	return 0;
}