//
//  main.cpp
//  ArrayList
//
//  Created by Peerasak Pianprasit on 3/6/2560 BE.
//  Copyright © 2560 Peerasak Pianprasit. All rights reserved.
//

#include <iostream>
#include "ArrayList.h"
using namespace std;

int main(int argc, const char * argv[]) {
    ArrayList myarr;
    
    cout << "Init ArrayList" << endl;
    myarr.print();
    
    cout << "Try to check arraylist is empty" << endl;
    if(myarr.isEmpty()){
        cout << "arraylist is empty" << endl;
    }
    
    cout << "Insert number 5 to arraylist" << endl;
    myarr.insert(5);
    myarr.print();
    
    cout << "Insert number 8 and 2 to arraylist" << endl;
    myarr.insert(8);
    myarr.insert(2);
    myarr.print();
    
    cout << "Try to find number 8 is in arraylist" << endl;
    int index = myarr.search(8);
    if(index == -1){
        cout << "Oh, number 8 is not in arraylist" << endl;
    }else{
        cout << "OK, number 8 at position " << index << " in arraylist" << endl;
        myarr.print();
    }
    
    
    cout << "Try to find number 7 is in arraylist" << endl;
    index = myarr.search(7);
    if(index == -1){
        cout << "Oh no, number 7 is not in arraylist" << endl;
    }else{
        cout << "OK, number 7 at position " << index << " in arraylist" << endl;
        myarr.print();
    }
    
    cout << "Try to remove number 8 from arraylist" << endl;
    myarr.remove(8);
    myarr.print();
    
    cout << "last check method isfullList" << endl;
    for(int i = 0 ; i < 10; i++){
        if(!myarr.isFullList()){
            myarr.insert(i);
        }else{
            myarr.print();
            cout << "Can't insert item to list." << endl;
        }
    }
    
    
    return 0;
}
