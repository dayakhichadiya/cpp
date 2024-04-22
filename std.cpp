#include<iostream>
using namespace std;

class Student{

    int marks;
    int student;
    public:

   void setdata(int student){
    cout << "Enter the Marks of the Student : "<<endl;
    cin >> marks;
   }
    void showdata(){
        cout<<"marks of student:"<<marks<<endl;
    }
    

};



int main(){
    Student s1,s2;
    s1.setdata(45);
    s2.setdata(76);

return 0;
}
