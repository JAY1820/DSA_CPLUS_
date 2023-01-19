#include<iostream>
using namespace std;
// 0 -> Not a Prime no.
// 1 -> Prime no.

bool isPrime(int n ) {
   for(int i = 2; i < n; i++){
       if(n % i == 0) {
       //divide hogya h , not a prime no.
          return 0;
        }
   }
   return 1;  //prime no
}

int main() {
   
   int n ;
   cin >> n;
   if(isPrime(n)) {
        cout <<" no. a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;

   }
}