all:	boxTypeImp.o rectangleTypeImp.o main.o
	g++ -o Inheritance boxTypeImp.o rectangleTypeImp.o main.o
main.o:	main.cpp boxType.h rectangleType.h
	g++ -c main.cpp -o main.o
rectangleTypeImp.o:	rectangleTypeImp.cpp rectangleType.h
	g++ -c rectangleTypeImp.cpp -o rectangleTypeImp.o
boxTypeImp.o:	boxTypeImp.cpp boxType.h
	g++ -c boxTypeImp.cpp -o boxTypeImp.o
run:
	./Inheritance
clean:
	rm -rf *.o Inheritance
