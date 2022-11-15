#include <iostream>
#include "Point.h"

using namespace std;

int main(){

    Point<float> fpoint(2.3, 6.5);

    cout << fpoint.getX() << fpoint.getY() <<endl;
    
    return 0;
}