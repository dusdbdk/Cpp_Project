#ifndef RANDOM_H
#define RANDOM_H
#include<iostream>
#include<time.h>
using namespace std;
 
class Random {
    int left;
    int right;
    int random[10];
   	int w, q, i, e = 0;
   	int CompositionSum = 0;
   	int PrimeSum = 0;
   	int sum = 0;
public :
    Random();
    Random(int l, int r);
	Prime();
	Sum();
};
 
#endif