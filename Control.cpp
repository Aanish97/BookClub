#include <iostream>
#include <string>
#include "Control.h"
#include "BookClub.h"
#include "View.h"
using namespace std;

#define MAX_SIZE  50

void Control::driver()
{
//    creating the 5 different club members
    DynamicListofMembers members(MAX_SIZE);

//    adding members to the members dynamic list
    members.add("John", "Doe");
    members.add("Donald", "Trump");
    members.add("Joe", "Biden");
    members.add("Barack", "Obama");
    members.add("George", "Bush");

//    prints all the members of the dynamic list
//    members.print();


//    creating the 10 different books in the linked list
    LinkedList books;

//    author, title
    books.add("JK rowlings", "Harry Potter");
    books.add("Armando Lucas Correa", "The daughter's tale");
    books.add("Jess Kid", "Himself");
    books.add("Martha McPhee", "Gorgeous Lies");
    books.add("Ryan Holiday", "Stillness is the key");
    books.add("Cecelia Ahern ", "If you could see me now");
    books.add("Rick riordan", "Percy jackson");
    books.add("Ryan Holiday", "Ego is the enemy");
    books.add("Dan Brown", "Angels and demons");
    books.add("Colleen Hoover", "November 9");

//    books.print();


    StaticListofRatings ratings;

    ratings.add(Member("John", "Doe"), Book("JK rowlings", "Harry Potter"), 9);
    ratings.add(Member("Donald", "Trump"), Book("Jess Kid", "Himself"), 10);
    ratings.add(Member("Ben", "Frank"), Book("Martha McPhee", "Gorgeous Lies"), 3);
    ratings.add(Member("Ali", "Mustansar"), Book("Martha McPhee", "Gorgeous Lies"), 3);
    ratings.add(Member("Bhatti", "Aanish"), Book("Martha McPhee", "Gorgeous Lies"), 3);
    ratings.add(Member("Ben", "Pan"), Book("Martha McPhee", "Gorgeous Lies"), 3);
    ratings.add(Member("Joe", "Biden"), Book("Ryan Holiday", "Stillness is the key"), 1);
    ratings.add(Member("Peter", "Parker"), Book("Rick riordan", "Percy jackson"), 8);
    ratings.add(Member("Ben", "Stojanovski"), Book("Cecelia Ahern ", "If you could see me now"), 6);
    ratings.add(Member("Trump", "Stojanovski"), Book("Cecelia Ahern ", "If you could see me now"), 6);
    ratings.add(Member("Daffy", "Hassan"), Book("Cecelia Ahern ", "If you could see me now"), 6);
    ratings.add(Member("Emma", "Watson"), Book("Cecelia Ahern ", "If you could see me now"), 6);
    ratings.add(Member("Kristina", "James"), Book("Ryan Holiday", "Ego is the enemy"), 8);
    ratings.add(Member("Owens", "Pete"), Book("Dan Brown", "Angels and demons"), 7);
    ratings.add(Member("Alexandar", "Great"), Book("Colleen Hoover", "November 9"), 2);
    ratings.add(Member("Alex", "Jeff"), Book("Colleen Hoover", "November 9"), 9);
    ratings.add(Member("Alex", "Max"), Book("Colleen Hoover", "November 9"), 8);
    ratings.add(Member("Alex", "Daud"), Book("Colleen Hoover", "November 9"), 10);
    ratings.add(Member("YUOQ", "OKAYA"), Book("Colleen Hoover", "November 9"), 5);

//    ratings.print();

    View view;
    view.menu(members, books, ratings);
}