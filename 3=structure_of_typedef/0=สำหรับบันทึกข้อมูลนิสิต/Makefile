nisit: nisit.c nisit_function.o nisit.h
	gcc -o nisit nisit.c nisit_function.o
nisit_function.o: nisit_function.c  nisit.h
	gcc -c nisit_function.c
clean: 
	rm -rf *.o nisit
