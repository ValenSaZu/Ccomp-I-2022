#include <iostream>

using namespace std;

int main(){
    int arreglo [5];
    arreglo [0] = 5;
    arreglo [1] = 4;
    arreglo [2] = 3;
    arreglo [3] = 80;
    arreglo [4] = 11;
    
    int arreglo_2[5] = {6, 5, 8, 9, 10};

    for (int i = 0; i<5; ++i){
        cout<< arreglo [i] << endl;
    }
    
    for (int i = 0; i<5; ++i){
        cout<< arreglo_2 [i] << endl;
    }
    return 0;
}