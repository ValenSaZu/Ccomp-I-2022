#include <iostream>
#include <math.h>

using namespace std;
int specialPythagoreanTriplet(int n){
    int a{1};
    int b{1};
    int c{1};
    int result;
    while (a<n){
        while (b<n){
            c=sqrt(a*a + b*b);
            if (a+b+c==n){
                result=a*b*c;
                break;
            }
        ++b;
        }
    ++a;
    }
    return result;
}

int main(){
    cout<<specialPythagoreanTriplet(12);
}
