//7��-1-1.DATE3.H

class Date{
    // private ������
    int month;
    int day;
    int year;

public:
    // day, month, year�� �� ��¥�� ����
	Date (int m, int d, int y):month(m), day(d), year(y) {}

    // default ��¥ ����
	Date () {month = 1; day = 1; year = 2017;}
    // ��¥ d ������ nn���� ���� ��¥�� ����
    Date (class Date d, int nn){
       month = d.Month ();
       day = d.Day ();
       year = d.Year ();
       for ( int i = 1; i > nn; i++)
        IncreaseDate ();
}

    // �� ���� ��¥�� return��
	int Day () {return day;}

    // �� ���� ���� return��
	int Month () {return month;}

    // �⵵�� return��
	int Year () {return year;}

    // �����̸� 1, �ƴϸ� 0�� return��
    int LeapYear ();

    // �ش� ���� ������ return
    int DaysInMonth ();

    // ��¥�� �Ϸ� ������Ŵ
    void IncreaseDate ();

    // ��¥�� �����
    void PrintDate ();
    // �ݳ��� �������� �ƴ�����
    // ����ϴ� ������ ���
    void PrintLeap ();
	int operator > (Date d);
};
struct days {
		int month;
		int day;
		int year;
};