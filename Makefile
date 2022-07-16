#-Makefile-

############ VARIABLES

# program name
PROG = calculator

# compiler
CC = gcc

#flags
CFLAGS = `pkg-config --cflags gtk+-3.0`

#libs
LIBS = `pkg-config --libs gtk+-3.0`

# directory that containe the main function
DIR = init/

############# BUILD THE APPLICATION:
$(PROG): init.o queue.o operation.o
	$(CC) $(CFLAGS) -o $(PROG) init.o queue.o operation.o $(LIBS)
	rm *.o

# compile init files
init.o: $(DIR)init.c $(DIR)init.h
	$(CC) $(CFLAGS) -c $(DIR)init.c $(LIBS)

# compile queue files
queue.o: queue/queue.c queue/queue.h
	$(CC) -c queue/queue.c

# compile calc files
operation.o: operation/operation.c operation/operation.h
	$(CC) -c operation/operation.c

# delete the app
clean:
	rm $(PROG)
