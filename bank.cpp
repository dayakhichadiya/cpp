#include<iostream>
using namespace std;

class Account{
    int acc_no;
    char name[30];
    int deposite;
    char type[10];
    int amount;
   

    public :

    void getdetail();
    void showdata();
    void dep();
    void withdraw();
    int retacc_no();
    char retype ();
    int retdeposite();
    void printamount();
    
   
    };

void Account :: getdetail(){

cout<<"Enter the account number :"<<endl;
cin>>acc_no;
cout<<"Enter the accountant name :"<<endl;
cin>>name;
cout<<"Enter the type of the account : [saving  or  current]"<<endl;
cin>>type;
cout<<"Enter the initial amount (for saving >500  or current >1000 )"<<endl;
cin>>deposite;
}

void Account :: showdata(){
    cout<<"Account number is :"<<acc_no<<endl;
    cout<<"Name of the accountant is :"<<name<<endl;
    cout<<"Type of account :"<<type<<endl;
    cout<<"The amount is : "<<deposite<<endl;
    
}

void Account :: dep(){
    cout<<"enter the amount to deposite :"<<endl;
    cin>>amount;
    deposite+=amount;
}

void Account :: withdraw(){
    cout<<"enter the amount to withdraw :"<<endl;
    cin>>amount;
    deposite-=amount;
}

void Account :: printamount(){
    cout<<"The Total balance is : "<<amount<<endl;
}

int Account :: retacc_no(){
    return acc_no;
}

char Account :: retype(){
    return type[10];
}

int Account :: retdeposite(){
     return deposite;
}


int main(){
     int user;
    Account a1;
    a1.getdetail();
    a1.showdata();
    a1.dep();
    a1.withdraw();
    switch(user){
        case 1 :

        


    }
}