#include <iostream>

int encontrarPalindromo(int num){
    int palin=0;
    while(num>0){
        palin=palin * 10 + (num % 10);
        num = num / 10;
        }
    
    if (num==palin){
        return num;
    }else{
        return 1;
    }
}

int palinMayor(){
    for(int a=99*99; a>=10*10; a=a-1){
        if (encontrarPalindromo(a) != 1){
            for(int b=99; b>=10; b=b-1){
                int c = a/b;
                if (c>=10 && c<=99){
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