
//7��-12 baseDerived.cpp
#include <iostream>
using namespace std;
class Base{
public:
    int first;
    int second;
	//int GetFourth() { return fourth; }
protected:
    int third;
private:
    int fourth;
};
	
class Derived : protected Base{
private:
    int fifth;
public:
	void show() {
		cout << third;
		//cout << fourth;//Base::fourth�� ���� ����-�ذ� �����?
		//cout << GetFourth();
	}
};
void main() {
    cout<<"Size of Base : "<<sizeof(Base)<<endl;
    cout<<"Size of Derived : "<<sizeof(Derived)<<endl;
	Derived d;
	//cout << d.first;//first�� protected�� �����
	system("pause");
}