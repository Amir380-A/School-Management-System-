#ifndef CURRICULUM_CPP
#define CURRICULUM_CPP
#include "curriculum.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;




void curriculum::modify()
{
    ofstream outstream;
    outstream.open(_content);
    string s;
    cout<<"Enter the the new content "<<endl;
    cin>>s;
    outstream << s <<endl;
}




#endif //CURRICULUM_CPP
