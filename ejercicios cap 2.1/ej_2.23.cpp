//Largest and smallest integers

#include <iostream>

int main(){
    int n1{3},n2{4},n3{5},n4{10},n5{12};
    int largest{0}, smallest{0};

    using namespace std;

    if (n1>=n2){
        if (n1>=n3){
            if(n1>=n4){
                if(n1>=n5){
                    largest = n1;
                }
                else {
                    largest = n5;
                }
            }
            else if (n4>n1){
                if(n4>=n5){
                    largest = n4;
                }
                else{
                    largest = n5;
                }
            }
        }
        else if (n3>n1){
            if (n3>=n4){
                if (n3>=n5){
                    largest = n3;
                }
                else{
                    largest = n5;
                }
            }
            else if (n4>n3){
                if (n4>=n5){
                    largest = n4;
                }
                else {
                    largest = n5;
                }
            }
        }
    }
    else if (n2>n1){
        if (n2>=n3){
            if(n2>=n4){
                if(n2>=n5){
                    largest = n2;
                }
                else {
                    largest = n5;
                }
            }
            else if (n4>n2){
                if(n4>=n5){
                    largest = n4;
                }
                else{
                    largest = n5;
                }
            }
        }
        else if (n3>n2){
            if (n3>=n4){
                if (n3>=n5){
                    largest = n3;
                }
                else{
                    largest = n5;
                }
            }
            else if (n4>n3){
                if (n4>=n5){
                    largest = n4;
                }
                else {
                    largest = n5;
                }
            }
        }
    }
    cout<<"El número más largo es: "<<largest<<endl;
    if (n1<=n2){
        if (n1<=n3){
            if(n1<=n4){
                if(n1<=n5){
                    smallest = n1;
                }
                else {
                    smallest = n5;
                }
            }
            else if (n4<n1){
                if(n4<=n5){
                    smallest = n4;
                }
                else{
                    smallest = n5;
                }
            }
        }
        else if (n3<n1){
            if (n3<=n4){
                if (n3<=n5){
                    smallest = n3;
                }
                else{
                    smallest = n5;
                }
            }
            else if (n4<n3){
                if (n4<=n5){
                    smallest = n4;
                }
                else {
                    smallest = n5;
                }
            }
        }
    }
    else if (n2<n1){
        if (n2<=n3){
            if(n2<=n4){
                if(n2<=n5){
                    smallest = n2;
                }
                else {
                    smallest = n5;
                }
            }
            else if (n4<n2){
                if(n4<=n5){
                    smallest = n4;
                }
                else{
                    smallest = n5;
                }
            }
        }
        else if (n3<n2){
            if (n3<=n4){
                if (n3<=n5){
                    smallest = n3;
                }
                else{
                    smallest = n5;
                }
            }
            else if (n4<n3){
                if (n4<=n5){
                    smallest = n4;
                }
                else {
                    smallest = n5;
                }
            }
        }
    }
    cout<<"El número más corto es: "<<smallest;
return 0;
}

//gg facilito