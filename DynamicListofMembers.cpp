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
    cout<<endl<<"*** Members of the Book Club ***"<<endl;
    for (int i = 0; i < counter; ++i)
    {
        list_members[i].print();
    }
    cout<<endl;
}

bool DynamicListofMembers::search(string f, string l)
{
    for (int i = 0; i < counter; ++i)
    {
        if (list_members[i].get_firstname() == f && list_members[i].get_lastname() == l)
        {
            return true;
        }
    }
    return false;
}