#ifndef TEACHER_cpp
#define TEACHER_cpp
#include "teacher.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;


teacher::teacher(string name){}

void teacher::name_setter(string name)
{
    _name = name;
}
void teacher::id_setter(string id)
{
    _id = id;
}

void teacher::courses_setter(vector<courses*> courses)
{
    _courses = courses;                                         //setter for these foreign keys
}


void teacher::addLecture(lectrue *l, string name ,string content, teacher *author, courses *course)
{
    l->name_setter(name);
    l->content_setter(content);
    l->author_setter(author);
    l->course_setter(course);
}


void teacher::addQuiz(Quiz *q, string name ,string content, string model_answers, dateTime *date, int quiz_time_limit,
                      teacher *author, courses *course)
{
    q->name_setter(name);
    q->content_setter(content);
    q->content_M_answers_setter(model_answers);
    q->date_time_setter(date);
    q->quiz_time_limit_setter(quiz_time_limit);
    q->author_setter(author);
    q->course_setter(course);
}


void teacher::addAssignment(assignment *a, string name ,string content, string model_answers, dateTime *date,
                      teacher *author, courses *course)
{
    a->name_setter(name);
    a->content_setter(content);
    a->content_M_answers_setter(model_answers);
    a->date_time_setter(date);
    a->author_setter(author);
    a->course_setter(course);
}


void teacher::modifyQuiz(Quiz *q, int lines)
{
    q->modify(lines);
}

void teacher::modifyLecture(lectrue *l)
{
    l->modify();
}

void teacher::modifyAssignment(assignment *a, int lines)
{
    a->modify(lines);
}

#endif // TEACHER_cpp
