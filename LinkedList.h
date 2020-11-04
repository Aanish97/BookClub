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
    LinkedList();
    ~LinkedList();

    void add(string="", string="");
    void del(const string&, Book**);
    void print() const;

private:
    Node* head;
    Node* tail;

};

#endif //BOOKCLUB_LINKEDLIST_H
