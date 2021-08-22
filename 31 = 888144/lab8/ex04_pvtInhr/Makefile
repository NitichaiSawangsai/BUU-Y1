all:	baseCImp.o main.o
	g++ -o PrivateInhr baseCImp.o main.o
main.o:	main.cpp baseC.h
	g++ -c main.cpp -o main.o
baseCImp.o:	baseCImp.cpp baseC.h
	g++ -c baseCImp.cpp -o baseCImp.o
run:
	./PrivateInhr
clean:
	rm -rf *.o PrivateInhr
