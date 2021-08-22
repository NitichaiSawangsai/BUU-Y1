#ifndef CylinderType_H
#define CylinderType_H

#include"CircleType.h"

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

#endif
