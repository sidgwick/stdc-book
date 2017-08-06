CC = gcc
CFLAGS = -Wall -c


all: mystdlib.a

mystdlib.a: assert.o ctype.o
	ar -r mystdlib.a $^

assert.o: src/assert/assert.c src/assert/assert.h
	$(CC) $(CFLAGS) -o $@ $<
	cp src/assert/assert.h "include/assert.h"

ctype.o: src/ctype/ctype.c src/ctype/ctype.h
	$(CC) $(CFLAGS) -o $@ $<
	cp src/ctype/ctype.h "include/ctype.h"

.PHONY:
	clean

clean:
	-rm *.o include/*.h mystdlib.a
