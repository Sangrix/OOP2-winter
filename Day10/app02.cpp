#include<iostream>
#include<stdexcept>
using namespace std;

int main() {

	try {
		int* p = new int[0xffffffffff];
		delete p;
		p = nullptr;
	}
	catch (bad_alloc msg) {
		cout << msg.what()<<'\n'; // 자바의 tostring()과 동일한 역할 = .what()
	}

	return 0;
}