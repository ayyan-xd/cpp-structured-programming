#include<iostream>
#include<random>
#include<ctime>
using namespace std;

int main(){
    int pass=0;
    int fail=0;
    while(true){
        int ans;
        srand(time(0));
        int x = rand()%10 +1;
        int y = rand()%10 +1;

        int smaller= (x<y) ? x : y;
        int larger= (x<y) ? y : x;

        cout<<smaller<<"x"<<larger<<" :";
        cin>>ans;

        if(ans==-1)
        break;
        
        if(smaller*larger==ans){
            cout <<"correct \n";
            pass++;
        }
        else{
            cout<<"wrong";
            fail++;
        }
    }
    cout<<"Fails = "<<fail<<",  Pass = "<<pass;
    return 0;
}
