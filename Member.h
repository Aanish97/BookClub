#ifndef BOOKCLUB_MEMBER_H
#define BOOKCLUB_MEMBER_H

#include <iostream>
#include <string>
using namespace std;

class Member
{

public:
//    constructor
    Member();

//    destructor
    ~Member();

//    add item to member list
    void setMember(string="", string="");

    void print() const;

private:
    string first_name;
    string last_name;
//    linked list of ratings of books

};

#endif //BOOKCLUB_MEMBER_H
