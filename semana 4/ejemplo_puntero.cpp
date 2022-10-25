#include <iostream>
#include "class_point.h"

using namespace std;

int main(){
    Point p1;

    Point *ptr1;
    ptr1 = &p1;
    ptr1->print();

    if(true){
        Point p2(3,5);
    }

    Point *ptr2 = new Point(4,5);

    p1.print();
    ptr2->print();

    delete ptr2;

    return 0;

}