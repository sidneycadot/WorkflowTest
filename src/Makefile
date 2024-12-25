
.PHONY : cleam

CFLAGS = -W -Wall -O3

factorial : main.o factorial.o

main.o : main.c factorial.h

factorial.o : factorial.c factorial.h

clean :
	$(RM) *.o factorial
