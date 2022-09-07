//Maximal heart rate calculator

#include <iostream>

int main(){
    using namespace std;
    int age{0};
    cout<<"Ingrese su edad: ";
    cin>>age;

    float MHR_1 = 220 - age;
    float MHR_2 = 208 - 0.7*age;
    float MHR_3 = 207 - 0.7*age;
    float MHR_4 = 211 - 0.64*age;
    float largest{0}, smallest{0};

    if (MHR_1<=MHR_2) {
        if (MHR_1<=MHR_3){
            if(MHR_1<=MHR_4){
                smallest = MHR_1;
            }
            else if (MHR_4<MHR_1){
                smallest = MHR_4;
            }
        }
        else if (MHR_3<MHR_1){
            if (MHR_3<=MHR_4){
                smallest = MHR_3;
            }
            else if (MHR_4<MHR_3){
                smallest = MHR_4;
            }
        }
    }
    else if (MHR_2<MHR_1){
        if (MHR_2<=MHR_3){
            if(MHR_2<=MHR_4){
                smallest = MHR_2;
            }
            else if (MHR_4<MHR_2){
                smallest = MHR_4;
            }
        }
        else if (MHR_3<MHR_2){
            if (MHR_3<=MHR_4){
                smallest = MHR_3;
            }
            else if (MHR_4<MHR_3){
                smallest = MHR_4;
            }
        }
    }

    if (MHR_1>=MHR_2){
        if (MHR_1>=MHR_3){
            if(MHR_1>=MHR_4){
                largest = MHR_1;
            }
            else if (MHR_4>MHR_1){
                largest = MHR_4;
            }
        }
        else if (MHR_3>MHR_1){
            if (MHR_3>=MHR_4){
                largest = MHR_3;
            }
            else if (MHR_4>MHR_3){
                largest = MHR_4;
            }
        }
    }
    else if (MHR_2>MHR_1){
        if (MHR_2>=MHR_3){
            if(MHR_2>=MHR_4){
                largest = MHR_2;
            }
            else if (MHR_4>MHR_2){
                largest = MHR_4;
            }
        }
        else if (MHR_3>MHR_2){
            if (MHR_3>=MHR_4){
                largest = MHR_3;
            }
            }
            else if (MHR_4>MHR_3){
                largest = MHR_4;
            }
        }
    cout << " Tu MHR es: "<<smallest<< " a "<<largest;
    return 0;
    }