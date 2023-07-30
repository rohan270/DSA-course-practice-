#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout<<"Enter the first operand :"<<endl;
    cin>>a;
    cout << "Enter the second operand :"<<endl;
    cin>>b;
    cout<<"Enter the operation you want to perform :"<<endl;
    char ch;
    cin>>ch;
    switch (ch){
        case '+': cout << "answer is "<<(a+b)<<endl;
                  break;
        case '-': cout << "answer is "<<(a-b)<<endl;
                  break;
        case '*': cout<<"answer is "<<(a*b)<<endl;
                  break; 
    }
}