all:	UnderGraduatelmp.o Studentlmp.o Personlmp.o main.o
	g++ -o studentld UnderGraduatelmp.o Studentlmp.o Personlmp.o main.o
main.o:	main.cpp Person.h Student.h UnderGraduate.h
	g++ -c main.cpp -o main.o
Personlmp.o:	Personlmp.cpp  Person.h
	g++ -c Personlmp.cpp -o Personlmp.o
Studentlmp.o:	Studentlmp.cpp Student.h
	g++ -c Studentlmp.cpp -o Studentlmp.o
UnderGraduatelmp.o:	UnderGraduatelmp.cpp UnderGraduate.h
	g++ -c UnderGraduatelmp.cpp -o UnderGraduatelmp.o
run:
	./studentld
clean:
	rm -rf *.o studentld
