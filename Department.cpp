#include "Department.h"

Department::Department(string departmentName){
    memberCount = 0;
    this->departmentName = departmentName;
}
void Department::addMember(UniversityMember* member){
    if(memberCount<50){
        members[memberCount] = member;
        memberCount++;
        return;
    }
    cout<<"Department is full can not add more members"<<endl;
}
void Department::displayAllRoles(){
    cout<<"Department Name is "<<departmentName<<endl;
    for(int i=0;i<memberCount;i++){
        members[i]->displayRole();
    }
}