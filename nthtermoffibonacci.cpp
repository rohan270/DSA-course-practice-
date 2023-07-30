#include <iostream>
using namespace std;
int fibonacci (int n){
  
  if (n==1){
    cout<< "The "<<n<<"st term of fibonacci series is :" << "0";
  }
  else if (n==2){
    cout << "The "<<n<<"nd term of fibonacci series is :"<< "1";

  }
  else if (n>2){
    int a = 0, b=1;
  }  
  while (i==n){
    int a=0, b=1;
    int c = a + b;
    a=b;
    b=c;
    cout<< "The "<< n << " term is :" << c;
  
  }
    
  
  i++;  
  return fibonacci(n);

}

int main (){
  cout << "Enter the term to get its nth term :";
  int n ;
  cin >> n;
  int answer = fibonacci(n);
  cout << answer;
}