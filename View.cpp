#include <iostream>
#include <string>
#include <stdlib.h>
#include "View.h"
using namespace std;


void View::most_rated_and_best_rated(StaticListofRatings ratings)
{
    ratings.best_most_rated();
}

void View::rate_book(DynamicListofMembers members, LinkedList books, StaticListofRatings ratings) const
{
    string fname = "";
    string lname = "";
    string auth = "";
    string tit = "";
    int rating = -1;

    while(fname=="")
    {
        cout<<"Enter your first name: ";
        cin>>fname;
        if (fname=="")
        {
            cout<<"please enter a name";
        }
    }

    while(lname=="")
    {
        cout<<"Enter your last name: ";
        cin>>lname;
        if (lname=="")
        {
            cout<<"please enter a name";
        }
    }

//    meaning that the he is a member of the book club
    if (members.search(fname, lname))
    {
        while(auth=="")
        {
            getline (cin, auth);
            cout<<"Enter name of the author: ";
            getline (cin, auth);
            if (auth=="")
            {
                cout<<"please enter a author"<<endl;
            }
        }

        while(tit=="")
        {
            cout<<"Enter the title of the book: ";
            getline (cin, tit);
            if (tit=="")
            {
                cout<<"please enter a title"<<endl;
            }
        }

        if (books.search(auth, tit))
        {
//        the person is a member and his entered book exists

            while(rating > 10 || rating < 0)
            {
                cout<<"Please enter the rating"<<endl;
                cin>>rating;
                if (rating > 10 || rating < 0)
                {
                    cout<<"{ please enter a rating between 0 and 10 (inclusive) }"<<endl;
                }
            }

            ratings.add(Member(fname, lname), Book(auth, tit), rating);
            cout<<"+ Rating added"<<endl;
        }
        else
        {
            cout<<"This book does not exist in the book club"<<endl<<endl;
        }
    }
    else
    {
        cout<<"You are not a member of the book club"<<endl<<endl;
    }
}

void View::print_all_books(LinkedList books) const
{
    books.print();
    cout<<endl;
}

void View::print_all_members(DynamicListofMembers members) const
{
    members.print();
    cout<<endl;
}

void View::menu(DynamicListofMembers members, LinkedList books, StaticListofRatings ratings)
{
    int choice;
    string firstname;
    string lastname;
    string book_title;

    while(true)
    {
        cout<<"1. Print the data for all the members in the book club"<<endl;
        cout<<"2. Print the data for all the books in the book club"<<endl;
        cout<<"3. Enter rating for book"<<endl;
        cout<<"4. Compute and print best rated and most rated book"<<endl;
        cout<<"   Exit the program"<<endl;
        cout<<"Enter your choice (1,2,3,4) {press any key to exit}: ";
        cin>>choice;

        if(choice == 1)
        {
            print_all_members(members);
        }
        else if(choice == 2)
        {
            print_all_books(books);
        }
        else if(choice == 3)
        {
            rate_book(members, books, ratings);
        }
        else if(choice == 4)
        {
            most_rated_and_best_rated(ratings);
        }
        else
        {
            exit(0);
        }
    }
}

View::View() {}

View::~View() {}