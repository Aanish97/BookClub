
#ifndef BOOKCLUB_BOOKCLUB_H
#define BOOKCLUB_BOOKCLUB_H

#include <iostream>
#include <string>
using namespace std;

class BookClub
{

public:
//    constructor
    BookClub();

//    destructor
    ~BookClub();

    static int getNextId();

private:
    static int nextId;
};

#endif //BOOKCLUB_BOOKCLUB_H
