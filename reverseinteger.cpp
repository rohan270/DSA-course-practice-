#include <iostream>
using namespace std;
int main (){
    cout <<"Enter the number to get its reverse integer :";
    
    int num;
    int digit;
    cin >> num;
    int n = num;
    int ans = 0;
    while (num!=0){
        digit=num%10;
        ans = digit+(10*ans);
        num=num/10;

    }
    cout<< "The reverse of "<<n<<" entered number is "<<ans<<endl;
}