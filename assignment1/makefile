CC = g++
CFLAGS = -c

all: ALU

ALU:	main.o ALU.o Registers.o
	$(CC) main.o ALU.o Registers.o -o ALU

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

ALU.o:	ALU.cpp
	$(CC) $(CFLAGS) ALU.cpp

Registers.o:	Registers.cpp
		$(CC) $(CFLAGS) Registers.cpp
clean:
	rm -rf *o ALU
