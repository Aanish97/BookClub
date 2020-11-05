#include <iostream>
using namespace std;
#include <string>
#include "StaticListofRatings.h"

StaticListofRatings::StaticListofRatings()
{
    ratings_list = new Ratings[50];
    count = 0;
}

void StaticListofRatings::add(Member m, Book b, int r)
{
    ratings_list[count].setRating(m, b, r);
    count++;
}

void StaticListofRatings::print() const
{
    cout<<"*** Ratings of the Book Club ***"<<endl;
    for (int i = 0; i < count; ++i)
    {
        ratings_list[i].print();
    }
    cout<<endl;
}

StaticListofRatings::~StaticListofRatings()
{
    delete [] ratings_list;
}
