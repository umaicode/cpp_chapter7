//7��-3.BD-USE.CPP
//class BirthDate�� ��� ��
//class BirthDate�� class Date�� ���Ǹ� �����Ѵ�
#include <iostream>
//#include "7��-1-1.DATE3.h"
#include "7��-1.BIRTHDAY.h"
using namespace std;
void main(){
    int m, d, y;
    struct days  dx;
	cout<<"Enter days(month, day, year): "<<endl;
    cin>>dx.month>>dx.day>>dx.year;
    Date today (dx.month, dx.day, dx.year);

    //�¾ ������ �����ϰ� �Է��Ѵ�.
    cout << endl;
    cout << "Input your birthdate:" << endl;
    cout << "Month (number): ";
    cin >> m;
    cout << "Day: ";
    cin >> d;
    cout << "Year: ";
    cin >> y;
    BirthDate birth(m, d, y);

    //�� ���� ������ ����Ѵ�. ���̿� ���� ���ϱ����� ���� �� ��
    cout << endl;
    cout << "You are " << (birth.Age (today)) << " years old"  << endl;
	birth.PrintDate();
	
    if (birth.Birthday (today))
        cout << "Today is your birthday. Congratulations!"  << endl;
  	system("pause");
} 