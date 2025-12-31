#include<iostream>
#include<functional>
using namespace std;
// 익명함수, 함수 객체 생성
// 함수 포인터와 함수객체의 장점을 지닌다.
// 캡쳐 블록을 통해 함수 밖의 변수에 접근할 수 있고,
// & 기호를 통해 람다함수 안에서도 외부 변수의 값을 참조하여 변경할 수 있다.
// 재귀 호출도 가능하다. (type 명시를 위한 functional 라이브러리를 통해서)


int main() {
	// 람다에서 재귀를 구현할 때 auto 타입으로는 추론 불가
	// 추론을 하려면 컴파일러가 auto가 넘어올 값을 보고 해야하는데, 보기도 전에 안쪽에서 자기 자신을 호출
	// auto가 알기 전 단계에서 계속 call을 하는 상황임
	// 반드시 대입하려고 하는 함수의 타입이 명시되어야 함

	 function<int(int)> fact = [&fact](int number) -> int {
		 return number <= 1 ? 1 : number * fact(number - 1);
		 
		 /*if (number <= 1)
			return 1;
		else
			return number * fact(number - 1);*/
		};

	 cout << fact(5) << endl;

	return 0;
}