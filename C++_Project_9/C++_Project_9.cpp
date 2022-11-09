#include <iostream>
using namespace std;

class Person{
	string Name;
	string Phonenum;

public:
	Person(string GetName, string GetPhonenum) {
		Name = GetName;
		Phonenum = GetPhonenum;
	}
	void MakeName(string GetName) {
		Name = GetName;
	}
	void MakePhonenum(string GetPhonenum) {
		Phonenum = GetPhonenum; 
	}
	string name() {
		return Name;
	}
	string phonenum() {
		return Phonenum;
	}
};
	
class User : public Person {
	string ID;
	string PassWord;
	string Address;

	public:
	User(string GetName, string GetPhonenum, string GetID, string GetPassWord, string GetAddress) : Person(GetName, GetPhonenum) {
		ID = GetID;
		PassWord = GetPassWord;
		Address = GetAddress;
	}
 	void UserView() {
		cout << "\n입력하신 유저 정보입니다.\n\n";
		cout << "성함: " << name() << "\n\n";
		cout << "휴대폰 번호: " << phonenum() << "\n\n";
		cout << "유저 ID: " << ID << "\n\n";
		cout << "비밀번호: " << PassWord << "\n\n";
		cout << "주소지: " << Address;
	}
};
	
int main () {
	string Name;
	string Phonenum;
	string ID;
	string PassWord;
	string Address;

	cout << "성함을 입력해주세요: ";
	cin >> Name;
	cout << "\n휴대폰 번호를 입력해주세요: ";
	cin >> Phonenum;
	cout << "\n사용하실 ID를 입력해주세요: ";
	cin >> ID;
	cout << "\n사용하실 비밀번호를 입력해주세요: ";
	cin >> PassWord;
	cout << "\n주소지를 입력해주세요: ";
	cin >> Address; 
	
	User Save(Name, Phonenum, ID, PassWord, Address);
	Save.UserView();
}
