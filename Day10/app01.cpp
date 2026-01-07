#include "dynamicarray.h"
#include "myexception.h"

int main() {

	try {
		DynamicArray da1(5);
		DynamicArray da2(99);
		da1.setAt(100, 3);
		cout << "값을 가져옵니다. " << da1.getAt(3) << '\n';
		//cout << "값을 가져옵니다. " << da1.getAt(9) << '\n'; // 할당되지 않은 메모리 접근 (에러: 4886)
		da1.setAt(-99, 7); // out of heap memory scope (에러:4885)
	}
	/*catch (int err) {
		cout << "인덱스의 범위가 벗어났습니다. (에러코드 : " << err << ")" << '\n';
	}*/
	/*catch (const char* err) {
		cout << err;
	}*/
	catch (const MyException& err) {
		cout << "에러코드 : " << err.errorCode << '\n';
		cout << "에러내용 : " << err.errorDescription << '\n';
		cout << "에러주소 : " << err.errorAddress << '\n';
	}

	return 0;
}