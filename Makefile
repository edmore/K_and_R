CC = gcc
CCFLAGS = -Wall

%.o : %.c
	$(CC) $(CCFLAGS) $< -o $@

clean:
	rm -f *.o *.out *~
