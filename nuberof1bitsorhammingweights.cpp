#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter the number :";
    cin >> num;
    int count;
    bool parameter;
    while(num!=0){
        parameter = num & 1;
        if (parameter==1){
            count++;
            num=num>>1;
        }
        else{
            num=num>>1;
            continue;
        }
        
    }
    cout << "The number of 1 bits is :"<<count;
}