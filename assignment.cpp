#ifndef ASSIGNMENT_cpp
#define ASSIGNMENT_cpp
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "assignment.h"
using namespace std;


assignment::assignment(string name){}


void assignment::name_setter(string name)
{
    _name = name;
}

void assignment::content_setter(string content)
{
    _content = content;                                             //setters
}

void assignment::content_M_answers_setter(string content_M_answers)
{
    _content_M_answers = content_M_answers;
}

void assignment::date_time_setter(dateTime *date)
{
    _date = date;
}

void assignment::author_setter(teacher *author)
{
    _author = author;
}

void assignment::course_setter(courses *course)
{
    _course = course;
}


string assignment::solve()
{
    int grade = 0;
    int lines = -1;
    ifstream inStream1;
    inStream1.open(_content);
    string Q;                                          //file streams to compare questions sheet with model answer sheet

    ifstream inStream2;
    inStream2.open(_content_M_answers);
    string A;

    while(!inStream1.eof())
	{

	    getline(inStream1,Q,'\n');
        getline(inStream2,A,'\n');                     //there is a line for every question and answer in the sheet
        ++lines;
        string ans = ask(Q);
        if (ans == A)
            ++grade;                               //if student answer is the model answer then add the grade
	}

    cout <<"Your grade is "<<grade<<endl;

    stringstream strea;
    strea<< to_string(grade)<<"/"<<to_string(lines-1);
    string grade_ = strea.str();
    return grade_;
}


#endif // ASSIGNMENT_cpp
