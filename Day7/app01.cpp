# include<iostream>
using namespace std;

class UndergraduateStudent {
public:
	void warn() {
		cout << "학사경고\n";
	}
};

class DormitoryStudent {
public:
	void warn() {
		cout << "벌점부여\n";
	}
};

class UdnergraduateDormitoryStudent : public UndergraduateStudent, public DormitoryStudent {

};

int main() {
	UdnergraduateDormitoryStudent uds;
	// uds.warn(); //ambiguous
	uds.DormitoryStudent::warn();

	return 0;
}