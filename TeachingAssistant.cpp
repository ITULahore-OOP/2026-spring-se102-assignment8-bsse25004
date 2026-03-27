#include "TeachingAssistant.h"

//------------------------Constructor--------------------
TeachingAssistant::TeachingAssistant(string name, int memberID, double cgpa, double salary, 
                AccessCard card, int workingHours):Staff(name,memberID,salary,card),
                Student(name,memberID,cgpa),UniversityMember(name,memberID){
    this->workingHours = workingHours;
}

//-----------------Member Function-----------------

//Grading Assignment in scores
void TeachingAssistant::gradeAssignment(int score){
    cout<<"numeric score: "<<score<<"/100"<<endl;
}
//Grading Assignment in letters
void TeachingAssistant::gradeAssignment(string letterGrade){
    cout<<"letter grade: "<<letterGrade<<endl;
}
//Overriding the base class function
void TeachingAssistant::displayRole(){
    //Dispalying the information of TA
    cout<<"Role: Teaching Assistant"<<endl;
    cout<<"Name "<<getName()<<endl;
    cout<<"ID "<<getMemberID()<<endl;
    cout<<"CGPA "<<getCGPA()<<endl;
    cout<<"Salary "<<getSalary()<<endl;
    cout<<"Working Hours "<<workingHours<<endl;
}