#include <iostream>
#include <string>
#include "DynamicListofMembers.h"
using namespace std;

// constructor to make dynamic list of certain size
DynamicListofMembers::DynamicListofMembers(int size)
{
   list_members = new Member[size];
   counter = 0;
}

// destroy the linked list
DynamicListofMembers::~DynamicListofMembers()
{
    delete [] list_members;
}

// add a member to dynamic linked list
void DynamicListofMembers::add(string fn, string ln)
{
    list_members[counter].setMember(fn, ln);
    counter++;
}

// printing all the members in the dynamic list
void DynamicListofMembers::print() const
{
    cout<<"Members of the Book Club"<<endl;
    for (int i = 0; i < counter; ++i)
    {
        list_members[i].print();
    }
}
