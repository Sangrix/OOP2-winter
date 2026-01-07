#pragma once
#include"myexception.h"
class MyMemorryException :public MyException {
public:
	MyMemorryException(int code, DynamicArray* address);
};