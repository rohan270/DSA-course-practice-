#include <iostream>
using namespace std;
int main (){
    int i = 65;
    while (i<=67){
        int j = 1;
        while (j<=3){
            cout<<char(i+j-1);
            j++;

        }
        i++;
        cout<<endl;
    }
}