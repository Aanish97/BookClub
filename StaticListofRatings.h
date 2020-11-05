#ifndef BOOKCLUB_STATICLISTOFRATINGS_H
#define BOOKCLUB_STATICLISTOFRATINGS_H

#include <iostream>
#include <string>
#include "Ratings.h"
using namespace std;

class StaticListofRatings
{
    class RecordingRate
    {
    public:
        string book_name;
        int score;
        int count;
    };

public:
//    constructor
    StaticListofRatings();

//    add item to linkedlist
    void add(Member, Book, int);

//    printing the linked list
    void print() const;

//    the best rated book
    void best_most_rated();

//    destructor
    ~StaticListofRatings();

private:
//    maintaining a head and tail
    Ratings* ratings_list;
    int count;
};

#endif //BOOKCLUB_STATICLISTOFRATINGS_H
