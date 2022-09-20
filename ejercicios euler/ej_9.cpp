#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a{1};
    int b{999};
    int c{sqrt(a*a + b*b)};

    while (a<1000 && b<1000){
        if (a+b+c<1000){
            a+=1;
        }
        else if (a+b+c>1000){
            b-=1;
        }
        else if (a+b+c==1000){
            break;
        }
    }

    int total = a*b*c;
    
    cout<<total;
}