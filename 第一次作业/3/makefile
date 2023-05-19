all :main

main : main.cpp manager.o chef.o
	g++ main.cpp manager.o chef.o -o main
chef.o: chef.cpp
	g++ -c chef.cpp -o chef.o

manager.o: manager.cpp
	g++ -c manager.cpp -o manager.o
