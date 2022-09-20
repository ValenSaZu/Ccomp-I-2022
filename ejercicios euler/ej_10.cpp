#include <iostream>
long long Primo(long long num){
    long long int sum{0};
    for (long long counter{2};counter<num; ++counter){
        if (num%counter==0){
            return 0;}
    }
    return num;
}

int main(){
    long long sum = 0;
    for (long long num{2};num<2000000; ++num){
        sum+=Primo(num);
    }
    std::cout<<sum;
    return 0;
}

//142913828922
