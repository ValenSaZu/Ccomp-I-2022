#include <iostream>

int numero_primo(int num){
    unsigned int sum{0};
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

int mayor_factor_primo(unsigned long long int n){
    int mayor{0};
    int counter{2};
    int factor{0};
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