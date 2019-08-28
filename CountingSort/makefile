output: main.o CountingSort.o
	g++ main.o CountingSort.o -o output

main.o: main.cpp 
	g++ -c main.cpp 

CountingSort.o : CountingSort.cpp CountingSort.h
	g++ -c CountingSort.cpp

clean:
	rm -f *.o output countsort.txt