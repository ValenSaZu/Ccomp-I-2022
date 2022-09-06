//Largest and smallest integers

#include <iostream>

int main(){
    int n1{3},n2{4}, sum{n1+n2};

    using namespace std;

    if (n1%2==0){
        cout<<"El número "<<n1<<" es par"<<endl;
    }
    else{
        cout<<"El número "<<n1<<" es impar"<<endl;
    }

    if (n2%2==0){
        cout<<"El número "<<n2<<" es par"<<endl;
    }
    else{
        cout<<"El número "<<n2<<" es impar"<<endl;
    }

    if (sum%2==0){
        cout<<"La suma de "<<n1<<" y "<<n2<<" es par"<<endl;
    }
    else{
        cout<<"La suma de "<<n1<<" y "<<n2<<" es impar"<<endl;
    }
return 0;
}