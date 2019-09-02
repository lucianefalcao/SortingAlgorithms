main: main.o SortingAlgorithms.o
	g++ main.o SortingAlgorithms.o -o main

main.o: main.cpp
	g++ -c main.cpp

SortingAlgorithms.o: SortingAlgorithms.cpp SortingAlgorithms.h
	g++ -c SortingAlgorithms.cpp

clean:
	rm -f *.o main OrderedData.txt