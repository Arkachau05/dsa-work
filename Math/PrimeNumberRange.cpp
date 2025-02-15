#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if (n < 2) return false; 
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
     return true;
}
int  main(){
    int N=10,M=1;
    for(int i=M;i<=N;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}