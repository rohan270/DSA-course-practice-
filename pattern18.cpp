#include<iostream>
using namespace std;
int main (){
    int i = 1;
    int n ;
    cin>>n;
    while (i<=n){
        int j = 1;
        while (j<=(i-1)){
            cout<<" ";
            j++;
        }
        int k = 1;
        while (k<=(n-i+1)){
            cout<<i;
            k++;
        }
        i++;
        cout << endl;
    }
}