#include <iostream>
using namespace std;
int main (){
    int i =65;
    while(i<=68){
        int j = 1;
        while (j<=4){
            cout << (char)i;
            j++;
        }
        i++;
        cout<<endl; 
    }
}