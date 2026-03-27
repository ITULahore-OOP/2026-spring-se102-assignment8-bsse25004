#include "Staff.h"

//-------------------Constructor-------------------
Staff::Staff(string name, int memberID, double salary, AccessCard card):UniversityMember(name,memberID),card(card){
    this->salary = salary;
}

//-----------Member Functions------------
//Getter:
double Staff::getSalary(){
    return salary;
}
//Displaying the roll
void Staff::displayRole(){
    cout<<"Role: Staff"<<endl;
    cout<<"Name: "<<getName()<<endl;
    cout<<"Staff ID: "<<getMemberID()<<endl;
    cout<<"Salary :"<<salary<<endl;
}
//Displaying the card info
void Staff::displayCard(){
    cout<<"Access Card Info:"<<endl;
    card.displayCardInfo();
} 