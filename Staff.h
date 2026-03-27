#ifndef STAFF_H
#define STAFF_H

#include "AccessCard.h"
#include "UniversityMember.h"
#include <iostream>
#include <string>
using namespace std;

class Staff:public virtual UniversityMember{
    double salary;
    AccessCard card;
    public:
    Staff(string name, int memberID, double salary, AccessCard card);
    double getSalary();
    void displayRole() override;
    void displayCard();
};
#endif