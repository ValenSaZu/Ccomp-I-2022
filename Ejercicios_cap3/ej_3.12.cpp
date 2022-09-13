#include <iostream>

class Date {
    private:
    int month{1};
    int day;
    int year;

    public:
    
    Date (int imonth, int iday, int iyear){
        month = imonth;
        day = iday;
        year = iyear;
    }

        void setMonth(int imonth) {
            if (imonth>0 && imonth>12){
                month = imonth;
            }
        }

        int getMonth() const {
            return month;
        }

        void setDay(int iday) {
            day = iday;
        }

        int getDay() const {
            return day;
        }

        void setYear(int iyear){
            year = iyear;
        }

        int getYear(){
            return year;
        }

        void displayDate(){
            std::cout<<getDay<<" / "<<getMonth<<" / "<<getYear;
        }

};

int main(){
    Date dateToday{12,15,2000};
    dateToday.displayDate();

    return 0;
}