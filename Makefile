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
$(PROG): init.o nums.o oper.o operation.o check.o
	$(CC) $(CFLAGS) -o $(PROG) init.o nums.o oper.o operation.o check.o $(LIBS)
	rm *.o

# compile init folder files
init.o: $(DIR)init.c $(DIR)init.h
	$(CC) $(CFLAGS) -c $(DIR)init.c $(LIBS)

# compile queue folder files
nums.o: queue/numbers/nums.c queue/numbers/nums.h
	$(CC) -c queue/numbers/nums.c

oper.o: queue/operations/oper.c queue/operations/oper.h
	$(CC) -c queue/operations/oper.c

# compile operation folder files
operation.o: operation/operation.c operation/operation.h
	$(CC) -c operation/operation.c

check.o: operation/check.c operation/check.h
	$(CC) -c operation/check.c

# delete all .o files
clean:
	rm *.o

# delete the app
delete:
	rm $(PROG)
