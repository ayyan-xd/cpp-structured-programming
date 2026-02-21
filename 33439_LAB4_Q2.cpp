#include<iostream>
using namespace std;

int main(){
    int in, count=0;
    int i;
    while(in>=0){
        cout<<"Enter the number : ";
        cin>>in;
        if(in<0)
            break;
        cout<<"****************************"<<endl;
        i=0;    
        while(i<in){
            cout<<"CSE141 Exam is in week 09"<<endl;
            count++;   
            i++ ;
        }
        
    }
    cout<<"The Message was displayed "<<count<<" times.";
}
