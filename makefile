CC=gcc

CFLAGS=-W -Wall

all: 1.1 1.3 1.5 1.6 1.7 1.9 1.10 1.11

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
clean:
	$(RM) -rf *.o *~
