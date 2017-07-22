CC = gcc
CFLAGS = -Wall
#LDFLAGS = -L./../ -lmystd

all: test_assert

test_assert: assert.c ../include/assert.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ assert.c ../mystdlib.a

.PHONY:
	clean

clean:
	-rm test_*
