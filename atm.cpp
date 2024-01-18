#include <iostream>
using namespace std;
int main(){
    int pin=1400;
    cout<<"WELCOME TO IES BANK"<<endl;
    cout<<endl;
    cout<<"ENTER YOUR ATM PIN"<<endl;
    int atmpin;
    cin>>atmpin;
    if(atmpin==pin){
        cout<<"Press 1 - For Balance enquiry "<<endl;
        cout<<"Press 2 - For PIN change "<<endl;
        cout<<"Press 3 - For Mini Statement "<<endl;
        cout<<"Press 4 - For Money withdraw "<<endl;
        cout<<endl;
    }
    else{
        cout<<"Incorrect Atm pin"<<endl;
        cout<<endl;
    }
     int newPin;
    int accBalance=5000;
    int no;
    cin>>no;
    switch (no)
    {
    case 1:
        cout<<"Your current Balance is = "<<accBalance<<endl;
        break;
    
     case 2:
        cout<<"Enter your old pin"<<endl;
        int oldPin;
       
        cin>>oldPin;
        if(oldPin==pin){
            cout<<"Enter New Pin"<<endl;
            cin>>newPin;
        }
        cout<<"Your new PIN changed to "<<newPin<<endl;
       break;

     case 3:
        cout<<"Mini Statement :-"<<endl;
        cout<<__DATE__<<endl;
        cout<<"Starting Balance "<<accBalance<<endl;
        cout<<"500 send to x"<<endl;
        cout<<"Current Balance= "<<accBalance-500<<endl;
        cout<<endl;
        cout<<"17 jan 2024"<<endl;
        cout<<"Starting Balance "<<accBalance-500<<endl;
        cout<<"500 send to y"<<endl;
        cout<<"Current Balance= "<<accBalance-500-500<<endl;
        break;

     case 4:
        cout<<"Enter the amount you want to withdraw"<<endl;
        int amount;
        cin>>amount;
        cout<<"Collect Balance"<<endl;
        accBalance-=amount;
        cout<<"Your remaining balance ="<<accBalance<<endl;

        break;
    
    default:
        cout<<"Please Enter a valid no between 1-4"<<endl;
        break;
    }
     
     
return 0;
}