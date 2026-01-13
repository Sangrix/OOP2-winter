#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool isEven(int value){
	return (value % 2 == 0);
}

// &를 붙이면 원본에도 변경
void timesTwo(int& value){
	value = value * 2;
}

void print(int value){
	cout << value << " ";
}

int main(){
	vector <int> vec;
	
	vec.push_back(17);
	vec.push_back(10);
	vec.push_back(13);
	vec.push_back(13);
	vec.push_back(18);
	vec.push_back(15);
	vec.push_back(17);
	vec.push_back(13);
	vec.push_back(13);
	vec.push_back(18);
	
	cout << "백터의 원본 값" << endl;
	for_each(vec.begin(), vec.end(), print);
	cout << endl << endl;
	
	cout << "10의 개수: ";
	cout << count(vec.begin(), vec.end(), 10);
	cout << endl << endl;
	
	cout << "짝수의 개수: ";
	cout << count_if(vec.begin(), vec.end(), isEven);
	cout << endl << endl;

	cout << "2제곱한 결과" << endl;
	for_each(vec.begin(), vec.end(), timesTwo);
	for_each(vec.begin(), vec.end(), print);

	return 0;
}