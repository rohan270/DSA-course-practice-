#include <iostream>
using namespace std;
int main (){
    int i = 1;
    int n ;
    cout << "Enter the number of rows and columns :" ;
    cin >> n;
    while (i<=n){
        int j = 1;
        while (j<=n){
            cout << i;
            j++;

        }
        i++;
        cout << endl;
    }
}