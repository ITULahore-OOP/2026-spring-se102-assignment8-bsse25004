#include "Student.h"

Student::Student(string name, int memberID, double cgpa):UniversityMember(name,memberID){
    this->cgpa = cgpa;
}
double Student::getCGPA(){
    return cgpa;
}
void Student::updateCGPA(double newCGPA){
    cgpa = newCGPA;
}
void Student::displayRole(){
    cout<<"Role: Student"<<endl;
    cout<<"Name: "<<getName()<<endl;
    cout<<"Student ID: "<<getMemberID()<<endl;
    cout<<"Student CGPA: "<<cgpa<<endl;
}