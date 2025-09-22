#include<iostream>
using namespace std;

int main(){
    int num;
    int pos=0,neg=0,range=0;
    do{
        cout<<"Enter number : ";
        cin>>num;
        if(num<15 || num>25){
        if(num%2!=0){
            cout<<"Square of the given number is : "<<num*num<<endl;
            if(num>0){
                pos++;
            }
            else if(num<0){
                neg++;
            }

            if(num>=100 &&num<=200){
                range++;
            }
        }}
    }while(num<15 || num>25);
    cout<<"Positive entries = : "<<pos<<endl;
    cout<<"Negative entries = : "<<neg<<endl;
    cout<<"Entries in range 100-200 : "<<range<<endl;
}