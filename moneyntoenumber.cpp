#include<iostream>
using namespace std;
int main (){
    int money;
    cin>>money;
    int num = 1;
    switch(num){
        case 1: cout<<"number of 100 notes are : "<<(money/100)<<endl;
                money = money%100;
                
        case 2: cout<<"number of 50 notes are : "<<(money/50)<<endl;
                money = money%50;
        
        case 3: cout<<"number of 20 notes are : "<<(money/20)<<endl;
                money = money%20;
        
        case 4: cout<<"number of 1 notes are : "<<(money/1)<<endl;
                break;

    }
}