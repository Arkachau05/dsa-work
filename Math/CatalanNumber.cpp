#include <bits/stdc++.h>
using namespace std;

int catalan(int n){//3
    if (n == 0 || n == 1)  // Base cases C(0) = 1, C(1) = 1
        return 1;
   int result=0;
  for(int i=0;i<n;i++){ //012
    result+=(catalan(i)*catalan(n-i-1));//c0*c(2)--c2--c1
  }
  return result;
}
int  main(){
    int n=3;
    //for catalan number we need to find the cn=c0cn-1+cicn-i-1......cn-i-1c0+cn-ic0
    cout<<(catalan(n));
}