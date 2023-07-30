#include <iostream>
using namespace std;
int main (){
    cout << "Enter the number of terms to get the sum :" ;
    int n ;
    cin >> n;
    int sum = 0;
    int i = 0;
    while (i<=n){
        sum+=i;
        i++;
    }
    cout<<"The sum of "<<n<<" terms is "<<sum;
}