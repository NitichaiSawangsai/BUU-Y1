all:	partTimeEmployeeImp.o fullTimeEmployeeImp.o employeeTypeImp.o personTypeImp.o main.o
	g++ -o Employee partTimeEmployeeImp.o fullTimeEmployeeImp.o employeeTypeImp.o personTypeImp.o main.o
main.o:	main.cpp partTimeEmployee.h fullTimeEmployee.h employeeType.h personType.h
	g++ -c main.cpp -o main.o
partTimeEmployeeImp.o:	partTimeEmployeeImp.cpp partTimeEmployee.h employeeType.h personType.h
	g++ -c partTimeEmployeeImp.cpp -o partTimeEmployeeImp.o
fullTimeEmployeeImp.o:	fullTimeEmployeeImp.cpp fullTimeEmployee.h employeeType.h personType.h
	g++ -c fullTimeEmployeeImp.cpp -o fullTimeEmployeeImp.o
employeeTypeImp.o:	employeeTypeImp.cpp employeeType.h personType.h
	g++ -c employeeTypeImp.cpp -o employeeTypeImp.o
personTypeImp.o:	personTypeImp.cpp personType.h
	g++ -c personTypeImp.cpp -o personTypeImp.o
run:
	./Employee
clean:
	rm -rf *.o Employee
