#include <iostream>
using namespace std;

class Laptop {
	private:		//���� ���¸� ���� ���·� ����
		bool gramTurnon = false;
	public:
		void Turnon();	//���� Ű�� �޼ҵ� ����
		void Program();	//���� �޼ҵ� ����
		void Turnoff();	//������ ���� �޼ҵ� ����
};

class Login {
	public:
		int PW();
		int PW2;
}; 

int main() {
	Laptop gram;	//��ü ����
	Login Mygram;	//�α����� ���̱׷����� ��ü ����(��ü�� �ߺ��Ǹ� �ȵǱ⿡)
	gram.Turnon();	//�׷� ���� Ű��
	Mygram.PW();	//�׷� ��й�ȣ Ȯ��
	gram.Program();	//�׷� ����
	gram.Turnoff();	//�׷� ����
	
	return 0; 	//����
}

void Laptop::Turnon() {	//���� ������ �޼ҵ�
	gramTurnon = true;
	cout << "gram�� �������ϴ�." << "\n";
}

int Login::PW() {		//��й�ȣ �޼ҵ�
	while(true) {
	cout << "\n" << "��й�ȣ�� �Է��ϼ���. (4�ڸ� �����Դϴ�.)" << "\n\n";
	cin >> PW2;
		if (PW2 != 1234) {
			cout << "\n" << "��й�ȣ�� Ʋ�Ƚ��ϴ�." << "\n\n";
		}
		else {
			cout << "\n" << "�α��� �Ϸ�!" << "\n\n";
			break; 
			}
		}
	}

void Laptop::Program() {		//���� �޼ҵ�2
	int program;
	cout << "������ �Ͻðڽ��ϱ�?" << "\n\n";
	cout << "1. ������ ��û" << " 2. ���� ����" << " 3. ���� ����" << " 4. �˻�" << " 5. �ڵ�" << " 0. gram ����" << "\n\n";
	cin >> program;
	cout << "\n";
		switch (program) {
		case 1:
			cout << "������ ��û�� �����մϴ�." << "\n\n" << "������ ��û��.." << "\n\n" << "������ ��û�� �����մϴ�." << "\n\n";
			break;
		case 2:
			cout << "������ �����մϴ�." << "\n\n" << "���� ��.." << "\n\n" << "������ �����մϴ�." << "\n\n";
			break;
		case 3:
			cout << "���� ������ �����մϴ�." << "\n\n" << "���� �÷��� ��.." << "\n\n" << "���� ������ �����մϴ�." << "\n\n";
			break;
		case 4:
			cout << "�˻��� �����մϴ�." << "\n\n" << "�˻���.." << "\n\n" << "�˻��� �����մϴ�." << "\n\n";
			break;
		case 5:
			cout << "�ڵ��� �����մϴ�." << "\n\n" << "�ڵ���.." << "\n\n" << "�ڵ��� �����մϴ�." << "\n\n";
			break;
		case 0:
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << "\n\n";
			break;
	}
}

void Laptop::Turnoff() {	//���� ������ �޼ҵ�
	gramTurnon = false;
	cout << "gram�� �����ϴ�.";
}