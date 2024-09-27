#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

/*
//normal recurrence function without dynamic programming
//this function will take O(2^n) time
int fib(int n ){
    if(n == 0 || n== 1) return n;
    return fib(n-1) + fib(n-2);
}
*/

//recurrence function with dynamic programming
//once a function is called , it'll store the value to dp array. and when it is again called it simply returns the stored value
//in this case this will take only O(n) time.

//TOP DOWN APPROACH

int dp[N];
int fib(int n){
    if(n == 0 || n== 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1) + fib(n-2);
}

int main()
{
    memset(dp , -1 ,sizeof(dp)); // memset will fill the dp array with -1. we cant use any other numbers like(3,4,5,...) in this memset function to fill the array.
    int n ;
    cin >> n ;
    cout << fib(n) << endl;
    /*
    // BOTTOM UP APPROACH
    dp[0] = 0 ;
    dp[1] = 1;
    for(int i = 2 ; i<= N ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    */
}
