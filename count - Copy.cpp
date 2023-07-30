#include <iostream>
using namespace std;
void count (){
    int n ;
    cout<<"Enter the number to count to :";
    cin>>n;
    for (int i = 1;i<=n;i++){
        cout << i <<" ";
    }
}
int main (){
    count();
}