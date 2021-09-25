#ifndef QUIZ_h
#define QUIZ_h
#include "Q_A.cpp"
#include <string>
#include <iostream>
using namespace std;


class Quiz : public Q_A                          //quiz is part of the curriculum
{
    int _quiz_time_limit;
    public:
    Quiz();

    inline Quiz(string name);
    string name_getter(){return _name;}
    string content_getter(){return _content;}
    string content_M_answers_getter(){return _content_M_answers;}                //getters
    dateTime *date_getter(){return _date;}
    int quiz_time_limit_getter(){return _quiz_time_limit;}
    teacher *author_getter(){return _author;}
    courses *course_getter(){return _course;}


    inline void name_setter(string name);
    inline void content_setter(string content);
    inline void content_M_answers_setter(string content_M_answers);
    inline void date_time_setter(dateTime *date);
    inline void quiz_time_limit_setter(int quiz_time_limit);
    inline void author_setter(teacher *author);
    inline void course_setter(courses *course);


    inline string solve();
};





#endif // QUIZ_h
