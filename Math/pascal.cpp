#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int r=5;
    int s=n;;
    int matrix[s][s];   
    for(int i=0;i<s;i++){
        for (int j=0;j<i+1;j++){
               if(j==0 || j==i){
                     matrix[i][j]=1;
                }
                else{
                     
                     matrix[i][j]=matrix[i-1][j-1]+matrix[i-1][j];
               }
               
        }
    }
    for(int i=0;i<s;i++){
        for(int j=0;j<i+1;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"VALUE IS"<<" "<<matrix[n-1][r-1];
}