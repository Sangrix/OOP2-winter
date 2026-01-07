#include "dynamicarray.h"
#include "myexception.h"
using namespace std;

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size) :size(size)
{
	try {
		//this->size = size;
		cout << this << " 동적배열 객체를 생성. 힙메모리 할당\n";
		ptr = new int[size];
		throw MyException(1000, "메모리 오류\n", this);
		//cout << this << " 동적배열 객체를 생성. 힙메모리 할당\n";
		cout << this << "이 부분은 실행 안됨!\n";
	}
	catch (...) {
		delete[] ptr;
		ptr = nullptr;
		cout << this << "객체 생성 실패! 자원해제\n";
		throw;
	}
	cout << "객체 생성 완료\n";

}

DynamicArray::~DynamicArray()
{
	cout << "동적배열 객체 소멸. 메모리를 정리합니다.\n";
	delete ptr;
	ptr = nullptr;
}

void DynamicArray::setAt(int value, int index)
{
	if ((index < 0) || (index >= size)) {
		// throw 4885; // 정수를 throw
		//throw "인덱스의 범위를 벗어나 값을 할당할 수 없습니다. 4885\n";
		throw MyException(4885, "인덱스의 범위를 벗어나 값을 할당할 수 없습니다.", this);
	}
	cout << "힙 메모리 " << index << "번 위치의 값 " << value << "할당\n";
	ptr[index] = value;
}

int DynamicArray::getAt(int index)
{
	if ((index < 0) || (index >= size)) {
		//throw 4886; // 정수를 throw
		//throw "인덱스의 범위를 벗어나 값을 꺼낼 수 없습니다. 4886\n";
		throw MyException(4886, "인덱스의 범위를 벗어나 값을 꺼낼 수 없습니다.", this);
	}

	return ptr[index];
}


