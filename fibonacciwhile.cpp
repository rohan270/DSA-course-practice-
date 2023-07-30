#include <iostream>
using namespace std;
int main (){
    int a = 0;
    int b = 1;
    int c;
    cout << "Enter the number of terms of fibonacci series :";
    int n ;
    cin>>n;
    cout <<a << " ";
    cout <<b<< " ";
    int i = 1;
    while (i<=(n-2)){
        int c = a+b;
        cout <<c << " ";
        a=b;
        b=c;
        i++;
    }
    
}