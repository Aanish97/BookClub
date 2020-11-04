#include <iostream>
using namespace std;
#include <string>
#include "Book.h"

//  using overloaded constructor to create a Book object
Book::Book(string a, string t)
{
    setBook(a, t);
}

//  destructor will remain empty, no dynamic allocation
Book::~Book() {}

//  set the book attributes
void Book::setBook(string a, string t)
{
    title = t;
    author = a;
}

void Book::print() const
{
    cout<<"Author of the Book: "<<author<<endl;
    cout<<"Title of the Book: "<<title<<endl;
}


