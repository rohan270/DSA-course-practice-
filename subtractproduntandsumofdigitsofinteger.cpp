#include<iostream>
using namespace std;
int main (){
    int sum = 0;
    int product = 1;
    int bit;
    int num;
    cout << "Enter the number :";
    cin >> num;
    while (num!=0){
        bit = num % 10;
        sum =sum + bit;
        product = product * bit;
        num =num / 10;
    }
    cout << "The answer is :"<<product - sum << endl;
}