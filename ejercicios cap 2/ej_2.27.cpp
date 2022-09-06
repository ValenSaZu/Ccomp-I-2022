//Integer equivalent of a character

#include <iostream>

int main(){
    char value=10;
    using namespace std;
    /*
    cout<<("Ingrese su valor: \n");
    cin>>(value);
    */
    cout<<static_cast<int>(value);
}