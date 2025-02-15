#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n=3;int sum=0;
    int arr[n+1];
    arr[1]=1;
    arr[0]=1;
    for(int i=2;i<n+1;i++){
         arr[i]=0;
         for(int j=0;j<i;j++){
            arr[i]+=arr[j]*arr[i-j-1];
         }
    }
    cout<<arr[n];
}
//first create an array
// then traverse the array fron 2 to n-1
//assign the value of 0 and 1st catalan number
// store the ith index as 0 
//then inside again a loop from 0 to i where we will calulate the values 
// then calulate the values sum by multiplyig 
// cj*c(n-j-1) indexes
