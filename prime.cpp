#include <iostream>
using namespace std;
bool prime (){
    int num;
    cout<<"Enter the number to check for prime :";
    cin>>num;
    for (int i = 2;i<num;i++){
        if (num%i==0){      
            return 1;      
        }
        else {
            return 0;
        }
    }
}
int main(){
    if(prime()){
        cout<<"Not a prime number :";
    }
    else {
        cout<<"prime number";
    }
}