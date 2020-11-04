#include <iostream>
using namespace std;
#include <string>
#include "Member.h"

Member::Member() {}

Member::~Member() {}

void Member::setMember(string fn, string ln)
{
    first_name = fn;
    last_name = ln;
}

void Member::print() const
{
    cout<<first_name<<" "<<last_name<<endl;
}


