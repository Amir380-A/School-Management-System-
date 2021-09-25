#ifndef QUIZ_cpp
#define QUIZ_cpp
#include <string>
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
#include "Quiz.h"
using namespace std;


Quiz::Quiz(string name){}


void Quiz::name_setter(string name)
{
    _name = name;
}

void Quiz::content_setter(string content)
{
    _content = content;                                             //setters
}

void Quiz::content_M_answers_setter(string content_M_answers)
{
    _content_M_answers = content_M_answers;
}

void Quiz::date_time_setter(dateTime *date)
{
    _date = date;
}

void Quiz::quiz_time_limit_setter(int quiz_time_limit)
{
    _quiz_time_limit = quiz_time_limit;
}

void Quiz::author_setter(teacher *author)
{
    _author = author;
}

void Quiz::course_setter(courses *course)
{
    _course = course;
}


string Quiz::solve()
{
    const int MAX_TIME_LIMIT = _quiz_time_limit;       //make timer in milliseconds
    int grade = 0;
    int lines=-1;

    ifstream inStream1;
    inStream1.open(_content);
    string Q;                                             //file streams to compare questions sheet with model answer sheet

    ifstream inStream2;
    inStream2.open(_content_M_answers);
    string A;

    long start_time = clock();
    while(!inStream1.eof())
	{
	    getline(inStream1,Q);
        getline(inStream2,A);                         //there is a line for every question and answer in the sheet
        ++lines;
        string ans = ask(Q);
        if (ans == A)
            ++grade;                                   //if student answer is the model answer then add the grade
	}
   long end_time = clock();
   if( end_time - start_time > MAX_TIME_LIMIT)
    {
      cout << "Time limit exceeded. You will get half the grade"<<endl;
      grade = grade/2;
    }

  cout <<"solved in "<<end_time/1000<<" seconds. Your grade is "<<grade<<endl;

  stringstream strea;
  strea<< to_string(grade)<<"/"<<to_string(lines-1);
  string grade_ = strea.str();
  return grade_;
}



#endif // QUIZ_cpp
