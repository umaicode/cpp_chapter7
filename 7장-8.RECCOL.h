//7장-8.RECTCOL.H
//class Rectangle로부터 color 사각형 class를 유도한다.
#include "7장-4.RECTANG.h"
class ColorRect : public Rectangle{
    int color;   //int는 color 번호를 나타낸다.
public:
    // ColorRect(int color) : color(color) {}
    // 상속 받은 것에 대한 필드의 값을 안넣어줘서 오류. 상속받은 것에 대한 모든 필드 값을 넣어줘야 한다.
    
    ColorRect (int b, int a, int c = 4, int x = 0, int y = 0) : 
    Rectangle (b, a, x, y), color (c) { }
    
    // 파라미터가 있으면 변경하는거.
    void Color (int c){
        color = c;
    }
    // 파라미터가 없으면 읽는 거.
    int Color () {
        return color;
    }

    //void setColor(int c) {
    //    color = c;
    //}
    //int getColor() {
    //    return color;
    //}
    // 이러면 함수이름을 많이 외워야 함.
};
ostream& operator << (ostream& s, ColorRect cr){
    //Rectangle의 operator<<()을 호출한다
    s << (Rectangle) cr;

    //특정 데이터(color)를 출력
    s << "\tColor = " << cr.Color () << endl;
    return s;
}