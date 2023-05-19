all:main

main:main.cpp Cow.o Farm.o
	g++ main.cpp Cow.o Farm.o -o main
Cow.o: Cow.cpp
	g++ -c Cow.cpp -o Cow.o
Farm.o:Farm.cpp
	g++ -c Farm.cpp -o Farm.o