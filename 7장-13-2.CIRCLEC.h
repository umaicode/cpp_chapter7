//7��-13-2.CIRCLEC.H
//class Circle�� Color�� ��ӵ� (���� ���)
//class ColorCircle�� ����
#include<iostream>
using namespace std;
#include "7��-13.CIRCLE.h"
#include "7��_13-1.COLOR.h"
class ColorCircle: public Circle, Color{
public:
    ColorCircle (int x, int y, int r = 20, int c = Color::RED) :
    Circle (x, y, r), Color (c){ 
        cout << endl << "ColorCircle:: constructor is called" << endl;
    }
    void Paint ( ){
        Circle :: Paint ( ) ;
        cout << ", the color number is " << Color::Col ( ) ;
    }
    void operator ++ ( ){
        Color :: operator++ ( ) ;
        Circle :: operator++ ( ) ;
    }
};