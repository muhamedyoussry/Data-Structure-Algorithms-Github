#include <iostream>
#include <cassert>

using namespace std; 

int naiveFibonacci (int n);

int main () {
    int n = 0 ;
    cout << "Enter n: " ;
    cin >> n ; 

    cout << naiveFibonacci(n) ;
}

int naiveFibonacci (int n) {
    if ( n <= 1 ) {
        // this means that n = 0 or n = 1
        return n ;
    }
    else if  ( n > 1 ){
        // recursive function
        return naiveFibonacci(n-1) + naiveFibonacci(n-2) ; 
    }
    else {
        // to deal with worng user entry 
        cout << "please make sure that you enter a number >= 0 " << endl ; 
    }
}