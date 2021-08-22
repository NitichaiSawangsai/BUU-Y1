#include <iostream>
using namespace std;
class Rectangle{
    friend void friendFunc(Rectangle obj);
    friend ostream& operator<<(ostream&, const Rectangle&);
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
      void setValue(double w, double l){
          width = w;
          length = l;
      }
      Rectangle operator+(const Rectangle& obj) const;
};
Rectangle Rectangle::operator+(const Rectangle& obj) const{
   Rectangle result;
   double w = width + obj.width;
   double l = length + obj.length;
   result.setValue(w, l);
   return result;
}
ostream& operator<<(ostream& os, const Rectangle& obj){
   os << "=== MyRectangle ===" << endl;
   os << "Width : " << obj.width << endl;
   os << "Length : " << obj.length << endl;
   return os;
}

void friendFunc(Rectangle obj){
   cout << "=== friend function === " << endl;
   cout << "Width : " << obj.width << endl;
   cout << "Length : " << obj.length << endl;
   obj.draw();
}

int main(){
    Rectangle r1(3,5);
    Rectangle r2(2,2);
    Rectangle r3;
    r3 = r1 + r2;
//    r3.print();
    cout << r3;
    /*
   Rectangle myRec(3,5);
   myRec.print();

   myRec.doubleSize()->draw();
   myRec.print();
   friendFunc(myRec);

*/
}

