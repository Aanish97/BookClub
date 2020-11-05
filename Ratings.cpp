#include <iostream>
#include <string>
#include "Ratings.h"
using namespace std;

Ratings::Ratings() {}

Ratings::Ratings(Member m, Book b, int r)
{
    setRating(m, b, r);
}

void Ratings::setRating(Member m, Book b, int r)
{
    if (rating>10)
    {
        cout<<"Rating cannot be set more than 10, defaulting to 10"<<endl;
        r = 10;
    }
    else if (rating<0)
    {
        cout<<"Rating cannot be set less than 0, defaulting to 0"<<endl;
        r = 0;
    }
    id = BookClub::getNextId();
    member = m;
    book = b;
    rating =r;
}

void Ratings::print() const
{
    member.print();
    book.print();
    cout<<"Rating: "<<rating<<endl;
    cout<<"------------------"<<endl;
}

Ratings::~Ratings()
{
}

Book Ratings::getBook()
{
    return book;
}
int Ratings::getRating()
{
    return rating;
}