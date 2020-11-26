CC=gcc

objects = stack.o queue.o


main: main.c $(objects)
	$(CC) -o $@ -s main.c $(objects)
stack.o: stack.c stack.h
queue.o: queue.c queue.h

clean:
	rm -v $(objects) main
cleanO: 
	rm -v $(objects)

