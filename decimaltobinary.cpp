#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int num;
    int n ;
    cout << "Enter the number to get its binary representation :";
    cin >> num;
    n = num;
    int ans = 0;
    int i=0;
    int bit;
    
    while (num!=0){
        bit = num&1;
        ans=(bit*pow(10,i))+ans;
        num=num>>1;
        i++;
    }
    cout << "The binary representation of "<< n << " is : "<< ans;

}