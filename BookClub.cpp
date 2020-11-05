#include <iostream>
#include <string>
#include "BookClub.h"
using namespace std;

int BookClub::nextId = 1001;

int BookClub::getNextId()
{
    return ++nextId;
}

BookClub::BookClub() {}

BookClub::~BookClub() {}
