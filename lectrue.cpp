#ifndef LECTRUE_cpp
#define LECTRUE_cpp
#include "lectrue.h"
#include <string>
#include <iostream>
using namespace std;



lectrue::lectrue(string name){}


void lectrue::name_setter(string name)
{
    _name = name;
}
void lectrue:: content_setter(string content)
{
    _content = content;
}
void lectrue:: date_setter(dateTime *dt)
{
    _date = dt;
}

void lectrue::author_setter(teacher *author)
{
    _author = author;
}

void lectrue::course_setter(courses *course)
{
    _course = course;
}

#endif //LECTRUE_cpp
