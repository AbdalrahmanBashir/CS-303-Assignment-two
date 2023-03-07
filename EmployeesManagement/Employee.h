#pragma once
#include <string>
class Employee
{
public:
    // Constructor that takes a name and ID as arguments
    Employee(const std::string& name, int id);
    ~Employee();
    // Virtual member function to calculate weekly salary
    virtual double calculateWeeklySalary() const = 0;
    // Virtual member function to calculate health care contributions
    virtual double calculateHealthCareContributions() const = 0;
    // Virtual member function to calculate vacation days earned
    virtual int calculateVacationDays() const = 0;

protected:
    std::string name_;
    int id_;
};


