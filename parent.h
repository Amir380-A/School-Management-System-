#ifndef PARENT_H
#define PARENT_H
#include "human.h"
#include "student.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class student;

class parent : public human                                      //parent has human variables
{

    vector<student*> _students;

    public:
    parent();

    inline parent(string name);
    string name_getter(){return _name;}                               //getters
    string id_getter(){return _id;}
    vector<student*> students_getter(){return _students;}

    inline void name_setter(string name);
    inline void id_setter(string id);
    inline void students_setter(vector<student*> students);
    inline void show_grades(student *s);

};







#endif // PARENT_H
