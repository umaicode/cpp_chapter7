//7��_13-1.COLOR.H                       07/CIRCLE
//class Color�� ����
#include<iostream>
using namespace std;
class Color{
    int color;
public:
    //color�� ���� � local ����� �����Ѵ�.
    enum {BLACK, RED, BLUE, GREEN, YELLOW, WHITE};
    Color (int c = BLACK) : color (c) { 
        cout << endl << "Color ::constructor: color = " << color << endl;
    }

    //private �����͸� �аų� �����ϴ� �Լ�
    int Col (){
        return color ;
    }
    void Col (int c){
        color = c ;
    }

    //���� ������(������ �����ڸ� ����Ѵ�)
    int operator++ (){
        color = (color + 1) % (WHITE + 1);
        return color;
    }
};