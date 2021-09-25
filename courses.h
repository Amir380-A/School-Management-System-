#ifndef COURSES_H
#define COURSES_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class lectrue;
class teacher;
class assignment;
class dateTime;
class student;
class Quiz;

class courses
{
    string _name;
    double _fees;
    dateTime *_date;
    teacher *_teacher;
    vector<lectrue*> _lectures;
    vector<assignment*> _assignments;
    vector<student*> _students;
    vector<Quiz*> _quizzes;


    public:
    courses();

     inline courses(string name);

     string name_getter(){return _name;}
     dateTime *date_getter(){return _date;}
     teacher *teacher_getter(){return _teacher;}
     vector<lectrue*> lectures_getter(){return _lectures;}
     vector<assignment*> assignments_getter(){return _assignments;}         //getters
     vector<student*> students_getter(){return _students;}
     vector<Quiz*> quizzes(){return _quizzes;}


     inline void name_setter(string name);
     inline void lectures_setter(vector<lectrue*> lectures);               //setters
     inline void assignment_setter(vector<assignment*> assignments);
     inline void date_time_setter(dateTime *dt);
     inline void students_setter(vector<student*> students);
     inline void teacher_setter(teacher *teacher);
     inline void quizzes_setter(vector<Quiz*> quizzes);



};

#endif // COURSES_H
