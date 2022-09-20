#include <iostream>

unsigned long long int numero_primo(unsigned long long int num){
    unsigned long long int sum{0};
    for (unsigned long long int counter{1};counter<=num; counter=counter+1){
        if (num%counter==0){
            sum=sum+1;}
    }
    if (sum==2){
        return num;
    }
    else{
        return 0;
    }
}

int main(){
    unsigned long long int sum = 0;
    unsigned long long int num = 2;
    while (num<2000000){
        sum+=numero_primo(num);
        num=num+1;
    }

    std::cout<<sum;
    return 0;
}

//142913828922