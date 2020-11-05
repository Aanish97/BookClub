#ifndef BOOKCLUB_LINKEDLIST_H
#define BOOKCLUB_LINKEDLIST_H

#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

class LinkedList
{
    class Node
    {
    public:
        Book* data;
        Node* next;
    };

public:
//    constructor
    LinkedList();

//    add item to linkedlist
    void add(string="", string="");

//    printing the linked list
    void print() const;

    bool search(string, string);

//    destructor
    ~LinkedList();

private:
//    maintaining a head and tail
    Node* head;
    Node* tail;

};

#endif //BOOKCLUB_LINKEDLIST_H
