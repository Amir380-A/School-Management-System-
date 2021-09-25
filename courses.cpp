#ifndef COURSES_cpp
#define COURSES_cpp
#include "courses.h"
#include <string>
#include <iostream>
using namespace std;


courses::courses(string name){}

void courses::name_setter(string name)
{
    _name = name;
}
void courses::lectures_setter(vector<lectrue*> lectures)                 //setters
{
    _lectures = lectures;
}
void courses::assignment_setter(vector<assignment*> assignments)
{
    _assignments = assignments;
}
void courses::date_time_setter(dateTime *dt)
{
    _date = dt;
}
void courses::students_setter(vector<student*> students)
{
    _students = students;
}
void courses::quizzes_setter(vector<Quiz*> quizzes)
{
    _quizzes = quizzes;
}
void courses::teacher_setter(teacher *teacher)
{
    _teacher = teacher;
}


#endif // COURSES_cpp
