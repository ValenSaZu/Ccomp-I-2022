//Factors

#include <iostream>

int main(){
    int n1=3,n2=4,n3=24;
    int mult= n1*n2;

    using namespace std;
    
    if ((n3%mult) == 0){
        cout<<"El número "<<n1<<" y el número "<<n2<<" son factores de "<<n3;
        }
    else{
        cout<<"Los números "<<n1<<" y "<<n2<<" no son factores de "<<n3;
    }
return 0;
}