#ifndef LIST_H
#define LIST_H

#include "LinkedList.h"
#include "Book.h"

// constructor
LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
}

// add book item to linked list
void LinkedList::add(string a, string t)
{
    Book* new_book = new Book(a, t);

    Node* new_node = new Node();
    new_node->data = new_book;
    new_node->next = NULL;

    if(head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = tail->next;
    }
}


void LinkedList::print() const
{
    Node* temp = head;
    cout<<endl<<"*** Books of the Book Club ***"<<endl;

    while(temp != NULL)
    {
        temp->data->print();
        temp = temp->next;
    }
    cout<<endl;

    cout<<"Head: ";
    head->data->print();
    cout<<"Tail: ";
    tail->data->print();
    cout<<endl;
}

// destructor, destroying the linked list
LinkedList::~LinkedList()
{
    Node* curr;
    Node* next;

    curr = head;

    while (curr != NULL) {
        next = curr->next;
        delete curr->data;
        delete curr;
        curr = next;
    }
}

bool LinkedList::search(string a, string t)
{
    Node* temp = head;

    while(temp != NULL)
    {
        if (temp->data->get_title() == t && temp->data->get_author() == a)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int LinkedList::get_length()
{
    int len = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

#endif
