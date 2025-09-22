#include<iostream>
using namespace std;

int main(){
    long long a , b;

    cout<<"Enter the first number : ";
    cin>>a;
    
    cout<<"Enter the second number : ";
    cin>>b;

    while(a!=b ){
        
            
        
        
        a=a>>2;
        cout<<"first number : "<<a<<endl;
        b=b*b;
        cout<<"Second number : "<<b<<endl;
        cout<<"***************"<<endl;
        if(a<=0||b<=0)
            break;
    }
}