#include <iomanip>
 #include <sstream>
 #include <stdexcept>
 #include "BasePlusCommissionEmployee.h"
 using namespace std;

 // constructor
 BasePlusCommissionEmployee::BasePlusCommissionEmployee(
 const string& first, const string& last, const string& ssn,
 double sales, double rate, double salary)
 // explicitly call base-class constructor
 {
 setBaseSalary(salary); // validate and store base salary
 }

 // set base salary
 void BasePlusCommissionEmployee::setBaseSalary(double salary) {
 if (salary < 0.0) {
 throw invalid_argument("Salary must be >= 0.0");
 } 
 baseSalary = salary;
 }

 // return base salary
 double BasePlusCommissionEmployee::getBaseSalary() const {
 return baseSalary;
 }

 // calculate earnings
 double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + (commissionRate * grossSales);
 }

 // returns string representation of BasePlusCommissionEmployee object
 string BasePlusCommissionEmployee::toString() const {
 ostringstream output;
 output << fixed << setprecision(2); // two digits of precision
output << "base-salaried commission employee: " << firstName << ' '
 << lastName << "\nsocial security number: " << socialSecurityNumber
 << "\ngross sales: " << grossSales
 << "\ncommission rate: " << commissionRate
 << "\nbase salary: " << baseSalary; 
  return output.str();
  } 