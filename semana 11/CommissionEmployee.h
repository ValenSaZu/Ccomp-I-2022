#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
using namespace std;

class CommissionEmployee {
    public:
    CommissionEmployee(const string&, const string&, 
        const string&, double = 0.0, double = 0.0);
    
    void setFirstName(const string&);
    string getFirstName() const;

    void setLastName(const string&);
    string getLastName() const;

    void setSocialSecurityNumber(const string&);
    string getSocialSecurityNumber() const;

    void setGrossSales(double);
    double getGrossSales() const;

    void setCommissionRate(double);
    double getCommissionRate() const;

    double earnings() const;
    string toString() const;

    /*virtual double earnings();
    virtual std::string toString() const; */

    protected:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage

};

#endif