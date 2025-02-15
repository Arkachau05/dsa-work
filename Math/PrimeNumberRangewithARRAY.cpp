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
    
    int n=10,m=1;
    vector<bool>num(n+1,true);
    num[1]=false;
    num[0]=false;

    for(int i=2;i*i<n;i++){
        if(num[i]==true){
             for(int j=2;i*j<=n;j++){
                num[i*j]=false;
             }
        }
    }
    for(int i=m;i<num.size();i++){
        if(num[i]){
            cout<<i<<" ";
        }
    }
}