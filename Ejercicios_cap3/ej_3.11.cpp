#include <iostream>
#include <string>

using namespace std;

class Motorvehicle {
    private:

        string make_a;
        string fuel;
        int year{1};
        string color_vehicle;
        int e_capacity;    
    
    public:

        Motorvehicle(string make, string fuelType, int yearofManufacture, string color, int engineCapacity)
        {
            make_a = make;
            fuel = fuelType;
            year = yearofManufacture;
            color_vehicle = color;
            e_capacity = engineCapacity;
        
        }
        void setMake(string make){
            make_a = make;
        }
        string getMake() const {
            return make_a;
        }

        void setFuelType(string fuelType){
            fuel = fuelType;
        }

        string getFuelType() const {
            return fuel;
        }

        void setYearofManufacture(int yearofManufacture) {
            if (yearofManufacture >0){
                year = yearofManufacture;
            }
        }

        int getYearofManufacture() const {
            return year;
        }

        void setColor(string color){
            color_vehicle = color;
        }

        string getColor(){
            return color_vehicle;
        }

        void setEngineCapacity(int engineCapacity){
            e_capacity = engineCapacity;
        }

        int getEngineCapacity() const {
            return e_capacity;
        }
        
        void displayCarDetails() {
            cout<<"Make: "<<getMake<<"\nFuel type: "<<getFuelType<<"\nYear of manufacture: "
            <<getYearofManufacture<<"\nColor: "<<getColor<<"\nEngine Capacity: "<<getEngineCapacity;
        }
};

int main(){
    Motorvehicle motorvehicle1{"a","a",2000,"blue",500};
    motorvehicle1.displayCarDetails();

    return 0;
}