#include <iostream>
using namespace std;
bool iseven(){
    int num;
    cout<<"enter the number :";
    cin >> num;
    if (num&1){
        return 0;
    }
    else {
        return 1;
    }
}
int main (){
    if (iseven()){
        cout<<"Even";
    }
    else {
        cout<<"Odd";
    }
    return 0;
}