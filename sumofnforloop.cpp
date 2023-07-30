#include <iostream>
using namespace std;
int main (){
    cout << "Enter the number of terms to get the sum of those terms :";
    int n ;
    cin>>n;
    int i = 1;
    int sum = 0;
    for (;i<=n;i++){
        sum+=i;
    }
    cout << "The sum of "<<n<<" terms is "<<sum<<endl;
}