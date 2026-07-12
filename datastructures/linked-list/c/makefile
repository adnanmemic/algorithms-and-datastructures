CC=/usr/bin/gcc
CFLAGS=-MMD -MP -Wall

PROGRAM=linkedlist

SRC=main.c linked-list.c
OBJECTS=$(SRC:.c=.o)

default: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run: $(PROGRAM)
	./$(PROGRAM)

clean: 
	-rm -f *.o *.d $(PROGRAM)

.PHONY: default run clean

-include $(OBJECTS:.o=.d)
