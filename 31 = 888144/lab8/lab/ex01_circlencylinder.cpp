#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class CircleType {
        protected :
               float r;
	public    :
		CircleType();
		CircleType(float R);
		void setCircleType (float R);
                float circumference ();
                float circle_area ();
		void print();
};
		CircleType::CircleType(){
	              r=0;
		}
		CircleType::CircleType(float R){
	              r=R;
		}
		void CircleType::setCircleType (float R){
			r=R;	       
		}
                float CircleType::circumference (){
                   return  2*(3.414*r) ;  
                }
                float CircleType::circle_area (){
                  return  3.414*(r*r) ;  
                }
		void CircleType::print(){
			cout<<"r = "<<r<<endl;
		}

class CylinderType :  public  CircleType {
        private :
                float h;
	public  :
		CylinderType(float H,float RR) ;
		void setCylinderType (float H,float RR);
		float processCylindrical_cross ();
                float processCylinder_volume();
		void print();
};
		CylinderType::CylinderType(float H,float RR) : CircleType(RR) {
                     h=H;
		}
		void CylinderType::setCylinderType (float H,float RR){
			h=H;
                       setCircleType(RR); 	
		} 
		float CylinderType::processCylindrical_cross (){
			return (2*(3.414*(r*r))+2*(3.414*r*h));
		}   
                float CylinderType::processCylinder_volume(){
                        return 3.414*(r*r)*h;
                }
		void CylinderType::print(){
                     CircleType::print();
                      cout<<"H = "<<h<<endl;
                      cout<<"circumference : "<<circumference()<<endl;
                      cout<<"circle_area : "<<circle_area()<<endl;
                      cout<<"processCylindrical_cross : "<<processCylindrical_cross()<<endl;
                      cout<<"processCylinder_volume :"<<processCylinder_volume()<<endl;
		}

int main(){
          CylinderType aa(3,4);
          aa.print(); 
	return 0;
}//mian

