#include <iostream>
#include "Random.h"
#include <stdlib.h>

Random::Random() {
    srand((unsigned int)time(NULL));
    left = 0;
    right = 101;
    for (int i = 0; i < 10; i++) {
        random[i] = rand() % right;
    }
}
 
Random::Random(int l, int r) {
    srand((unsigned int)time(NULL));
    left = l;
    right = r+1;
    for (int i = 0; i < 10; i++) {
        random[i] = rand() % (right-left) + left;
    }
}
 
Random::Sum() {
    cout << left << "����" << right-1 << "������ �������� ���ϰ� ���� ���մϴ�." << endl;
        for (int i = 0; i < 10; i++) {
        cout << random[i] << endl;
        sum += random[i];
        random[i] = rand() % right;
    }
    cout << "���� ������ ���� " << sum << "�Դϴ�." << "\n\n";
    random[i] = rand() % right;
}

Random::Prime() {
	cout << "�ٽ� " << left << "����" << right-1 << "������ �������� ���ϰ� �� �� �Ҽ��� �Ҽ��� �ƴ� ���� ���ϰ� ���� ���մϴ�." << endl;
	for (int w = 0; w < 10; w++) {
		for(q = 2; q < random[i]; q++) {
			if(random[i] % q == 0) 
				break; 
		}
			if (q == random[i]) {
				cout << random[i] << "��(��) �Ҽ��Դϴ�." << "\n"; 
				PrimeSum += random[i];
				random[i] = rand() % right;
		}
			else {
				cout << random[i] << "��(��) �Ҽ��� �ƴմϴ�." << "\n"; 
				CompositionSum += random[i];
				random[i] = rand() % right;
		}
	}
		cout << "�Ҽ��� ����" << PrimeSum << "�Դϴ�." << "\n";
		cout << "�Ҽ��� �ƴ� ���� ����" << CompositionSum << "�Դϴ�." << "\n";
}
