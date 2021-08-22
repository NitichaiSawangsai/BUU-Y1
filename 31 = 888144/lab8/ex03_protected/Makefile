all:	protectMembImp.o protectMembDerivedImp.o main.o
	g++ -o ProtectMemb protectMembImp.o protectMembDerivedImp.o main.o
main.o:	main.cpp protectMemb.h protectMembDerived.h
	g++ -c main.cpp -o main.o
protectMembImp.o:	protectMembImp.cpp protectMemb.h
	g++ -c protectMembImp.cpp -o protectMembImp.o
protectMembDerivedImp.o:	protectMembDerivedImp.cpp protectMemb.h protectMembDerived.h
	g++ -c protectMembDerivedImp.cpp -o protectMembDerivedImp.o
run:
	./ProtectMemb
clean:
	rm -rf *.o ProtectMemb
