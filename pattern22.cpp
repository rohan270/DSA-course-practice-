#include <iostream>
using namespace std;
int main (){
    int n , i = 1;
    
    cin>>n;
    while(i<=n){
        int j = 1;
        while (j<=(n-i)){
            cout<<" ";
            j++;
        }
        int k = 1;
        while (k<=i){
            cout << k;
            k++;
        }
        int l = 1;
        int a = i;
        while (l<=(i-1)){
            cout<<(a-1);
            a--;
            l++;
        }
        i++;
        
        cout<<endl;
    }
}