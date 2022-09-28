#include "class_point.h"
#include <iostream>

using namespace std;


void imprimirPoint (Point p) {
    cout << "("<<p.getX()<<", "<<p.getY()<<")"<<endl;
}
void modificar (int a, int b, Point &p){
    p.setX(a);
    p.setY(b);
}

void intercambio(int &a,int &b){
    int other = a;
    a = b;
    b = other;
}
int main() {
    
    Point p1(5, 5);
    imprimirPoint(p1);
    modificar(9, 2, p1);
    imprimirPoint(p1);

    Point p2(5, 6);
    Point &ref = p2;

    p2.print();
    return 0;

    int a = 10;
    int b = 20;
}