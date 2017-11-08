CC=gcc
CFLAGS=-I.
DEPS = palindromo.h
OBJ = palindromo.o palindromofunc.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

palindromo: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)


