#include <iostream>
#include <math.h>
using namespace std;
int numero_primo(int num){
    for (int counter{2};counter< num/2; counter++){
        if (num%counter==0){
            return 0; }
        if (num == 2){
            return num; }
    }
    return num;
}

int multiplica(int n,int x){
    int mult{1};
    int result{0};
    while (mult<=n){
        mult*=x;
        result+=1;
    }
    return result-1;
}

int smallest_multiple(int n){
    int result{1};
    for(int counter{2}; counter<=n; ++counter){
        if (Primo(counter)!=0){
            int x =multiplica(n,counter);
            result*=pow(counter,x);
        }
    }
    return result;
}

int main(){
    cout<<smallest_multiple(20);
}

//232792560
