#include<iostream>
using namespace std;

char* ReverseString(const char* src, int len) {
	// 뒤집은 내용을 저장할 배열 할당 (size가 len보다 1큰 -> 끝에 null문자 고려)
	char* rev = new char[len + 1];
	
	// len은 4임
	for (auto i = 0; i < len; ++i) {
		rev[i] = src[len - i - 1];
	}
	rev[len] = NULL;

	return rev;
}

int main() {
	char origin[] = "Inha";
	char* copy = ReverseString(origin, 4);

	cout << origin << "\n";
	cout << copy << "\n";
	
	delete[] copy;
	copy = nullptr;

	return 0;
}