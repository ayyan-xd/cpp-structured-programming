#include<iostream>
using namespace std;

const int totalseats=500;

void showmenu(){
    cout<<"\n*******************\n";
    cout<<"1. Purchase tickets \n";
    cout<<"2. Display information \n";
    cout<<"3. Exit \n";
    cout<<"Enter your choice : ";
}

void purchaseticket(int &freeseats ,double &totalincome){
    int tickets;
    cout<<"How many tickets would you like to buy :";
    cin>>tickets;
    if(tickets>freeseats){
        cout<<"sorry available seats are "<<freeseats<<endl;
        return;
    }
    int sop,jun;
    cout<<"How many sophos : ";
    cin>>sop;
    cout<<"How many juniors : ";
    cin>>jun;

    if(sop +jun != tickets){
        cout<<"mismatch split";
    }
    double amount;  
    amount=sop*100 +jun*50;
    
    if(tickets>3)
      amount*=0.8;

    totalincome += amount;
    freeseats-=tickets;
}

void displayinfo(int freeseats , double totalincome){
    cout<<"Free Seats :"<<freeseats<<endl;
    cout<<"Total income :"<<totalincome<<endl;
}

int main(){
    int freeseats=totalseats;
    double totalincome=0;
    int choice;

    do{
        showmenu();
        cin>>choice;

        switch (choice)
        {
        case 1:
            purchaseticket(freeseats,totalincome);
           
            break;
        case 2:
            displayinfo(freeseats ,totalincome);
            break;
        case 3:
            cout<<"Exiting.... ";
            break;    
        default:
            cout<<"Invalid Choice plese Try again :";
            break;
        }
    }while (choice!=3);
    
    return 0;    
}
