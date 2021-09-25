#ifndef DATETIME_cpp
#define DATETIME_cpp
#include "dateTime.h"
#include <iostream>
using namespace std;

dateTime::dateTime (int d, int m, int y, double h)
{
    if ( d>31 || m>12 || y>2021 || h>23)
        cout<<"error, invalid date"<<endl;                  //Date must be valid
    else
    {
        _day = d;
        _month= m;
        _year= y;
        _hour = h;
    }

}


void dateTime:: getter_date_time()
{
    cout<<_day<<"/"<<_month<<"/"<<_year<<":"<<_hour;

}


void dateTime:: date_time_setter()
{
    cout<<"Enter day: ";cin>>_day;
    cout<<"Enter month: ";cin>> _month;
    cout<<"Enter year: "; cin>> _year;
    cout<<"Enter hour: "; cin>>_hour;

}
#endif // DATETIME_cpp
