//7��-4.RECTANG.H 7.2.1 ���簢���� ���簢��
//class Rectangle�� ����
#include <iostream>
using namespace std;
class Rectangle {
private:
	//�غ�, ���� �׸��� ���� �ϴ� �𼭸��� ��ġ 
	int base, height;
	int x_pos, y_pos;

public:
	//������
	Rectangle (int b, int h, int x = 0, int y = 0){
		base = b;
		height = h;
		x_pos = x;
		y_pos = y;
	}

	int Base (){
		return base;
	}
	int Height (){
		return height;
	}
	int Perimeter (){
		return ((base + height) * 2);
	}
	int Area (){
		return (base * height);
	}

	//���簢���� �̵�
	void Moves (int delta_x, int delta_y){
		x_pos += delta_x;
		y_pos += delta_y;
	}

	//��ô�� �����Ѵ�
	void Scale (float scale){
		base *= scale;
		height *= scale;
	}
};
ostream& operator << (ostream& s, Rectangle r){
	//Base() ���� �Լ��� ������  friend�� �����ϴ� ���� �ʿ��ϴ�.
	s << "Rectangle: Base = " << r.Base () << ", Height = " 
		<< r.Height () << endl;
	s << "\tArea = " << r.Area () << ", Perimeter = " << r.Perimeter () << endl;
	return s;
}