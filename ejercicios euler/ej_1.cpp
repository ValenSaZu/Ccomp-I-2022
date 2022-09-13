#include <iostream>

int main(){
    int sum=0;
    int num=1;

    while (num<1000){
        if (num%3==0 || num%5==0){
            sum += num;
        }
        num= num+1;
    }

    std::cout<< sum;
    return 0;
}