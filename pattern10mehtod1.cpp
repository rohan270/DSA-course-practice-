#include <iostream>
using namespace std;
int main (){
    int i = 1;
    int count;
    while (i<=5){
        int j = 1;
        count = i;
        while (j<=i){
            cout<<count<<" ";
            count--;
            j++;
        }
        i++;
        cout<<endl;
    }
}