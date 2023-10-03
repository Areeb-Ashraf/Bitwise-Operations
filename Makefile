CC = gcc

all: main

main: major1.o clz.o endian.o parity.o rotate.o
	$(CC) -o main major1.o clz.o endian.o parity.o rotate.o

major1.o: major1.c major1.h
	$(CC) -c major1.c

clz.o: clz.c major1.h
	$(CC) -c clz.c

endian.o: endian.c
	$(CC) -c endian.c

parity.o: parity.c
	$(CC) -c parity.c

rotate.o: rotate.c
	$(CC) -c rotate.c

clean:
	rm -f *.o main

run: main
	./main
