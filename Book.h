#ifndef BOOKCLUB_BOOK_H
#define BOOKCLUB_BOOK_H

#include <iostream>
#include <string>
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

    void print() const;

private:
    string title;
    string author;

};

#endif //BOOKCLUB_BOOK_H
