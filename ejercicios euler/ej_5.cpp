#include <iostream>
#include <math.h>
using namespace std;
int Primo(int num){
    int sum{0};
    for (int counter{2};counter<num; ++counter){
        if(num==2){
            return 2;
        }
        if (num%counter==0){
            return 0;}
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
    return result;
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
    cout<<smallest_multiple(10);
}
