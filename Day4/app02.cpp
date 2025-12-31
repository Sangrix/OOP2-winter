#include <iostream>
using namespace std;

int main() {

	/*short c = 5, d = 7;
	auto temp = [&c, d](float a, int b) -> int {
		c = -5;
		
		return a + b + c + d;
		};*/

	/*short c = 5, d = 7;
	auto temp = [&](float a, int b) -> int {
		c = -5;
		d = 9;

		return a + b + c + d;
		};*/

	/*short c = 5, d = 7;
	auto temp = [=](float a, int b) -> int {
		c = -5;
		d = 9;

		return a + b + c + d;
		};*/

	/*short c = 5, d = 7;
	auto temp = [=](float a, int b) -> int {
		return a + b + c + d;
		}(1.9f, 2);*/

	//cout << typeid(temp).name() << endl;
	//cout << temp << endl;

	short c = 5, d = 7;
	auto temp = [=](float a, int b) -> int {
		return a + b + c + d;
	};

	cout << temp(1.9f, 2) << endl;
	cout << typeid(temp).name() << endl;

	// cout << temp(1.9f, 2) << endl;
	// cout << c << endl;

	return 0;
}