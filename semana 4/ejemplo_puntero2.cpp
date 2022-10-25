#include <iostream>
#include "class_point.h"

using namespace std;

int main(){
    Point p1;
    Point p2(2,3);
    Point p3(4,5);
    Point p4(5,6);
    Point p5(7,8);

    Point arreglo[]={p1,p2,p3,p4,p5};

    int tam = sizeof(arreglo)/sizeof(arreglo[0]);

    Point *ptr = &arreglo[0]; //= (Point *ptr = arreglo)

    for (int i{0}; i<tam; i++, ptr++){
        ptr->print();
    }

    //el nombre del arreglo apunta al primer elemento

    return 0;
}