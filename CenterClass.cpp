#ifndef CENTERCLASS_cpp
#define CENTERCLASS_cpp
#include "CenterClass.h"
#include <string>
#include <iostream>
using namespace std;


void CenterClass::am_manager(manager *m, parent *p, student *s, teacher *t, courses *c, dateTime *dt)
{
   while (true)
    {
        cout<<endl<<endl<<"Choose your manager action:"<<endl;
        cout<<"1) Add Teacher"<<endl;
        cout<<"2) Add Parent"<<endl;
        cout<<"3) Add Student"<<endl;
        cout<<"4) Add Course"<<endl;
        cin>>choice;

        if(choice == 1)
        {
            cout<<"Enter the teacher's name"<<endl;
            string name; cin>> name;
            cout<<"Enter the teacher's id"<<endl;
            string id; cin>> id;
            m->addTeacher(t, name, id);
            cout<< "Teacher is added, you can do somethings more"<<endl<<endl;
        }
        else if(choice == 2)
        {
            cout<<"Enter the parent's name"<<endl;
            string name; cin>> name;
            cout<<"Enter the parent's id"<<endl;
            string id; cin>> id;
            m->addParent(p, name, id);
            cout<< "parent is added, you can do somethings more"<<endl<<endl;
        }
        else if(choice == 3)
        {
            cout<<"Enter the student's name"<<endl;
            string name; cin>> name;
            cout<<"Enter the student's id"<<endl;
            string id; cin>> id;
            m->addStudent(s, name, id, p);
            cout<< "student is added, you can do somethings more"<<endl<<endl;
        }
        else if(choice == 4)
        {
            cout<<"Enter the course name"<<endl;
            string name; cin>> name;
            cout<<"Enter course date and time:"<<endl;
            dt->date_time_setter();
            m->addCourses(c, name, dt,t);
            cout<< "Course is added, you can do somethings more"<<endl<<endl;
        }
        else
        break;
    }
}
void CenterClass::am_teacher(teacher *t, lectrue *l, courses *c, Quiz *q, dateTime *dt, assignment *a)
{
    while (true)
    {
        cout<<endl<<endl<<"Choose your teacher action:"<<endl;
        cout<<"1) Add Lecture"<<endl;
        cout<<"2) Modify Lecture"<<endl;
        cout<<"3) Add Quiz"<<endl;
        cout<<"4) Modify Quiz"<<endl;
        cout<<"5) Add Assignment"<<endl;
        cout<<"6) Modify Assignment"<<endl;
        cin>>choice;

        if (choice == 1)
        {
            cout<<"Enter lecture title:"<<endl;
            string title; cin>> title;
            cout<<"Enter lecture file name:"<<endl;
            string content; cin>> content;
            t->addLecture(l, title, content, t, c);

            cout<< "Lecture is added, you can do somethings more"<<endl<<endl;
        }
        else if (choice == 2)
        {
            t->modifyLecture(l);
            cout<< "Lecture is modified, you can do somethings more"<<endl<<endl;
        }
        else if (choice == 3)
        {
            cout<<"Enter quiz title:"<<endl;
            string title; cin>> title;
            cout<<"Enter quiz file name:"<<endl;
            string content; cin>> content;
            cout<<"Enter quiz answers file name:"<<endl;
            string acontent; cin>> acontent;
            cout<<"Enter quiz date and time:"<<endl;
            dt->date_time_setter();
            cout<<"Enter quiz time limit:"<<endl;       //in milliseconds
            int limit; cin>> limit;

            t->addQuiz(q,title,content, acontent,dt,limit,t,c);
            cout<< "Quiz is added, you can do somethings more"<<endl<<endl;
        }
        else if (choice == 4)
        {
            cout<< "Enter Quiz number of questions"<<endl;
            int lines; cin>>lines;
            t->modifyQuiz(q, lines);
            cout<< "Quiz is modified, you can do somethings more"<<endl<<endl;
        }
        else if (choice == 5)
        {
            cout<<"Enter assignment title:"<<endl;
            string title; cin>> title;
            cout<<"Enter assignment file name:"<<endl;
            string content; cin>> content;
            cout<<"Enter assignment answers file name:"<<endl;
            string acontent; cin>> acontent;
            cout<<"Enter assignment date and time:"<<endl;
            dt->date_time_setter();

            t->addAssignment(a,title,content, acontent,dt,t,c);
            cout<< "Assignment is added, you can do somethings more"<<endl<<endl;
        }
        else if (choice == 6)
        {
            cout<< "Enter Assignment number of questions"<<endl;
            int lines; cin>>lines;
            t->modifyAssignment(a, lines);
            cout<< "Assignment is modified, you can do somethings more"<<endl<<endl;
        }
        else
        break;
    }

}

void CenterClass::am_parent(parent *p, student *s)
{
    cout<<endl<<endl<<"Student grade report:" <<endl;
    p->show_grades(s);

}

void CenterClass::am_student(student *s, Quiz *q, assignment *a)
{
    while (true)
    {
        cout<<endl<<endl<<"Choose your student action:"<<endl;
        cout<<"1) Solve Quiz"<<endl;
        cout<<"2) Solve Assignment"<<endl;
        cin>> choice;

        if(choice == 1)
        {
            s->solve_quiz(q);
            cout<< "Quiz solved, you can do somethings more"<<endl<<endl;
        }
        else if (choice == 2)
        {
            s->solve_ass(a);
            cout<< "Assignment solved, you can do somethings more"<<endl<<endl;
        }
        else
        break;
    }
}
#endif //CENTERCLASS_cpp
