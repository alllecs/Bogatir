CC=gcc

CFLAGS=-W -Wall

all: 1.1 1.3 1.5 1.6 1.7 1.9

1.1: 1.1.c
	$(CC) $(CFLAGS) -o 1.1 1.1.c

1.3: 1.3.c
	$(CC) $(CFLAGS) -o 1.3 1.3.c

1.5: 1.5.c
	$(CC) $(CFLAGS) -o 1.5 1.5.c

1.6: 1.6.c
	$(CC) $(CFLAGS) -o 1.6 1.6.c

1.7: 1.7.c
	$(CC) $(CFLAGS) -o 1.7 1.7.c

1.9: 1.9.c
	$(CC) $(CFLAGS) -o 1.9 1.9.c
