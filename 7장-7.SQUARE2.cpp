//7��-7.SQUARE2.CPP
//class Rectangle�κ��� class Square�� ����
//(�� ��° version)
#include "7��-4.RECTANG.h"
class Square : public Rectangle{
public:
	Square (int side, int x_pos = 0, int y_pos = 0) :      Rectangle (side, side, x_pos, y_pos){ }

	//ȿ������ ���� �����ǵ� �Լ�
	//Rectangle�� ���� �ѷ� ���̴� (base+height)*2�� ���Ǿ���.
	int Perimeter (){
		return (Base() * 4) ;
	}

	//�߰��� �Լ�(�̰��� ���簢���� �������� ����̴�.)
	float Diagonal (){
		return Base () * 1.4142 ;
	}
} ;
ostream& operator << (ostream& s, Square sq){
	//class Rectangle�� member �Լ��� ����ϴ� ����
	s << "Square: Side = " << sq.Base () << endl ;
	//class Square�� member �Լ��� ����ϴ� ���� 
	s << "\tDiagonal = " << sq.Diagonal () << endl ;
	//class Rectangle�� member �Լ��� ����ϴ� ���� 
	s << "\tArea = " << sq.Area () << endl ;
	//class Square���� �����ǵ�
	//class Rectangle�� member �Լ��� ����ϴ� ���� 
	s << "\tPerimeter = " << sq.Perimeter () << endl ;
	return s ;
}
void main(){
	int side ;
	cout << "Input the value of the side (or 0 to end): ";
	cin >> side;
	cout << endl;
	while (side != 0){
		Square sq (side);
		cout << sq << endl;
		//���ο� ���� ��û�Ѵ�
		cout << "Input the value of the side (or 0 to end): ";          
		cin >> side;
		cout << endl;
	}
	system("pause");
}