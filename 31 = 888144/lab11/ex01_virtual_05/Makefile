all:	dogTypeImp.o petTypeImp.o main.o
	g++ -o Pet dogTypeImp.o petTypeImp.o main.o
main.o:	main.cpp dogType.h petType.h
	g++ -c main.cpp -o main.o
dogTypeImp.o:	dogTypeImp.cpp dogType.h petType.h
	g++ -c dogTypeImp.cpp -o dogTypeImp.o
petTypeImp.o:	petTypeImp.cpp petType.h
	g++ -c petTypeImp.cpp -o petTypeImp.o
run:
	./Pet
clean:
	rm -rf *.o Pet
