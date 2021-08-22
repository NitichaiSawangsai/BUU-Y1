#include "Student.h"
#include "Date.h"

int main()
{
    Student stu("123", "joy", 28, 7, 2539);
    Course oop("OOP", 3, 4);
    Course cal("CAL", 3, 3);
    Course ict("ICT", 2, 3.5);
    stu.setCourse(oop, 0);
    stu.setCourse(cal, 1);
    stu.setCourse(ict, 2);

    stu.print();
    /*
   Student listStudent[3];
   string id;
   string name;
   for(int i = 0; i < 3 ; i++)
   {
      cout << "Enter Id : " ;
      cin >> id;
      cout << "Enter name : " ;
      cin >> name;
      listStudent[i].setStudent(id, name);
      int d,m,y;
      cout << "Enter Birthday : ";
      cin >> d >> m >> y;
      listStudent[i].setBirthDay(d, m, y);
   }
*/
   /*
   listStudent[0].setStudent("58160111", "Worasak");
   listStudent[1].setStudent("58160123", "Gina");
   listStudent[2].setStudent("58160222", "Jaruwan");
*/
   /*
   for(int i = 0 ; i < 3 ; i++)
   {
      listStudent[i].print();
   }
   */
   return 0;
}
