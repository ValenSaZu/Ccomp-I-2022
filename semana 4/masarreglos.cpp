#include <iostream>
#include "class_point.h"

using namespace std;
void printArray (const int array[], int tam){
	cout << "[";
	for(int i{0}; i<tam; i++){
		cout<<array[i]<<" ";
	cout <<"]"<<endl;
    }
}
void intercambio(int &a, int &b){
    int other = a;
    a = b;
    b = other;
}

void bsort(int array[],int tam) {
    for (int i{0}; i < tam; i++){
        for(int j=i+1; j<tam; j++){
            if (array[i] > array[j]){
                intercambio (array[i], array[j]);
            }
        }
    }
}


void printArrayPoint (const Point array[], int tam){
	cout << "[";
	for(int i=0; i<tam; i++){
		array[i].print();
	cout <<"]"<<endl;
    }
}
void intercambioPoint(Point &a, Point &b){
    Point other = a;
    a = b;
    b = other;
}
void bsortPoint (Point array[],int tam) {
    for (int i{0}; i < tam; i++){
        for(int j=i+1; j<tam; j++){
            if (array[i].getX() > array[j].getX()){
                intercambioPoint (array[i], array[j]);
            }
        }
    }
}

int main() {
	int arreglo[] = {5,7,10,3,5};

//sizeof retorna el tamaño en bytes del dato

	int tam = sizeof(arreglo) / sizeof(arreglo[0]);

	printArray(arreglo , tam);


    Point p1(0,0);
    Point p2(2,5);
    Point p3(3,9);
    Point p4(4,7);
    Point p5(6,2);


    Point arr[]={p1, p2, p3, p4, p5};
    int tam = sizeof(arr)/sizeof(arr[0]);

    printArrayPoint(arr,tam);

	return 0;
}