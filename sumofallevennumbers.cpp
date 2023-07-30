#include <iostream>
using namespace std;
int main(){
    int n,i=0,sum;
    cout<<"Enter the number for range";
    cin>>n;
    while (n>=i){
        sum = sum + i ;
        i+=2;
    }
    cout<<"The sum of even numbers is : "<<sum;
}