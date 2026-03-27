#include "AccessCard.h"

//--------------Constructor-----------------
AccessCard::AccessCard(string cardID, int accessLevel){
    this->accessLevel = accessLevel;
    this->cardID = cardID; 
}
//------------- Member Function------------

//Displaying Card Info
void AccessCard::displayCardInfo(){
    cout<<"Card ID is: "<<cardID<<endl;
    cout<<"Access Level: ";
    if(accessLevel==1){
        cout<<"(Basic Access)";
    }
    else if(accessLevel==2){
        cout<<"(Lab Access)";
    }
    else{
        cout<<"(Wrong Access)";
    }
}
//--------------Getters-------------
//Get card's ID
string AccessCard::getCardID(){
    return cardID;  
}
//Get Access Level
int AccessCard::getAccessLevel(){
    return accessLevel;
}
