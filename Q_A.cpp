#ifndef Q_A_CPP
#define Q_A_CPP
#include <string>
#include <fstream>
#include <iostream>
#include "Q_A.h"
using namespace std;



string Q_A::ask(string question)
    {
        cout << question<<" ";
        string ans;                              //ask method to cin student answers
        cin >> ans;
        return ans;
    }


void Q_A::modify(int lines)
{
    ofstream outstream;
    outstream.open(_content);

    cout<<"Enter your questions "<<endl;
    for (int i=0; i<lines+1; i++)
    {
        string s;
        getline(cin, s);
        outstream << s <<endl;
    }

    cout<<"Submitted, now you need to change model answer too"<<endl;

    ofstream outstream2;
    outstream2.open(_content_M_answers);
    for (int i=0; i<lines; i++)
    {
        string s;
        getline(cin, s);
        outstream2 << s <<endl;
    }
}

#endif //Q_A_CPP
