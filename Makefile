CC="-g"

.PHONY : all
all : launch

launch :  launch.o NumberGenerator.o
	cc $(CC) launch.o NumberGenerator.o -o launch -lhiredis

launch.o : launch.c
	cc $(CC) launch.c -c -o launch.o

NumberGenerator.o : NumberGenerator.c NumberGenerator.h
	cc $(CC) NumberGenerator.c -c -o NumberGenerator.o -g

clean :
	find *.o -type f -exec rm {} \;
	find . -maxdepth 1 -type f -executable -exec rm {} \;
