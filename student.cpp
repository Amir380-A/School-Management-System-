#ifndef STUDENT_CPP
#define STUDENT_CPP
#include "student.h"
#include <string>
#include <iostream>
using namespace std;




student::student(string name){}

void student::name_setter(string name)
{
    _name = name;
}
void student::id_setter(string id)
{
    _id = id;
}
void student::courses_setter(vector<courses*> courses)
{
    _courses = courses;                                         //setter for these foreign keys
}

void student::assignments_setter(vector<assignment*> assignments)
{
    _assignments = assignments;
}

void student::grades_setter(vector<string> grades)
{
    _grades = grades;
}

void student::parent_setter(parent *p)
{
    _parent = p;
}

void student::solve_quiz(Quiz *q)
{
    _grades.push_back(q->solve());
}

void student::solve_ass(assignment *a)
{
    _grades.push_back(a->solve());
}

#endif // STUDENT_CPP
