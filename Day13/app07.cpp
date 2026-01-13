#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// 1. 알고리즘의 greater <int>를 쓴다.

// 2. 클래스에 functor 만듬
class Desc {
public:
	bool operator()(int a, int b) {
		return a > b ;
	}
};

// 3. 그냥 함수로 만들어서
bool descFunction(int a, int b) {
	return a > b;
}

// 4. 람다함수를 사용

void print(int value){
	cout << value << " ";
}

int main(){

	Desc desc;

	vector <int> vec;
	
	vec.push_back(17);
	vec.push_back(9);
	vec.push_back(3);
	vec.push_back(8);
	vec.push_back(5);
	vec.push_back(11);

	cout << "Original vector" << endl;
	for_each(vec.begin(), vec.end(), print);
	cout << endl << endl;

	cout << "Vector after sorting in ascending order" << endl;
	sort(vec.begin(), vec.end()); //오름차순
	for_each(vec.begin(), vec.end(), print);
	cout << endl << endl;

	// 3번째 자리가 함수가 들어가야 한다.
	
	cout << "Vector after sorting in descending order" << endl;
	//sort(vec.begin(), vec.end(), greater <int>()); // <algorithm> 사용
	//sort(vec.begin(), vec.end(), desc); // functor로 함수 호출
	//sort(vec.begin(), vec.end(), descFunction); // 일반 함수
	sort(vec.begin(), vec.end(), [](int x, int y) {return x > y; }); // 람다 함수
	for_each(vec.begin(), vec.end(), print);
	cout << endl << endl;

	return 0;
}