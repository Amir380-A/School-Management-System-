#ifndef PARENT_cpp
#define PARENT_cpp
#include "parent.h"
#include <string>
#include <iostream>
using namespace std;



parent::parent(string name)
{
}


void parent::name_setter(string name)
{
    _name = name;
}

void parent::id_setter(string id)
{
    _id = id;
}

void parent::students_setter(vector<student*> students)
{
    _students = students;                                   //setter for that foreign key
}


void parent::show_grades(student *s)
{
    for (int i=0; i<s->grades_getter().size();i++)
        cout<<s->grades_getter()[i]<<endl<<endl;

    if (s->grades_getter().empty())
        cout<<"No grades yet"<<endl<<endl;
}

#endif // PARENT_cpp

