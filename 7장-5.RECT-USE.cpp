//7��-5.RECT-USE.CPP 7.2.1 ���簢���� ���簢��
//class Rectangle�� ��� ��
#include "7��-4.RECTANG.h"
void main(){
    //�ϳ��� ���簢�� ����
    Rectangle rect (10, 18);
    cout << "This is the rectangle" << endl;
    cout << rect << endl;    
    //���簢���� ũ�⸦ �ι�� �����Ѵ�
    rect.Scale (2);
    cout << "
        The rectangle has doubled" << endl;
    cout << rect << endl;    
    //���簢���� �����ϴ� ����
    Rectangle square (22, 22, 12, 35);
    cout << "Here is a square" << endl;
    cout << square << endl;
	system("pause");
}