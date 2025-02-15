#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> arr={4,5,3,6,7,2,1,4,5,6,3,8,2,9,6};
    int n =arr.size();
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         if(arr[j]>arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }

    // for best case O(n) not to swap already swapped
        for(int i=0;i<n;i++){
            bool swapped=true;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            {
                swapped=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==true){
            break;
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
   
}