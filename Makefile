CC = gcc
CFLAGS = -Wall -c


all: mystdlib.a

mystdlib.a: assert.o
	ar -r mystdlib.a $<

assert.o: assert/assert.c assert/assert.h
	$(CC) $(CFLAGS) -o $@ assert/assert.c
	cp assert/assert.h "include/assert.h"

.PHONY:
	clean

clean:
	-rm *.o include/*.h mystdlib.a
