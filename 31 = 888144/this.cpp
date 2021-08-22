#include <iostream>
using namespace std;
class Rectangle{
    private:
      double width;
      double length;
    public:
      Rectangle(){
        width = 0;
        length = 0;
      }
      Rectangle(double width, double length){
        this->width = width;
        this->length = length;
      }
      void print(){
          cout << "===== Rectangle ====" << endl;
          cout << "Width : " << this->width << endl;
          cout << "Length : " << this->length << endl;
      }
      Rectangle* doubleSize(){
          width *= 2;
          length *= 2;
          return this;
      }
      void draw(){
          for(int i = 0 ; i < width ; i++){
              for(int j = 0 ; j < length ; j++){
                  cout << "*";
              }
              cout << endl;
          }
      }
};
int main(){
   Rectangle myRec(3,5);
   myRec.print();

   myRec.doubleSize()->draw();
   myRec.print();

}

