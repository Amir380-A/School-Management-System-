#ifndef MANAGER_H
#define MANAGER_H
#include "human.h"
#include "courses.h"
#include "teacher.h"
#include "student.h"
#include "parent.h"
#include <string>
#include <iostream>
using namespace std;

class manager : public human
{
    public:
    manager();

    inline manager(string name, string id);                 // constructor
    string name_getter(){return _name;}                     // getters
    string id_getter(){return _id;}

    inline void addCourses(courses *course, string name, dateTime *date ,teacher *teacher);

    inline void addTeacher(teacher *t,string name, string id);
    inline void addStudent(student *s,string name, string id, parent *p);
    inline void addParent(parent *p, string name, string id);
};

#endif // MANAGER_H
