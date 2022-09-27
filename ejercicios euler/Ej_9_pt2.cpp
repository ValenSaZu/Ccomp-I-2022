#include <iostream>
#include <math.h>

using namespace std;
int suma_Pythagorean_Triple(int x,int y){
    int max,min,result;
    if(x>y){
        max=x;
        min=y;
    }else{
        max=y;
        min=x;
    }
    result = (pow(max,2)-pow(min,2)) + (2*max*min) +(pow(max,2)+pow(min,2));
    return result;
}
int ProductPythagoreanTriple(int n){
    int a,b,c;
    for (int x; x<=n/4; ++x){
        for(int y; y<=x; ++y){
            if (suma_Pythagorean_Triple(x,y)==n){
                a=pow(x,2)-pow(y,2);
                b=2*x*y;
                c=pow(x,2)+pow(y,2);
            }
        }
    }
    return a*b*c;
}
int main(){
    cout<<ProductPythagoreanTriple(12);
}