//7��-8.RECTCOL.H
//class Rectangle�κ��� color �簢�� class�� �����Ѵ�.
#include "7��-4.RECTANG.h"
class ColorRect : public Rectangle{
    int color;   //int�� color ��ȣ�� ��Ÿ����.
public:
    // ColorRect(int color) : color(color) {}
    // ��� ���� �Ϳ� ���� �ʵ��� ���� �ȳ־��༭ ����. ��ӹ��� �Ϳ� ���� ��� �ʵ� ���� �־���� �Ѵ�.
    
    ColorRect (int b, int a, int c = 4, int x = 0, int y = 0) : 
    Rectangle (b, a, x, y), color (c) { }
    
    // �Ķ���Ͱ� ������ �����ϴ°�.
    void Color (int c){
        color = c;
    }
    // �Ķ���Ͱ� ������ �д� ��.
    int Color () {
        return color;
    }

    //void setColor(int c) {
    //    color = c;
    //}
    //int getColor() {
    //    return color;
    //}
    // �̷��� �Լ��̸��� ���� �ܿ��� ��.
};
ostream& operator << (ostream& s, ColorRect cr){
    //Rectangle�� operator<<()�� ȣ���Ѵ�
    s << (Rectangle) cr;

    //Ư�� ������(color)�� ���
    s << "\tColor = " << cr.Color () << endl;
    return s;
}