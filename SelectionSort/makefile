selection: main.o SelectionSort.o
	g++ main.o SelectionSort.o -o selection

main.o: main.cpp
	g++ -c main.cpp

SelectionSort.o: SelectionSort.cpp
	g++ -c SelectionSort.cpp SelectionSort.h

clean:
	rm -f *.o selection selection.txt