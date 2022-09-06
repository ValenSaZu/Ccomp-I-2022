//Digits of an integer

#include <iostream>

int main(){
    using namespace std;
    float weight_kg{80},heigh_kg{1.80};
    float BMI = weight_kg/(heigh_kg*heigh_kg);

    cout<<"BMI VALUES"<<endl;
    cout<<"Your BMI is "<<BMI<<endl;
    cout<<"Underweight: "<<"less than 18.5"<<endl;
    cout<<"Normal:"<<"\t\t\t between 10.5 and 24.9"<<endl;
    cout<<"Overweight:"<<"\t between 25 and 29.9"<<endl;
    cout<<"Obese: "<<"\t\t\t 30 or greater";
return 0;
}