
#ifndef BOOKCLUB_RATINGS_H
#define BOOKCLUB_RATINGS_H

#include <iostream>
#include <string>
#include "Book.h"
#include "Member.h"
#include "BookClub.h"
using namespace std;

class Ratings: public BookClub
{

public:
//    constructor
    Ratings();

//    overloaded constructor
    Ratings(Member, Book, int);

//    destructor
    ~Ratings();

//    add item to Book list
    void setRating(Member, Book, int);

    void print() const;

    Book getBook();

    int getRating();

private:
    int id;
    Member member;
    Book book;
    int rating;

};


#endif //BOOKCLUB_RATINGS_H
