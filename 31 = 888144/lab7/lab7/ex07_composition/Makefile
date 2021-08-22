all:	PersonTypeImp.o PersonalInfoImp.o DateTypeImp.o main.o
	g++ -o Personal PersonTypeImp.o PersonalInfoImp.o DateTypeImp.o main.o
main.o:	main.cpp PersonType.h PersonalInfo.h DateType.h
	g++ -c main.cpp -o main.o
personalTypeImp.o:	PersonTypeImp.cpp PersonType.h PersonalInfo.h DateType.h
	g++ -c PersonTypeImp.cpp -o PersonTypeImp.o
PersonalInfoImp.o:	PersonalInfoImp.cpp PersonalInfo.h
	g++ -c PersonalInfoImp.cpp -o PersonalInfoImp.o
DateTypeImp.o:	DateTypeImp.cpp DateType.h
	g++ -c DateTypeImp.cpp -o DateTypeImp.o
run:
	./Personal
clean:
	rm -rf *.o Personal
