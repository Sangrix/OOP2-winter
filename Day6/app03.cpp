#include <iostream>
using namespace std;

class Animal {
public:
	virtual void makeSound() {
		cout << "동물이 울음소리를 냅니다.\n";
	}
};
class Dog : public Animal {
public:
	void makeSound() override{
		cout << "멍멍\n";
	}
};
class Cat: public Animal{
public:
	void makeSound() override {
		cout << "냐옹\n";
	}
};

int main() {
	/*Animal a;
	a.makeSound();

	Dog d;
	d.makeSound();*/

	/*Animal* pa = new Animal;
	pa->makeSound();
	delete pa;

	pa = new Dog;
	pa->makeSound();
	delete pa;*/

	Animal* pa = new Dog; // upcast
	pa->makeSound();

	//Cat* pc = (Cat*)pa; //c style downcast (old)

	//원본이 Dog 타입인데, 원본 타입이 아닌 다른 Cat과 같은 타입으로 down cast를 하면 null을 가리키도록 함
	//원본 타입인 Dog으로 down cast를 하면, 정상 출력함
	Cat* pc = dynamic_cast<Cat*>(pa); // c++11 style downcast (modern)
	
	cout << pa << " / " << pc << '\n';

	pc->makeSound();

	delete pc;
	pc = nullptr;

	return 0;
}