#include <iostream>
#include "class_point.h"

using namespace std;

void printArray(const Point *array, int tam){
    cout<<"[";
    for (int i = 0; i<tam; i++,array++)
        array->print();
    cout<<"]";
}

void printArrayRec(const Point *array, int tam) {
    if( tam <= 0 ) {
        return;
    } else {
        array->print();
        printArrayRec(++array, --tam);
    }
}

int main(){
    Point p1;
    Point p2(2,3);
    Point p3(4,5);
    Point p4(5,6);
    Point p5(7,8);

    //Point arreglo[]={p1,p2,p3,p4,p5};

    //DYNAMIC

    Point *arreglo =  new Point[5];
    arreglo[0] = p1;
    arreglo[1] = p2;
    arreglo[2] = p3;
    arreglo[3] = p4;
    arreglo[4] = p5;

    printArray(arreglo, 5);
    printArrayRec(arreglo,5);

    delete[] arreglo;
return 0;
}