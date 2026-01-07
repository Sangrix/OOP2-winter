#include<iostream>
#include<string>
#include <cstring>
using namespace std;

template <typename T>
T smaller(T fst, T scd) {
	if (fst < scd){
		return fst;
	}
	return scd;
}

template <>
const char* smaller(const char* first, const const char* second) {
	if (strcmp(first, second) < 0) {
		// -1이면 두 문자열은 다르고, first가 더 작은 값
		return first;
	}
	return second;
}

int main() {

	string letter = string("abc");
	cout << letter << endl;

	cout << "a and B 비교: " << smaller('a', 'B') << endl;
	cout << "12 and 15 비교: " << smaller(12, 15) << endl;
	cout << "12.1 and 13 비교: " << smaller<double>(12.1, 13) << endl;
	cout << "41.2 and 33.1 비교: " << smaller(41.2, 33.1) << endl;
	cout << smaller("Hello", "Bi") << endl;

	const char* s1 = "Bye";
	const char* s2 = "Bye Bye";
	cout << "s1과 s2 비교 " << smaller(s1, s2) << endl;

	return 0;
}