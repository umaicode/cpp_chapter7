//7��-6.RECT-USE.CPP  7.2.1 ���簢���� ���簢��
//class Rectangle�� ��� ��
#include "7��-4.RECTANG.h"
//file SQUARE1.CPP                                   
//class Rectangle�κ��� class Square�� ����
//(ù ��° version)

class Square : public Rectangle{
	int n;
public:
    Square (int side, int x_pos = 0, int y_pos = 0) :
		Rectangle(side, side, x_pos, y_pos) {
		n = 999;
	}
	//friend ostream& operator <<(ostream& ost, Square& sqr);
	int ReadN() { return n; }
};
//*
ostream& operator << (ostream& ost, Square& sqr)
{
	ost << (Rectangle)sqr;
	ost << sqr.ReadN() << endl;
	return ost;
}
//*/
void main (){
	Rectangle *r = new Square(2,4,5);
	cout<<"*r = "<<*r;
    Square squ (8, 12, 18);
	cout<<"squ = "<<squ;
    cout << "Square perimeter is " << squ.Perimeter () << endl;
	system("pause");
}