#ifndef BOOKCLUB_VIEW_H
#define BOOKCLUB_VIEW_H

#include <iostream>
#include <string>
#include "DynamicListofMembers.h"
#include "StaticListofRatings.h"
#include "LinkedList.h"
using namespace std;

class View
{

public:
//    constructor
    View();

//    destructor
    ~View();

//    add item to member list
    void menu(DynamicListofMembers, LinkedList, StaticListofRatings);

    void print_all_members(DynamicListofMembers) const;

    void print_all_books(LinkedList) const;

    void rate_book(DynamicListofMembers, LinkedList, StaticListofRatings) const;

    void most_rated_and_best_rated(StaticListofRatings);

private:

};

#endif //BOOKCLUB_VIEW_H
