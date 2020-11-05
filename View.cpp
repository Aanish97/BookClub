#include <iostream>
#include <string>
#include <stdlib.h>
#include "View.h"
using namespace std;


void View::most_rated_and_best_rated(StaticListofRatings ratings)
{

}

void View::rate_book(DynamicListofMembers members, LinkedList books) const
{
    string fname, lname, auth, tit;

    cout<<"Enter your first name: ";
    cin>>fname;

    cout<<"Enter yuor last name: ";
    cin>>lname;

//    meaning that the he is a member of the book club
    if (members.search(fname, lname))
    {
        cout<<"Enter name of the author: ";
        cin>>auth;

        cout<<"Enter the title of the book: ";
        cin>>tit;

        if (books.search(auth, tit))
        {
//        the person is a member and his entered book exists

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
        cout<<"5. Exit the program"<<endl;
        cout<<"Enter your choice (1,2,3,4,5): ";
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
            rate_book(members, books);
        }
        else if(choice == 4)
        {
            most_rated_and_best_rated(ratings);
        }
        else if (choice == 5)
        {
            exit(0);
        }
        else
        {
            cout<<"Please enter a number between (1,2,3,4,5)"<<endl;
            cin>>choice;
        }
    }
}

View::View() {}

View::~View() {}