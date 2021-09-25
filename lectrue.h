#ifndef LECTRUE_H
#define LECTRUE_H
#include "curriculum.cpp"
#include <string>
#include <iostream>
using namespace std;

class dateTime;

class lectrue : public curriculum
{

    public:
    lectrue();

    inline lectrue(string name);
    string name_getter(){return _name;}
    string content_getter(){return _content;}
    dateTime *date_getter(){return _date;}
    teacher *author_getter(){return _author;}
    courses *course_getter(){return _course;}

    inline void name_setter(string name);
    inline void content_setter(string _content);
    inline void date_setter(dateTime *dt);
    inline void author_setter(teacher *author);
    inline void course_setter(courses *course);
};




#endif //LECATRUE_H
