#include "mymemorryexception.h"

MyMemorryException::MyMemorryException(int code, DynamicArray* address):MyException(code,"메모리오류", address)
{

}
