//7��-1.BIRTHDAY.h 
#include "7��-1-1.DATE3.h" 

class BirthDate : public Date{
    //���ο� private �����͵��� �̰����� ����� �� �ִ�
public:
    BirthDate (int m, int d, int y) :
    Date (m, d, y){}

    //���� ���Ϸκ��� ��¥ d ������ ��� ���̸� return �Ѵ�
    //(��, ����κ��� �¾ �ر����� �� ��)
    int Age (Date d);

    //d�� �� ����� �����̶�� 1(TRUE)�� return�Ѵ�.
    int Birthday (Date d);

    // ��¥ d�κ��� ���� ���ϱ����� ��¥ ���� return �Ѵ�
    int DaysToBirthday (Date d);
};