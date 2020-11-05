#ifndef BOOKCLUB_MEMBER_H
#define BOOKCLUB_MEMBER_H

#include <iostream>
#include <string>
#include "BookClub.h"
using namespace std;

class Member: public BookClub
{

public:
//    constructor
    Member(string="", string="");

//    destructor
    ~Member();

//    add item to member list
    void setMember(string="", string="");

    string get_firstname();

    string get_lastname();

    void print() const;

private:
    int id;
    string first_name;
    string last_name;
//    linked list of ratings of books

};

#endif //BOOKCLUB_MEMBER_H
