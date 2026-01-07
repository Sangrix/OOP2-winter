#include<iostream>
#include<string>
using namespace std;

template <typename T>
T smaller(T fst, T scd) {
	if (fst < scd){
		return fst;
	}
	return scd;
}

int main() {

	string letter = string("abc");
	cout << letter << endl;

	cout << "a and B 비교: " << smaller('a', 'B') << endl;
	cout << "12 and 15 비교: " << smaller(12, 15) << endl;
	cout << "12.1 and 13 비교: " << smaller<double>(12.1, 13) << endl;
	cout << "41.2 and 33.1 비교: " << smaller(41.2, 33.1) << endl;
	cout << smaller("Hello", "Bi") << endl;

	return 0;
}