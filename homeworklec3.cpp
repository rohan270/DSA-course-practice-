#include<iostream>
using namespace std;
int main (){
    cout<<"Enter the charachter : ";
    char ch;
    cin>>ch;
    if (ch<=122&&ch>=97){
        cout<<"Lowercase";
    }
    else if (ch>=65&&ch<=90){
        cout << "Uppercase";

    }
    else if (ch>=48&&ch<=57){
        cout<<"This is a number";
    }
}