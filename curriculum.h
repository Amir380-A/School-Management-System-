#ifndef CURRICULUM_H
#define CURRICULUM_H
#include <string>
#include <iostream>
using namespace std;

class dateTime;
class teacher;
class courses;

class curriculum
{
    protected:
    string _name;
    string _content;
    dateTime *_date;
    teacher *_author;
    courses *_course;

    public:
    inline void modify();



};




#endif //CURRICULUM_H
