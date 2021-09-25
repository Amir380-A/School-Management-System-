#ifndef CENTERCLASS_H
#define CENTERCLASS_H
#include <string>
#include <iostream>
#include "dateTime.cpp"
#include "assignment.cpp"
#include "teacher.cpp"
#include "lectrue.cpp"
#include "manager.cpp"
#include "student.cpp"
#include "parent.cpp"
#include "courses.cpp"
#include "Quiz.cpp"
using namespace std;


class CenterClass
{
    int choice;



    public:
    CenterClass();

    inline void am_student(student *s, Quiz *q, assignment *a);
    inline void am_teacher(teacher *t, lectrue *l, courses *c, Quiz *q, dateTime *dt1, assignment *a);
    inline void am_parent(parent *p, student *s);
    inline void am_manager(manager *m, parent *p, student *s, teacher *t, courses *c, dateTime *dt);

};


#endif //CENTERCLASS_H
