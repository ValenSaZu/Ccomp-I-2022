#include <iostream>

using namespace std;

int main(){
    int x = 100;
    int &rf = x;

    cout << rf << endl;
    rf++;
    cout << x << endl;
    cout << x++ << endl;
    cout << ++rf <<endl;

    return 0;
}