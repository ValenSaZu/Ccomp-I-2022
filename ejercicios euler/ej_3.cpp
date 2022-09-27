#include <iostream>

#include <iostream>

unsigned long long numero_primo(unsigned long long num){
    for (int counter{2};counter< num/2; counter++){
        if (num%counter==0){
            return 0; }
        if (num == 2){
            return num; }
    }
    return num;
}

unsigned long long mayor_factor_primo(unsigned long long n){
    unsigned long long mayor{0};
    unsigned long long counter{2};
    while (counter< n){
        if (n%counter==0 && numero_primo(counter)!=0){
            mayor = counter;
            }
    ++counter;
    }
    return mayor;
}

int main(){
    std::cout<<mayor_factor_primo(600851475143);
}

//6857
