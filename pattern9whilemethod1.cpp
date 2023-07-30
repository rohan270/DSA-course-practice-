#include <iostream>
using namespace std;
int main (){
    int i=1;
    while (i<=5){
        int j=1;
        int count = i;
        while (j<=i){
            cout<<count;
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}