#ifndef STUDENT_H
#define STUDENT_H
#include "human.h"
#include "Quiz.h"
#include "assignment.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class courses;
class assignment;
class parent;

class student : public human
{
    string _id;
    vector<string> _grades;
    vector<courses*> _courses;
    parent *_parent;
    vector<assignment*> _assignments;

    public:
    student();

    inline student(string name);

    string name_getter(){return _name;}
    string id_getter(){return _id;}                                             //getters
    vector<courses*> courses_getter(){return _courses;}
    parent *parent_getter(){return _parent;}
    vector<assignment*> assignments_getter(){return _assignments;}
    vector<string> grades_getter(){return _grades;}


    inline void name_setter(string name);
    inline void id_setter(string id);
    inline void parent_setter(parent* p);
    inline void courses_setter(vector<courses*> courses);
    inline void assignments_setter(vector<assignment*> assignments);
    inline void grades_setter(vector<string> grades);

    inline void solve_quiz(Quiz *q);
    inline void solve_ass(assignment *a);


};




#endif // STUDENT_H
