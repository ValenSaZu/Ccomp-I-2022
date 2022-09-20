#include <iostream>

int encontrarPalindromo(int n){
    int palin=0;
    int num = n;
    while(num>0){
        palin=palin * 10 + (num % 10);
        num = num / 10;
        }
    
    if (n==palin){
        return n;
    }else{
        return 1;
    }
}

int palinMayor(){
    for(int a=999*999; a>=100*100; a=a-1){
        if (encontrarPalindromo(a) != 1){
            for(int b=999; b>=100; b=b-1){
                int c = a/b;
                if (c>=100 && c<=999 && a%b==0){
                    return a;
                    break;
                }
            }
        }
    }
}

int main(){
    std::cout<< palinMayor();
}
