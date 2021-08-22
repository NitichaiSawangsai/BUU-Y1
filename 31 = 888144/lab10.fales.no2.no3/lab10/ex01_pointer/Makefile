all:	classExampleImp.o main.o
	g++ -o Example classExampleImp.o main.o
main.o:	main.cpp classExample.h
	g++ -c main.cpp -o main.o
classExampleImp.o:	classExampleImp.cpp classExample.h
	g++ -c classExampleImp.cpp -o classExampleImp.o
run:
	./Example
clean:
	rm -rf *.o Example
