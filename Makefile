PROG = calculator

CC = gcc
CFLAGS = `pkg-config --cflags gtk+-3.0`
LIBS = `pkg-config --libs gtk+-3.0`
DIR = init/

$(PROG): $(DIR)init.c
	$(CC) $(CFLAGS) -o $(PROG) $(DIR)init.c $(LIBS)

clean:
	rm $(DIR)init.o

delete:
	rm $(PROG)
