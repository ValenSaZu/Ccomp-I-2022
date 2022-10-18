/* forma de declarar puntero   int* ptr, contador;   y puntero que apunta a la nada nullptr
variables que almacena direcciones de memoria
OPERADOR DE DIRECCION &:

int y{5};
int* yPtr{nullptr},  declaración del puntero
yPtr = &y  asignamos la dirección de almacenamiento de y a &yptr(el puntero) el puntero apunta a la variable
puntero de puntero

lvalue variable(tiene dirección de memoria asociado) rvalue valor, el operador de direccion debe ser un lvalue

OPERADOR DE INDIRECCION *: operador de referencia

retorna un lvalue, o sea a lo que apunta
por ejemplo: yPtr es un alias para y

*/

#include <iostream>

using namespace std;

int main(){
    int y {100};

    int* yPtr{nullptr};

    int& yRef{y};

    yPtr = &y;

    cout<<yPtr<<endl;
    cout<<&y<<endl;
    cout<<*yPtr<<endl; //imprime 100
    *yPtr = 1000; //estamos asignando un nuevo valor para y
    cout<<y<<endl;


    int a {7};
    int* aPtr{&a};
    cout<<"La dirección de la variable a es: "<<&a
        <<"\nEl valor de aPtr es: "<<aPtr;
    cout<<"\nEl valor de a es: "<<a
        <<"\nEl valor de *aPtr es: "<<*aPtr<<endl;

    return 0;
}