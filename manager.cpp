#ifndef MANAGER_cpp
#define MANAGER_cpp
#include "manager.h"
#include <string>
#include <iostream>
using namespace std;



manager::manager(string name, string id)
{
    _name = name;
    _id = id;
}

void manager::addCourses(courses *course, string name, dateTime *date,teacher *teacher)
{
    course->name_setter(name);
    course->date_time_setter(date);
    course->teacher_setter(teacher);

}

void manager::addTeacher(teacher *t,string name, string id)
{
    t->name_setter(name);
    t->id_setter(id);
}

void manager::addParent(parent *p, string name, string id)
{
    p->name_setter(name);
    p->id_setter(id);
}

void manager::addStudent(student *s,string name, string id, parent *p)
{
    s->name_setter(name);
    s->id_setter(id);
    s->parent_setter(p);
}




#endif // MANAGER_cpp
