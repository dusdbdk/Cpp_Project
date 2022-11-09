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
    cout << left << "부터" << right-1 << "까지의 랜덤수를 구하고 합을 구합니다." << endl;
        for (int i = 0; i < 10; i++) {
        cout << random[i] << endl;
        sum += random[i];
        random[i] = rand() % right;
    }
    cout << "랜덤 수들의 합은 " << sum << "입니다." << "\n\n";
    random[i] = rand() % right;
}

Random::Prime() {
	cout << "다시 " << left << "부터" << right-1 << "까지의 랜덤수를 구하고 그 중 소수와 소수가 아닌 수를 구하고 합을 구합니다." << endl;
	for (int w = 0; w < 10; w++) {
		for(q = 2; q < random[i]; q++) {
			if(random[i] % q == 0) 
				break; 
		}
			if (q == random[i]) {
				cout << random[i] << "은(는) 소수입니다." << "\n"; 
				PrimeSum += random[i];
				random[i] = rand() % right;
		}
			else {
				cout << random[i] << "은(는) 소수가 아닙니다." << "\n"; 
				CompositionSum += random[i];
				random[i] = rand() % right;
		}
	}
		cout << "소수의 합은" << PrimeSum << "입니다." << "\n";
		cout << "소수가 아닌 수의 합은" << CompositionSum << "입니다." << "\n";
}
