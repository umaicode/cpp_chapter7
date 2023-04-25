//7��-2.BIRTHDAY,cpp
//class BirthDate�� member�Լ� ����.
#include <iostream>
//#include <stdio.h>
using namespace std;
#include "7��-1.BIRTHDAY.h"
int Date :: LeapYear (){
    if ( year % 4 != 0) return 0;
    else 
        if ( year % 100 != 0 ) return 1;
        else if ( year % 400 != 0 ) return 0;
        else return 1;
}
int Date :: DaysInMonth (){
        switch (month) {
        case 2:
            if ( LeapYear () ) return 29;
            else return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
		}
}
void Date :: IncreaseDate (){
    if ( day < DaysInMonth () )
        day ++;
    else 
        day = 1;
    if ( month != 12 ) month ++;
    else 
         month = 1;
         year ++;
}
void Date :: PrintDate (){
    cout << endl << "Date : " << month << "/" << day << "/"<< year;

}
void Date :: PrintLeap (){
    cout << endl << "Year " << year;
    if ( LeapYear() ) cout << " is a leap-year";
    else cout << " is not a leap-year";
}
int BirthDate :: Age (Date d){
    Date birthday (Month (), Day (), d.Year ()); 
    /*
    int newday = day;
    int newmonth = month;
    */
    int years = (d.Year () - Year ()); //������ ���Ϸκ��� d������ �� ��
               //������ ��¥ d ���ĸ�, ���̴� �� ��¥ ���� ���� ���̺��� �۴�day
    if (birthday > d)
        years --;
    return years;
}

int BirthDate :: Birthday (Date d){
    //�� ��¥�� ���� ��ġ�ϸ� �����̴�.
    return ( (d.Day () == Day ())&& (d.Month () == Month ()) );
}

int BirthDate :: DaysToBirthday (Date d){
    int days = 0;
    //���Ͽ� ������ ������ �Ϸ縦 ��� ���Ͽ� ���ϱ��� ���� ���Ҵ����� ����Ѵ�.
    while (!Birthday (d)){
        days ++;
        d.IncreaseDate ();
    }
	cout<<"days = "<<days;
    return days;
}
int Date :: operator > (Date d){
 	if (Year() == d.Year()) if (Month() == d.Month()) return Day() > d.Day();
							else return Month() > d.Month( );
	else return Year() > d.Year();
}