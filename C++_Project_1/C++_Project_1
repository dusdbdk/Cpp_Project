#include <iostream>
using namespace std;

class Laptop {
	private:		//현재 상태를 꺼짐 상태로 저장
		bool gramTurnon = false;
	public:
		void Turnon();	//전원 키는 메소드 선언
		void Program();	//동작 메소드 선언
		void Turnoff();	//전원을 끄는 메소드 선언
};

class Login {
	public:
		int PW();
		int PW2;
}; 

int main() {
	Laptop gram;	//객체 선언
	Login Mygram;	//로그인은 마이그램으로 객체 선언(객체가 중복되면 안되기에)
	gram.Turnon();	//그램 전원 키기
	Mygram.PW();	//그램 비밀번호 확인
	gram.Program();	//그램 동작
	gram.Turnoff();	//그램 끄기
	
	return 0; 	//종료
}

void Laptop::Turnon() {	//전원 켜지는 메소드
	gramTurnon = true;
	cout << "gram이 켜졌습니다." << "\n";
}

int Login::PW() {		//비밀번호 메소드
	while(true) {
	cout << "\n" << "비밀번호를 입력하세요. (4자리 정수입니다.)" << "\n\n";
	cin >> PW2;
		if (PW2 != 1234) {
			cout << "\n" << "비밀번호가 틀렸습니다." << "\n\n";
		}
		else {
			cout << "\n" << "로그인 완료!" << "\n\n";
			break; 
			}
		}
	}

void Laptop::Program() {		//동작 메소드2
	int program;
	cout << "무엇을 하시겠습니까?" << "\n\n";
	cout << "1. 동영상 시청" << " 2. 게임 시작" << " 3. 음악 감상" << " 4. 검색" << " 5. 코딩" << " 0. gram 종료" << "\n\n";
	cin >> program;
	cout << "\n";
		switch (program) {
		case 1:
			cout << "동영상 시청을 시작합니다." << "\n\n" << "동영상 시청중.." << "\n\n" << "동영상 시청을 종료합니다." << "\n\n";
			break;
		case 2:
			cout << "게임을 시작합니다." << "\n\n" << "게임 중.." << "\n\n" << "게임을 종료합니다." << "\n\n";
			break;
		case 3:
			cout << "음악 감상을 시작합니다." << "\n\n" << "음악 플레이 중.." << "\n\n" << "음악 감상을 종료합니다." << "\n\n";
			break;
		case 4:
			cout << "검색을 시작합니다." << "\n\n" << "검색중.." << "\n\n" << "검색을 종료합니다." << "\n\n";
			break;
		case 5:
			cout << "코딩을 시작합니다." << "\n\n" << "코딩중.." << "\n\n" << "코딩을 종료합니다." << "\n\n";
			break;
		case 0:
			break;
		default:
			cout << "잘못 입력하셨습니다." << "\n\n";
			break;
	}
}

void Laptop::Turnoff() {	//전원 꺼지는 메소드
	gramTurnon = false;
	cout << "gram이 꺼집니다.";
}