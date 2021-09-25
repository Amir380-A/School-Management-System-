#ifndef DATETIME_H
#define DATETIME_H
#include <iostream>
using namespace std;

class dateTime
{

    int _year;
    int _month;
    int _day;
    double _hour;

    public:
    dateTime();

    inline dateTime (int d, int m, int y, double h);
    inline void getter_date_time();
    int getter_year(){return _year;}
    int getter_month(){return _month;}
    int getter_day(){return _day;}
    double getter_hour(){return _hour;}

    inline void date_time_setter();



};

#endif // DATETIME_H
