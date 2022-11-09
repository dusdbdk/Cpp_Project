#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
    string address;
    int height;
    int weight;
    
    public: 
        Person(string a, int b, string c, int d, int e) { 
		name = a; 
		age = b;
		address = c;
		height = d; 
		weight = e; 
		}
        void Print() {  
        	cout << "이름: " << name << "\n";
			cout << "나이: " << age << "살 \n"; 
			cout << "주소: " << address << "\n";
			cout << "키: " << height << "cm \n";
			cout << "몸무게: " << weight << "kg \n\n"; 
        }
        void Year_later(int a, string b, int e) { 
			age = a; 
			address = b;
			weight = e; 
		}
		~Person() { 
			cout << name << "의 정보가 삭제됩니다." << endl; 
		}
};

int main(void) {
    Person JunHyuk("준혁", 24, "서울시 마포구", 180, 71);
    Person Aeri("여친", 20, "서울시 강동구", 160, 48);

    JunHyuk.Print();
    Aeri.Print();
    JunHyuk.Year_later(25, "경기도 고양시 일산동구", 73);
    Aeri.Year_later(21, "경기도 양주시", 47);
    JunHyuk.Print();
    Aeri.Print(); 
    
    return 0;
}