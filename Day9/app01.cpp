#include "dynamicarray.h"
int main() {
	DynamicArray da1(5);

	try {
		da1.setAt(100, 3);
		cout << da1.getAt(3) << '\n';
		cout << da1.getAt(9) << '\n'; // 할당되지 않은 메모리 접근 (에러: 4886)
		da1.setAt(-99, 7); // out of heap memory scope (에러:4885)
	}
	/*catch (int err) {
		cout << "인덱스의 범위가 벗어났습니다. (에러코드 : " << err << ")" << '\n';
	}*/
	catch (const char* err) {
		cout << err;
	}

	return 0;
}