all:	allClassImp.o main.o
	g++ -o AllClass allClassImp.o main.o
main.o:	main.cpp allClass.h
	g++ -c main.cpp -o main.o
allClass.o:	allClassImp.cpp allClass.h
	g++ -c allClassImp.cpp -o allClassImp.o
run:
	./AllClass
clean:
	rm -rf *.o AllClass
