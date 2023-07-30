#include <iostream>
using namespace std;
void evenorodd (){
    int num;
    cout<<"Enter the number to check for even or odd :";
    cin>>num;
    if (num==0){
        cout<<num<<" is neither even or odd";
    }
    else if (num%2==0){    
        cout<<num<<" is even";
    }
    
    else {
        cout<<num<<" is odd";
    }
} 
int main (){
    evenorodd();
    return 0;
}