my_prog : main.o Book.o DynamicListofMembers.o BookClub.o Control.o LinkedList.o Member.o Ratings.o StaticListofRatings.o View.o
	g++ -o my_prog main.o Book.o DynamicListofMembers.o BookClub.o Control.o LinkedList.o Member.o Ratings.o StaticListofRatings.o View.o
main.o : main.cpp
	g++ -c main.cpp
Book.o : Book.cpp Book.h
	g++ -c Book.cpp
DynamicListofMembers.o : DynamicListofMembers.cpp DynamicListofMembers.h
	g++ -c DynamicListofMembers.cpp
BookClub.o : BookClub.cpp BookClub.h
	g++ -c BookClub.cpp
Control.o : Control.cpp Control.h
	g++ -c Control.cpp
LinkedList.o : LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp
Member.o : Member.cpp Member.h
	g++ -c Member.cpp
Ratings.o : Ratings.cpp Ratings.h
	g++ -c Ratings.cpp
StaticListofRatings.o : StaticListofRatings.cpp StaticListofRatings.h
	g++ -c StaticListofRatings.cpp
View.o : View.cpp View.h
	g++ -c View.cpp

