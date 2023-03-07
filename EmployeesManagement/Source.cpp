#include<iostream>
#include"Professional.h"
#include"Nonprofessional.h"

int main() {
    // Create a Professional employee.
    Professional prof("John Smith", 560, 6000, 10);

    std::cout << "Professional employee:" << std::endl;
    std::cout << "Weekly salary: " << prof.calculateWeeklySalary() << std::endl;
    std::cout << "Health care contributions: " << prof.calculateHealthCareContributions() << std::endl;
    std::cout << "Vacation days earned: " << prof.calculateVacationDays() << std::endl << std::endl;

    // Create a Nonprofessional employee.
    Nonprofessional nonprof("Adam Smith", 570, 20, 10);
    //Set Hours worked.
    nonprof.setHoursWorked(1000);

    std::cout << "Nonprofessional employee:" << std::endl;
    std::cout << "Weekly salary: " << nonprof.calculateWeeklySalary() << std::endl;
    std::cout << "Health care contributions: " << nonprof.calculateHealthCareContributions() << std::endl;
    std::cout << "Vacation days earned: " << nonprof.calculateVacationDays() << std::endl;

    return 0;
}
