counting: main.o CountingSort.o
	g++ main.o CountingSort.o -o counting

main.o: main.cpp
	g++ -c main.cpp

CountingSort.o : CountingSort.cpp CountingSort.h
	g++ -c CountingSort.cpp

clean:
	rm -f *.o counting countsort.txt