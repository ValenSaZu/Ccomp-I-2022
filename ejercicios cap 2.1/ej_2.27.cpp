//Integer equivalent of a character

#include <iostream>

int main(){
    char value;
    using namespace std;
    cout<<("Ingrese su valor: \n");
    cin>>value;
    cout<<static_cast<int>(value)<<endl;

    return 0
}