#include <iostream>
#include <string>

using namespace std;

class Player {
    string name;
public:
    void NameSet() {
        cout << "\n참가자들의 이름을 입력해주세요. : ";

        cin >> name;
    }
    string Name() {
        return name;
    }
};


class WordGame {
    string a, b;
public:
    WordGame() {
        a = "아버지";
        b = "지우개";
    }

    bool Judge() {
        int l = b.length();

        if ((b.at(l - 2) == a.at(0) && b.at(l - 1) == a.at(1)) && a != b) {
            Correct();

            return true;
        } else {
            return false;
        }
    }

    void Word() {
        cin >> a;
    }

    void Correct() {
        b = a;
    }

    int Play() {
            int playernum;

            cout << "끝말잇기 게임 인원의 수를 입력해주세요. : ";
            cin >> playernum;

            Player *n = new Player[playernum];

            for (int i = 0; i < playernum; i++) {
                n[i].NameSet();
            }

            cout << "\n시작 단어: '아버지' \n";
            int turn = 0;

            cout << "\n" << n[turn].Name() << "님의 차례입니다. : 지우개\n";
            turn++;

            while (1) {
                cout << "\n" << n[turn].Name() << "님의 차례입니다. : ";
                Word();
                if (Judge() == 0) {
                    cout << "\n" << n[turn].Name() << "님이 지셨습니다. \n";
                    break;
                }

                turn++;
                if (turn >= playernum) {
                    turn = 0;
                }
           }
     }
};


int main() {
    WordGame wordgame;
    wordgame.Play();

    return 0;
}