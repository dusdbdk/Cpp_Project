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
    cout << "■■■■■■■■■■■■■■■■■\n";
	cout << "■                              ■\n";
    cout << "■   컴퓨터와 가위바위보 게임   ■\n";
	cout << "■                              ■\n";
    cout << "■■■■■■■■■■■■■■■■■\n\n";  
}  

class Player { 
    public:  
    string Choice;
    string Hand() {
	while(true) {  
        cout << "가위, 바위, 보를 입력해주세요. \n\n";
        cout << "종료를 입력하시면 게임이 종료됩니다. : "; 
        cin >> Choice;
        	if (Choice == "가위") {
        	return Choice;
        	break;
       		}
			else if (Choice == "바위") {
        	return Choice;
			break;
			}	
			else if (Choice == "보") {
        	return Choice;
        	break;
    		}
    		else if (Choice == "종료") {
        	return Choice;
        	break;
    		}
    		else {
    		cout << "\n잘못 입력하셨습니다. \n\n";
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
			ComChoice = "가위";
			return ComChoice;
		}
		else if (random == 2) {
			ComChoice = "바위";
			return ComChoice;
		}
		else if (random == 3) {
			ComChoice = "보";
			return ComChoice;
		}
    } 
};  
  
class Judge {
    public:  
    string result; 
    string Result(string PlayerChoice, string ComChoice) {
        if( PlayerChoice == "가위" && ComChoice == "가위") {
            result = "DRAW";
            return result;
        }
        else if(PlayerChoice == "가위" && ComChoice == "바위") {
            result = "LOSE";
            return result;
        }
        else if(PlayerChoice == "가위" && ComChoice == "보") {
            result = "WIN";
            return result;
        }
        else if(PlayerChoice == "바위" && ComChoice == "가위") {
            result = "WIN";
            return result;
        }
        else if(PlayerChoice == "바위" && ComChoice == "바위") {
            result = "DRAW";
            return result;
        }
        else if(PlayerChoice == "바위" && ComChoice == "보") {
            result = "LOSE";
            return result;
        }
        
        else if(PlayerChoice == "보" && ComChoice == "가위") {
            result = "LOSE";
            return result;
        }
        else if(PlayerChoice == "보" && ComChoice == "바위") {
            result = "WIN";
            return result;
        }
        else if(PlayerChoice == "보" && ComChoice == "보") {
            result = "DRAW";
            return result;
    	}
	}

  
    void Hands(string PlayerChoice, string ComChoice) {
		cout << "\n■■■■■■■ 결과 ■■■■■■■\n\n";
        cout << "플레이어는 '" << PlayerChoice << "', 그리고 컴퓨터는'" << ComChoice << "'를 냈습니다. \n\n";  
    } 
  
    void TheWinnerIs() {
        if(result == "DRAW") {
            cout << "무승부입니다- \n\n"; 
    	}
        else if(result == "WIN") {
            cout << "☆ 당신이 이겼습니다! ★\n\n"; 
            score += 1 ;
            victories += 1 ;
        }
        else if(result == "LOSE") {
            cout << "컴퓨터가 이겼습니다.. 연승이 초기화됩니다.. \n\n" ; 
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
            cout << "☆★☆★☆★☆★☆★☆\n";
            cout << "★ 최고 연승 갱신!! ★\n";
            cout << "☆★☆★☆★☆★☆★☆\n\n";
        	}
		cout << "■■■■ ScoreBoard ■■■■ \n";
		cout << "■                        ■ \n";
		cout << "     플레이어 점수 " << score << "점 \n";
		cout << "     컴퓨터의 점수 " << defeat << "번 \n";
				if (score == 0 && defeat == 0) {
			cout << "          승률 - % \n" ;
		}
		else {
			float(WinPer) = float(score) / (float((score) + float(defeat))) * 100;
			cout.precision(4);
			cout << "         승률 " << float(WinPer) << "% \n";
		}
		cout << "          "<< victories << "연승 중 \n";
		cout << "      최대 연승: " << MaximumVic << "연승\n"; 
		cout << "■                        ■\n";
		cout << "■■■■■■■■■■■■■■\n\n";
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
		if(PlayerChoice == "종료") {
            cout << "\n게임을 종료합니다.\n";  
            break;
    	}
        ComChoice = computer.Hand();
        judge.Hands(PlayerChoice, ComChoice);
        judge.Result(PlayerChoice, ComChoice); 
        judge.TheWinnerIs();
        scoreboard.ShowScore();
	}
}
