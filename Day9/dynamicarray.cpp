#include "dynamicarray.h"
using namespace std;

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size):size(size)
{
	cout << "동적배열 객체를 생성. 힙메모리 할당\n";
	ptr = new int[size];
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
		throw 4885; // 정수를 throw
	}
	cout << "힙 메모리 " << index << "번 위치의 값 " << value << "할당\n";
	ptr[index] = value;
}

int DynamicArray::getAt(int index)
{
	if ((index < 0) || (index >= size)) {
		throw 4886; // 정수를 throw
	}

	return ptr[index];
}


