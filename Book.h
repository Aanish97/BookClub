#ifndef BOOKCLUB_BOOK_H
#define BOOKCLUB_BOOK_H

#include <iostream>
#include <string>
#include "BookClub.h"
using namespace std;

class Book
{

public:
//    constructor
    Book(string="", string="");

//    destructor
    ~Book();

//    add item to Book list
    void setBook(string="", string="");

    string get_author();

    string get_title();

    void print() const;

private:
    int id;
    string title;
    string author;

};

#endif //BOOKCLUB_BOOK_H
