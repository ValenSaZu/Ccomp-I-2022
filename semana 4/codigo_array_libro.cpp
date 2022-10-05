#include <string>
#include <array>
#include <iostream>
#include <iomanip>

class GradeBook {
    public:

    static const size_t students{10};

    GradeBook(const std::string& name,
        const std::array<int, students > & gradesArray)
        : courseName{name}, grades{gradesArray}{
        }
    
    void setCourseName (const std::string& name){
        courseName = name;
    }

    const std:: string& getCourseName() const {
        return courseName;
    }

    void displayMessage() const {
        std::cout<<std::setprecision(2)<<std::fixed;
        std::cout<<"\nClass average is "<<getAverage()<<std::endl;

        std::cout<<"Lowest grade is "<<getMinimum()
            << "\nHighest grade is "<<getMaximum()<<std::endl;
        
        outputBarChart():
    }

    int getMinimum() const {
        int lowGrade{100};

        for (int grade : grades) {
            if (grade < lowGrade){
                lowGrade = grade;
            }
        }
        return lowGrade;
    }
}