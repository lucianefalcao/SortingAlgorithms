insertion: main.o InsertionSort.o
	g++ main.o InsertionSort.o -o insertion

main.o: main.cpp
	g++ -c main.cpp

InsertionSort.o: InsertionSort.cpp	
	g++ -c InsertionSort.cpp

clean: 
	rm -f *.o insertion insertion.txt