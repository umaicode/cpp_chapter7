//7��-15.MAINCC.CPP
//ColorCircle ������ main �Լ� - multiple inheritance
#include <iostream>
using namespace std;
#include "7��-13-2.CIRCLEC.h"
//#include "7��-13.CIRCLE.h"
//#include "7��_13-1.COLOR.h"

int main(){
    int nRad1, nRad2 ;
    cout << "Input starting and final radius: " ;
    cin >> nRad1 >> nRad2 ;// 8 20�� �Է�
	//class ColorCircle: public Circle, Color
    for (ColorCircle cc(30, 30, nRad1, Color::RED); cc.Radius ( ) < nRad2; ++cc){
        cc.Paint ( ) ;
        cout << endl ;
    }
	system("pause");
	return 1;
}