# SortingAlgorithms

<a name=list/>

## List of Algorithms

1. Counting Sort
2. Radix Sort
3. Selection Sort
4. Insertion Sort

## How Compile and Run

Use makefile to compile

```
make main
```

And to run it is necessary put the executable name, the name of the desire algorithm and then the local of the instance.

```
./main counting Instancies/counting.txt
```

At the final, a file called OrderedData.txt will be created. This file will contain the data sorted and it's first line will contain the chosen algorithm. The creation of a file was chosen because the data contains a large number of lines.

## Warnings

1. If you mistyped or typed any other algorithm that was not listed in [List of Algorithms](#list), the program will display a message saying that there is no such algorithm, so make sure you are typing correctly. :smiley:

2. Counting sort does not support the files bellow:

    * [num.1000.4.in](Instancies/num.1000.4.in)
    * [num.10000.4.in](Instancies/num.10000.4.in)
    * [num.100000.4.in](Instancies/num.100000.4.in)