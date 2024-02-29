#include<iostream>
using namespace std;
int main (){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int start = 0,end = str.size()-1;
    for (;start<end;){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    cout<<str;
    

}