#ifndef LIST_H
#define LIST_H

#include "LinkedList.h"
#include "Book.h"

LinkedList::LinkedList() {}

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

LinkedList::~LinkedList()
{
    Node* currNode;
    Node* nextNode;

    currNode = head;

    while (currNode != NULL) {
        nextNode = currNode->next;
        delete currNode->data;
        delete currNode;
        currNode = nextNode;
    }
}

#endif
