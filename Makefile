CC=gcc
CFLAGS=-Wall -std=gnu99
LDLIBS=-pthread -lcheck_pic -lrt -lm

all: clean fizzbuzz_test

test: fizzbuzz_test
	./fizzbuzz_test

check_fizzbuzz:
	${CC} ${CFLAGS} fizzbuzz_test.c fizzbuzz.c -o fizzbuzz ${LDLIBS}

clean:
	rm -f *.o fizzbuzz_test
