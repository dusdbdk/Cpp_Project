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
        	cout << "�̸�: " << name << "\n";
			cout << "����: " << age << "�� \n"; 
			cout << "�ּ�: " << address << "\n";
			cout << "Ű: " << height << "cm \n";
			cout << "������: " << weight << "kg \n\n"; 
        }
        void Year_later(int a, string b, int e) { 
			age = a; 
			address = b;
			weight = e; 
		}
		~Person() { 
			cout << name << "�� ������ �����˴ϴ�." << endl; 
		}
};

int main(void) {
    Person JunHyuk("����", 24, "����� ������", 180, 71);
    Person Aeri("��ģ", 20, "����� ������", 160, 48);

    JunHyuk.Print();
    Aeri.Print();
    JunHyuk.Year_later(25, "��⵵ ���� �ϻ굿��", 73);
    Aeri.Year_later(21, "��⵵ ���ֽ�", 47);
    JunHyuk.Print();
    Aeri.Print(); 
    
    return 0;
}