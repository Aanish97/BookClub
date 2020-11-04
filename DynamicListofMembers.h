#ifndef BOOKCLUB_DYNAMICLISTOFMEMBERS_H
#define BOOKCLUB_DYNAMICLISTOFMEMBERS_H
#include "Member.h"


class DynamicListofMembers
{
public:

//    creating a dynamic array of size int
    DynamicListofMembers(int);

//    destroying the dynamic array
    ~DynamicListofMembers();

//    add member to the linked list
    void add(string = "", string = "");

//    print the members of the dynamic list
    void print() const;

private:
    Member* list_members;
    int counter;
};

#endif //BOOKCLUB_DYNAMICLISTOFMEMBERS_H
