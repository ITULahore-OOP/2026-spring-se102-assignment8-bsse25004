#include "TutoringSession.h"

//--------------------------------Constructor------------------------
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student){
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}

//----------------Member Function--------------
//getter:
double TutoringSession::getDuration(){
    return durationMinutes;
}
//Displaying Session info
void TutoringSession::displaySession(){
    cout<<"Session ID: "<<sessionID<<endl;
    cout<<"Duration Minutes are: "<<durationMinutes<<endl;
    if(ta != nullptr){
        cout<<"Teacher Assistent: "<<ta->getName()<<endl;
    }
    if(student != nullptr){
        cout<<"Student name :"<<student->getName()<<endl ;
    }
}
//addition overloading
TutoringSession TutoringSession::operator+(const TutoringSession& other){
    return TutoringSession(this->sessionID,this->durationMinutes+other.durationMinutes,this->ta,this->student);
}

//Non Member Function
bool operator>(TutoringSession s1, TutoringSession s2){
    return s1.getDuration()>s2.getDuration();
}