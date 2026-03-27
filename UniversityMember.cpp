#include "UniversityMember.h"
//---------------Constructor And Destructor-------------
//Constructor:
UniversityMember::UniversityMember(string name, int memberID){
    //Initializing attributes:
    this->name = name;
    this->memberID = memberID;
}
//Destructor: 
UniversityMember::~UniversityMember(){}

//--------------Member Functions------------
//Getters:

//For Name:
string UniversityMember::getName(){
    return name;
}
//For Member ID
int UniversityMember::getMemberID(){
    return memberID;
}