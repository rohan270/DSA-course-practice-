#include<iostream>
using namespace std;
int main (){
    char name[10];
    int count;
    cout<<"Enter the name :";
    cin>>name;
    for (int i = 0;name[i]!='\0';i++){
        count++;
    }
    cout<<count;
    return 0;
}