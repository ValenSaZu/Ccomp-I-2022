#include <iostream>

long long Primo(long long num){
    long long int sum{0};
    for (long long counter{2};counter<num; ++counter){
        if (num%counter==0){
            return 0;}
    }
    return num;
}
long long num_primo(long long n){
    long long x{3};
    long long y{1};
    while (x>0){
        if (Primo(x)!=0){
            y+=1;
            if (y==n){
                break;
            }
        }
    x+=1;
    }
    return x;
}
int main(){
    std::cout<<num_primo(10001);
}