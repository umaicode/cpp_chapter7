//7��-9.RECTCOL.CPP
//class ColorRect�� ��� ��
#include "7��-8.RECCOL.h"
void main(){
    //color ���簢���� ����
    ColorRect cr (10, 15, 5);
    cout << "This rectangle has color" << endl;
    cout << cr << endl;
    
    //color�� �����Ѵ�
    cr.Color (8);
    cout << "The color has changed" << endl;
    cout << cr << endl;
	system("pause");
}