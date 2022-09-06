// Diameter, circunference and area of a circle

#include <iostream>

int main(){
    float pi = 3.14159;
    using namespace std;
    int radio{10};

    if (radio > 0);{
        //diametro
        int diametro{0};
        diametro = 2*radio;
        //circunferencia
        int circunferencia{0};
        circunferencia = 2*pi*radio;
        //area
        int area{0};
        area= pi*(radio*radio);

        std::cout<<"El diametro de su circulo es "<< diametro << ", la circunferencia es "<<circunferencia<<" y el area es"<<area;

    }

    return 0;
}