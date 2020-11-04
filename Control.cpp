#include <iostream>
#include <string>
#include "Control.h"
#include "Member.h"
#include "DynamicListofMembers.h"
#include "LinkedList.h"
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
    members.print();

    LinkedList books;


}