#include <iostream>

unsigned long long int numero_primo(unsigned long long int num){
    unsigned long long int sum{0};
    for (int counter{1};counter<=num; counter=counter+1){
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

unsigned long long int mayor_factor_primo(unsigned long long int n){
    unsigned long long int mayor{0};
    unsigned long long int counter{2};
    unsigned long long int factor{0};
    while (counter<=n){
        if (n%counter==0){
            factor=numero_primo(counter);
            if (factor>mayor){
                mayor = counter;
            }
        }
    counter=counter+1;
    }
    return mayor;
}

int main(){
    std::cout<<mayor_factor_primo(600851475143);
}

//6857