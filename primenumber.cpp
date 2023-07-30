#include<iostream>
using namespace std;
int main (){
    cout << "Enter the number to check for prime number or not :";
    int n ;
    cin >> n;
    int count = 2;
    int remainder;
    int check;
    for (;count < n;count++){
        remainder = n%count;
        if (remainder == 0){
            check++;
            

        }
        else{
            continue;
            
        }
    }
    if (check>0){
        cout<<"Not a prime";
    }
    else {
        cout<<"Prime";
    }

}