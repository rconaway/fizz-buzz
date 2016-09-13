CC=gcc
CFLAGS=-Wall -Werror -std=gnu99
LDLIBS=-pthread -lcheck_pic -lrt -lm

all: clean fizzbuzz_test

test: fizzbuzz_test
	./fizzbuzz_test

fizzbuzz_test: fizzbuzz_test.c fizzbuzz.c
	${CC} ${CFLAGS} fizzbuzz_test.c fizzbuzz.c -o fizzbuzz_test ${LDLIBS}

clean:
	rm -f *.o fizzbuzz_test
