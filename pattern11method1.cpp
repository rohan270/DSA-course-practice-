#include <iostream>
using namespace std;
int main (){
    int i = 1;
    char count = 65;
    while (i<=4){
        int j = 1;
        while (j<=4){
            cout<<count;
            j++;
        }
        i++;
        cout << endl;
        count++;
    }
}