all: phone

CC = gcc
CFLAGS = -Wall -g
EXPORTLIB = export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.

%.o: %.c
	$(CC) $(CFLAGS) -c $<




phone: phoneBookMain.o register.o print.o search.o delete.o 
	$(CC) $(CFLAGS) -o $@ $^ 

