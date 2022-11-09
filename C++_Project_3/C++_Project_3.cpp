#include <iostream>
#include <stdlib.h>
#include <time.h>
  
using namespace std;  

int score = 0 ;
int defeat = 0;
int victories = 0;
int MaximumVic = 0;
float WinPer = 0;
  
void GameStart() {
    cout << "������������������\n";
	cout << "��                              ��\n";
    cout << "��   ��ǻ�Ϳ� ���������� ����   ��\n";
	cout << "��                              ��\n";
    cout << "������������������\n\n";  
}  

class Player { 
    public:  
    string Choice;
    string Hand() {
	while(true) {  
        cout << "����, ����, ���� �Է����ּ���. \n\n";
        cout << "���Ḧ �Է��Ͻø� ������ ����˴ϴ�. : "; 
        cin >> Choice;
        	if (Choice == "����") {
        	return Choice;
        	break;
       		}
			else if (Choice == "����") {
        	return Choice;
			break;
			}	
			else if (Choice == "��") {
        	return Choice;
        	break;
    		}
    		else if (Choice == "����") {
        	return Choice;
        	break;
    		}
    		else {
    		cout << "\n�߸� �Է��ϼ̽��ϴ�. \n\n";
			}
    	}   
	}
};  
  
class Computer {
    public:  
    int random;
	string ComChoice;
    string Hand() {   
        random = rand()%3 + 1;  
		if (random == 1) {
			ComChoice = "����";
			return ComChoice;
		}
		else if (random == 2) {
			ComChoice = "����";
			return ComChoice;
		}
		else if (random == 3) {
			ComChoice = "��";
			return ComChoice;
		}
    } 
};  
  
class Judge {
    public:  
    string result; 
    string Result(string PlayerChoice, string ComChoice) {
        if( PlayerChoice == "����" && ComChoice == "����") {
            result = "DRAW";
            return result;
        }
        else if(PlayerChoice == "����" && ComChoice == "����") {
            result = "LOSE";
            return result;
        }
        else if(PlayerChoice == "����" && ComChoice == "��") {
            result = "WIN";
            return result;
        }
        else if(PlayerChoice == "����" && ComChoice == "����") {
            result = "WIN";
            return result;
        }
        else if(PlayerChoice == "����" && ComChoice == "����") {
            result = "DRAW";
            return result;
        }
        else if(PlayerChoice == "����" && ComChoice == "��") {
            result = "LOSE";
            return result;
        }
        
        else if(PlayerChoice == "��" && ComChoice == "����") {
            result = "LOSE";
            return result;
        }
        else if(PlayerChoice == "��" && ComChoice == "����") {
            result = "WIN";
            return result;
        }
        else if(PlayerChoice == "��" && ComChoice == "��") {
            result = "DRAW";
            return result;
    	}
	}

  
    void Hands(string PlayerChoice, string ComChoice) {
		cout << "\n�������� ��� ��������\n\n";
        cout << "�÷��̾�� '" << PlayerChoice << "', �׸��� ��ǻ�ʹ�'" << ComChoice << "'�� �½��ϴ�. \n\n";  
    } 
  
    void TheWinnerIs() {
        if(result == "DRAW") {
            cout << "���º��Դϴ�- \n\n"; 
    	}
        else if(result == "WIN") {
            cout << "�� ����� �̰���ϴ�! ��\n\n"; 
            score += 1 ;
            victories += 1 ;
        }
        else if(result == "LOSE") {
            cout << "��ǻ�Ͱ� �̰���ϴ�.. ������ �ʱ�ȭ�˴ϴ�.. \n\n" ; 
            victories = 0;
            defeat += 1 ;
		}
	}  
}; 

class ScoreBoard {
	public:
	void ShowScore() {
		if (victories > MaximumVic) {
        	MaximumVic = victories;
            cout << "�١ڡ١ڡ١ڡ١ڡ١ڡ�\n";
            cout << "�� �ְ� ���� ����!! ��\n";
            cout << "�١ڡ١ڡ١ڡ١ڡ١ڡ�\n\n";
        	}
		cout << "����� ScoreBoard ����� \n";
		cout << "��                        �� \n";
		cout << "     �÷��̾� ���� " << score << "�� \n";
		cout << "     ��ǻ���� ���� " << defeat << "�� \n";
				if (score == 0 && defeat == 0) {
			cout << "          �·� - % \n" ;
		}
		else {
			float(WinPer) = float(score) / (float((score) + float(defeat))) * 100;
			cout.precision(4);
			cout << "         �·� " << float(WinPer) << "% \n";
		}
		cout << "          "<< victories << "���� �� \n";
		cout << "      �ִ� ����: " << MaximumVic << "����\n"; 
		cout << "��                        ��\n";
		cout << "���������������\n\n";
	}
};

int main() {  
    srand(time(NULL)); 
    GameStart();
  
    Player player;
    Computer computer;
    Judge judge;
    ScoreBoard scoreboard;
  
    string PlayerChoice;
    string ComChoice;
	while(true) { 
		PlayerChoice = player.Hand();
		if(PlayerChoice == "����") {
            cout << "\n������ �����մϴ�.\n";  
            break;
    	}
        ComChoice = computer.Hand();
        judge.Hands(PlayerChoice, ComChoice);
        judge.Result(PlayerChoice, ComChoice); 
        judge.TheWinnerIs();
        scoreboard.ShowScore();
	}
}
