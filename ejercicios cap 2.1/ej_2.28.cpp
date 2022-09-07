//Digits of an integer

#include <iostream>

int main(){
    using namespace std;
    int numero{0};
    cout<<"Ingrese cuatro numeros: ";
    cin>>numero;

    if (numero >= 1000){
        int n1 = numero/1000;
        numero  = numero - n1*1000;
        int n2 = numero/100;
        numero = numero - n2*100;
        int n3 = numero/10;
        numero = numero - n3*10;
        int n4 = numero;
        cout<<n4<<"  "<<n3<<"  "<<n2<<"  "<<n1;
    }

return 0;
}