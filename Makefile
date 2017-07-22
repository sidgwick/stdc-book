CC = gcc
CFLAGS = -Wall -c


all: mystdlib.a

mystdlib.a: assert.o
	ar -r mystdlib.a $<

assert.o: src/assert/assert.c src/assert/assert.h
	$(CC) $(CFLAGS) -o $@ $<
	cp src/assert/assert.h "include/assert.h"

.PHONY:
	clean

clean:
	-rm *.o include/*.h mystdlib.a
