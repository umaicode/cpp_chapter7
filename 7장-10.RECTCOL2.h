//7��-10.RECTCOL2.H�� �Ϻ�
#include "7��-4.RECTANG.h"
class ColorRect : public Rectangle{
    //���� ����
    int color;   //int�� color ��ȣ�� ��Ÿ����.
    void IncreaseAll (){
        ++ color; 
        //++ base;//Rectangle�� private�̹Ƿ� ���� ���Ѵ�.
        //++ height;//Rectangle�� private�̹Ƿ� ���� ���Ѵ�.
        Moves(1, 1);
    }
};