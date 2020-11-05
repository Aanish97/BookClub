cmake_minimum_required(VERSION 3.17)
project(BookClub)

set(CMAKE_CXX_STANDARD 98)

add_executable(BookClub main.cpp Control.cpp LinkedList.cpp LinkedList.h Control.h Member.cpp Member.h DynamicListofMembers.cpp DynamicListofMembers.h Book.cpp Book.h Ratings.cpp Ratings.h StaticListofRatings.cpp StaticListofRatings.h StaticListofRatings.cpp StaticListofRatings.h StaticListofRatings.cpp StaticListofRatings.cpp BookClub.cpp BookClub.h View.cpp View.h)