CLAFSG = -Wall -g

CC=gcc

functions: functions.o main.o
	$(CC) $(CFLAGS) functions.o main.o -lm -o functions

test: functions.o test_functions.o
	$(CC) $(CFLAGS) functions.o test_functions.o -lm -o test_functions
	./test_functions

run: functions
	./functions

clean:
	rm -f functions test_functions *.o
