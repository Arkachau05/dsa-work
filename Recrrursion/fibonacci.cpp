#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<0) return n;
    if(n==1) return 1;
    if(n==0) return 0;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int num=5;
    
    cout<<fibo(num-1)+fibo(num-2) << endl; 
    cout<<fibo(num) << endl; // This will print the 5th Fibonacci number
}
