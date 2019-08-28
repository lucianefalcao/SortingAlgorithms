radix: main.o CountingSort.o RadixSort.o 
	g++ main.o CountingSort.o RadixSort.o -o radix

main.o: main.cpp
	g++ -c main.cpp

CountingSort.o: CountingSort.cpp
	g++ -c CountingSort.cpp

RadixSort.o: RadixSort.cpp
	g++ -c RadixSort.cpp

clean:
	rm -f *.o radix radix.txt