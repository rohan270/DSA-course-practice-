#include <iostream>
using namespace std;
int main (){
    int i = 1,count = 1;
    while (i<=4){
        int j = 1;
        while (j<=i){
            cout << count;
            j++;
        }
        count++;
        i++;
        cout<<endl;
    }
}