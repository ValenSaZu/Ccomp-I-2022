//Car-pool Savings Calculator

#include <iostream>

int main(){
    using namespace std;
    float miles_driven{0}, cost_gallon{0}, miles_per_gallon{0};
    float parking{0}, tolls_day{0};
    float cost_toll{13.5};
    cout<<"Please enter the total miles you drive per day: ";
    cin>> miles_driven;
    cout<<"Cost per gallon of gasoline: ";
    cin>> cost_gallon;
    cout<<"Average miles per gallon: ";
    cin>> miles_per_gallon;
    cout<<"Parking fees per day: ";
    cin>> parking;
    cout<<"Tolls per day: ";
    cin>> tolls_day;

    float gasoline_gallon = miles_driven/miles_per_gallon;
    float cost_gasoline = cost_gallon*gasoline_gallon;
    float tolls = tolls_day*cost_toll;

    float cost_driving = cost_gasoline + tolls + parking;

    cout<< "Your cost per day of driving to work is "<<cost_driving;

    return 0;
}

