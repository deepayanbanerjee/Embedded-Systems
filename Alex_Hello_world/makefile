CC = gcc

CFLAGS = -c -Wall

all: hello

hello:	main.o hello.o
	$(CC) main.o hello.o -o hello

main.o:	main.c
	$(CC) $(CFLAGS) main.c

hello.o: hello.c
	$(CC) $(CFLAGS) hello.c

clean:
	rm -rf *o hello
