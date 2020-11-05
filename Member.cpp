#include <iostream>
using namespace std;
#include <string>
#include "Member.h"

Member::Member(string fn, string ln)
{
    setMember(fn, ln);
}

Member::~Member() {}

void Member::setMember(string fn, string ln)
{
    id = BookClub::getNextId();
    first_name = fn;
    last_name = ln;
}

void Member::print() const
{
    cout<<first_name<<" "<<last_name<<endl;
}

string Member::get_firstname()
{
    return first_name;
}

string Member::get_lastname()
{
    return last_name;
}
