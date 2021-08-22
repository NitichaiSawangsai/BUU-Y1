all:	ptrMemberVarTypeImp.o main.o
	g++ -o PtrMember ptrMemberVarTypeImp.o main.o
main.o:	main.cpp ptrMemberVarType.h
	g++ -c main.cpp -o main.o
ptrMemberVarTypeImp.o:	ptrMemberVarTypeImp.cpp ptrMemberVarType.h
	g++ -c ptrMemberVarTypeImp.cpp -o ptrMemberVarTypeImp.o
run:
	./PtrMember
clean:
	rm -rf *.o PtrMember
