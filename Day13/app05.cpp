#include <iostream>
using namespace std;
class Print {
public:
	void operator()(int value) { cout << value; }
};

int main() {
	Print print; 
	print(43); 

	return 0;
}