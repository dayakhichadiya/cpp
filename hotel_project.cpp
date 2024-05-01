#include<iostream>
using namespace std;

class Hotel{
    public:

    
    int user;
    int order_num;
    int meal;
    int total=0;
    int arr[5];
    int price[5]={259,59,79,69,120};
    

void getdetail(){

    
        first:

        cout<<"--------------------------------------------"<<endl;
        cout<<"For menu press 1 "<<endl;
        cout<<"For order press 2"<<endl;
        cout<<"For bill press 3"<<endl;
        cout<<"For exit press 0"<<endl;
        cout<<"--------------------------------------------"<<endl;
        cin>>user;

switch(user){
    case 1 :
    cout<<"--------------------- Menu -----------"<<endl;
    cout<<"  Items                          price"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"1. pizza                         259"<<endl;
    cout<<"2. burger                        59"<<endl;
    cout<<"3. fries                         79"<<endl;
    cout<<"4. momos                         69"<<endl; 
    cout<<"5. biryani                       120"<<endl;
    cout<<"--------------------------------------------"<<endl;

    goto first;
    break;

    case 2 :
    cout<<"--------------------- select your order ---------------------"<<endl;
    cout<<"enter your order number "<<endl;
    cin>>order_num;
    cout<<"enter the number of meal "<<endl;
    cin>>meal;
    cout<<"--------------------------------------------"<<endl;
    
    switch (order_num) {
        case 1:
         cout<<"1. pizza                         259"<<endl;
         total=total+259*meal;
        break;

        case 2:
        cout<<"2. burger                        59"<<endl;
        total=total+59*meal;
        break;

        case 3 :
        cout<<"3. fries                         79"<<endl;
        total=total+79*meal;
        break;

        case 4:
        cout<<"4. momos                         69"<<endl; 
        total=total+69*meal;
        break;

        case 5 :
        cout<<"5. biryani                       120"<<endl;
        total=total+120*meal;
        break;
        
        default:
        cout<<"invalid order number"<<endl;
    }

    goto first;
    break;
    
    case 3 :
    cout<<"--------------------- here is your bill --------------------- "<<endl;
    cout<<"Order Number     Meals           Price        Total"<<endl;
    cout<<order_num<<"\t\t"<<meal<<"\t\t"<<price[5]<<"\t\t"<<total<<endl;
   
    goto first;
    break;

    case 0 :
    cout<<"thank you for dining with us!!"<<endl;
   
}
}
};
int main() {
    Hotel h1;
    h1.getdetail();
    return 0;
}