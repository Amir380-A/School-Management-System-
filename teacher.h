#ifndef TEACHER_H
#define TEACHER_H
#include "human.h"
#include "Quiz.cpp"
#include "lectrue.cpp"
#include "assignment.cpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class courses;


class teacher : human                                           // teacher has human variables
{
    vector<courses*> _courses;
    vector<assignment*> _assignments;
    vector<Quiz*> _quizzes;
    vector<lectrue*> _lectrue;

    public:
    teacher();

    inline teacher(string name);
    string name_getter(){return _name;}
    string id_getter(){return _id;}
    vector<courses*> courses_getter(){return _courses;}                //getters


    inline void name_setter(string name);
    inline void id_setter(string id);
    inline void courses_setter(vector<courses*> courses);

    inline void modifyQuiz(Quiz *q, int lines);
    inline void addQuiz(Quiz *q, string name ,string content, string model_answers, dateTime *date, int quiz_time_limit,
                        teacher *author, courses *course );


    inline void addLecture(lectrue *l, string name ,string content, teacher *author, courses *course);
    inline void modifyLecture(lectrue *l);


    inline void modifyAssignment(assignment *a, int lines);
    inline void addAssignment(assignment *a, string name ,string content, string model_answers, dateTime *date,
                      teacher *author, courses *course);

};

#endif // TEACHER_H
