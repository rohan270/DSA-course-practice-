#include <iostream>
using namespace std;
int main (){
    int i = 1;
    int n ;
    cin>>n;
    while (i<=n){
        int j = 1;
        char start = 'A'+j+i-2;
        while (j<=n){
            cout<<start;
            j++;
            start++;
        }
        i++;
        cout<<endl;
    }
}