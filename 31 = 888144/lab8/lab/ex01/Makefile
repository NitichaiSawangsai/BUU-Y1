
all:	CylinderTypelmp.o CircleTypelmp.o main.o
	g++ -o circlencylinder CylinderTypelmp.o CircleTypelmp.o main.o
main.o:	main.cpp CircleType.h CylinderType.h
	g++ -c main.cpp -o main.o
CircleTypelmp.o:	CircleTypelmp.cpp CircleType.h
	g++ -c CircleTypelmp.cpp -o CircleTypelmp.o
CylinderTypelmp.o:	CylinderTypelmp.cpp CylinderType.h
	g++ -c CylinderTypelmp.cpp -o CylinderTypelmp.o
run:
	./circlencylinder
clean:
	rm -rf *.o circlencylinder


