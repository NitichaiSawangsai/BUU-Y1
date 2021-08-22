#include "Person.h"
#include "Student.h"
#include "UnderGraduate.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
       cout<<"***** Object Student && Object UnderGraduate *****"<<endl;
       Student a1("Nitichai","Sawangsai","59160668");
       UnderGraduate a2(1,"Nitichai","Sawangsai","59160668");
       a1.print();
       a2.print(); 
       cout<<endl;

       cout<<"***** Object Student && Object Student *****"<<endl;
       Student a3("Nitichai","Sawangsai","59160668");
       Student a4("Nitichai","Sawangsai","59160668");
       if(a3.checkEqual(a4.getId())== 1){
          cout<<"Duplicate ID"<<endl;
       }
       a3.print();
       a4.print();
       cout<<endl;
 
        
       cout<<"***** Object UnderGraduate && Object UnderGraduate *****"<<endl;
       UnderGraduate a5(1,"Nitichai","Sawangsai","59160668");
       UnderGraduate a6(1,"Nitichai","Sawangsai","59160668");
       if(a5.checkEqual(a6.getId())== 1){
          cout<<"Duplicate ID"<<endl;
       }
       a5.print(); 
       a6.print(); 
       cout<<endl;



	return 0;

}//main
