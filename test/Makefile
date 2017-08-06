CC = gcc
CFLAGS = -Wall -g
#LDFLAGS = -L./../ -lmystd

all: test_assert test_ctype

test_assert: assert.c ../include/assert.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ assert.c ../mystdlib.a

test_ctype: ctype.c ../include/ctype.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ ctype.c ../mystdlib.a

.PHONY:
	clean

clean:
	-rm test_*
