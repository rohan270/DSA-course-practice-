#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int bit;
    int sum = 0,product = 1,result = 0;
    while (n!=0){
        bit = n%10;
        sum = sum + bit;
        product = product * bit;
        n = n/10;
    }
    result = product - sum;
    cout << result;
    
}