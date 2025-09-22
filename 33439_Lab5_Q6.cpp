#include<iostream>

using namespace std;
int main(){
    float inp;
    float cse141=0;
    float cse141lab=0;
    float cse578=0;
    float avg1,avg2,avg3;
    float avg;

    for(int i=1 ;i<=10 ;i++){
        cout<<"Enter Marks for student "<<i<<" in Cse141 : ";
        cin>>inp;
        cse141+=inp;
    }
    avg1=cse141/10;
    cout<<"avg Grade in this course is : "<<avg1<<endl;

    
    for(int i=1 ;i<=10 ;i++){
        cout<<"Enter Marks for student "<<i<<" in CSE141-lab : ";
        cin>>inp;
        cse141lab+=inp;
    }
    avg2=cse141lab/10;
    cout<<"avg Grade in this course is : "<<avg2<<endl;

    
    for(int i=1 ;i<=10 ;i++){
        cout<<"Enter Marks for student "<<i<<" in CSE578 : ";
        cin>>inp;
        cse578+=inp;
    }
    avg3=cse578/10;
    cout<<"avg Grade in this course is : "<<avg3<<endl;
    avg=(avg1 + avg2 + avg3)/3;
    cout<<"Average in all Courses is : "<<avg;


}