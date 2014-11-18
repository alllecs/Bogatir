CC=gcc
CFLAGS=-I, -W, -Wall.
1.1: 1.1.c
	$(CC) -o 1.1 -W -Wall 1.1.c -I.
1.3: 1.3.c
	$(CC) -o 1.3 -W -Wall 1.3.c -I.
1.5: 1.5.c
	$(CC) -o 1.5 -W -Wall 1.5.c -I.
1.6: 1.6.c
	$(CC) -o 1.6 -W -Wall 1.6.c -I.
1.7: 1.7.c
	$(CC) -o 1.7 -W -Wall 1.7.c -I.
1.9: 1.9.c
	$(CC) -o 1.9 -W -Wall 1.9.c -I.
