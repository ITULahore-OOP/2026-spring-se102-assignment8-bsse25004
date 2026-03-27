#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H

#include "Student.h"
#include "Staff.h"
#include "AccessCard.h"
#include <iostream>
#include <string>
using namespace std;

class TeachingAssistant:public Student,public Staff{
    int workingHours;
    public:
    TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);
    void displayRole() override;
};
#endif