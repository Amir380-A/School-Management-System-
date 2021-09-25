#include <string>
#include <iostream>
#ifndef Q_A_H
#define Q_A_H
#include "curriculum.cpp"
using namespace std;



class Q_A : public curriculum
{
    protected:
    inline string ask(string question);            //Q & A functions
    string _content_M_answers;

    public:
    inline void modify(int lines);

};






#endif // Q_A_H
