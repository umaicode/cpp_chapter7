//7��-13.CIRCLE.H
//class Circle�� ����
#include<iostream>
using namespace std;
class Circle{
public:
    Circle(int x, int y, int r = 20) :
        X_center(x), Y_center(y), radius(r) {
        cout << endl << "Circle ::constructor: X_center = " << X_center<<" Y_center = "<< Y_center<<" radius = "<<radius<<endl;
    }
	
    //������ ��ġ�� �����Ѵ�
    void Center (int x, int y){
        X_center = x ;
        Y_center = y ;
    }
	
    //�ݰ��� �����Ѵ�
    void Radius (int r){
        radius = r ;
    }

    //private �����͸� return�ϴ� �Լ�
    int Radius (){
        return radius ;
    }

    int XCenter (){
        return X_center ;
    }

    int YCenter (){
        return Y_center ;
    }
    //circle�� paint�Ѵ�(�׷����� ����Ͽ� �װ��� paint ĥ�ؾ� �Ѵ�).
    void Paint (){
        cout << "Circle in (" << X_center << ", " << Y_center
             << "), radius is " << radius ;
    }

    //��ġ�� ũ�⸦ ������Ų��
    void operator ++ (){
        radius ++ ;
        X_center ++ ;
        Y_center++ ;
    }

//private �����ʹ� ������ x, y ��ǥ�� �ݰ��̴�
private:	
    int X_center, Y_center ;
    int radius ;
};

