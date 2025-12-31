#include<iostream>
using namespace std;

int main() {

	// power 변수에 람다 함수를 담는 것
	// 람다 함수 바디 뒤에 ()를 직접 붙여주면 1회성 결과를 변수에 담는 것
	/*auto power = [](int base, int expo) -> int {
		
		int result = 1;
		for (auto i = 1; i <= expo; i++) {
			result = result * base;
		}

		return result;
		}(2,8);

	cout << power << endl;
	cout << typeid(power).name() << endl;*/


	// power 변수에 람다 함수를 담는 것
	// power를 마치 함수 이름인 것처럼 쓰는 것
	auto power = [](int base, int expo) -> int {

		int result = 1;
		for (auto i = 1; i <= expo; i++) {
			result = result * base;
		}

		return result;
		};

	cout << power(2, 8) << endl;
	cout << power(4, 2) << endl;
	cout << typeid(power).name() << endl;

	return 0;
}