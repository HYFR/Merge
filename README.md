# Merge
Contains the merge sort algorithm. The merge sort algorithm executs a divide and conquer method that divides unsorted sub-arrays until each contain one element. Then the algorithm merges the sub-arrays into newly sorted arrays until there is only one sorted array.

## Setup
First you will want to compile the main function.
```
make
```

Then you will want to run the file
```
./main merge 4 3 2 1
```

The output will be displayed on the terminal.
```
Sorted list in ascending order:
1 2 3 4
```

## Test Setup
Compile the unit test by entering
```
make test
```
into the command line.

Then run the test file by typing 
```
./test_functions
```
into the command line.


The unit tests will compile and run, displaying
```

Even length array works (merge).
Odd lengthed arrays work (merge).
Odd length arrays with negative integer elements work.
The merge sort algorithm works.

```
on the terminal.
