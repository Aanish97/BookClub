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

void StaticListofRatings::best_most_rated()
{
    RecordingRate record[50];
    int record_count =0;
    int mark =0;

    for (int i = 0; i < count; ++i)
    {
        for (int j = 0; j < record_count; ++j)
        {
            if(ratings_list[i].getBook().get_title() == record[j].book_name)
            {
//                adding the ratings of all similar books
                record[j].score = record[j].score + ratings_list[i].getRating();
                record[j].count++;
                mark=1;
            }
        }

        if(mark==1)
        {
            mark=0;
        }
        else
        {
            record[record_count].book_name = ratings_list[i].getBook().get_title();
            record[record_count].score = ratings_list[i].getRating();
            record[record_count].count = 1;
            record_count++;
        }
    }

    RecordingRate max;
    RecordingRate most;
    max.book_name="";
    max.score=0;
    max.count=0;

    most.book_name="";
    most.score=0;
    most.count=0;

    int best_avg=0;
    int most_rated=0;

    for (int i = 0; i < record_count; ++i)
    {
        if(record[i].score/record[i].count > best_avg)
        {
            max.score = record[i].score;
            max.book_name = record[i].book_name;
            max.count = record[i].count;
            best_avg=record[i].score/record[i].count;
        }
        if(record[i].count>most_rated)
        {
            most.score = record[i].score;
            most.book_name = record[i].book_name;
            most.count = record[i].count;
            most_rated = record[i].count;
        }
    }

    cout<<endl<<max.book_name<<" has the best (highest average) rating of "<<best_avg<<endl;
    cout<<endl<<most.book_name<<" is the most rated with a total of "<<most_rated<<" ratings."<<endl<<endl;
}