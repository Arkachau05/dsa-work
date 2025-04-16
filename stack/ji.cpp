#include <bits/stdc++.h>
using namespace std;

int maxContainers(int n, int w, int maxWeight) {
    int total=n*n;
       for(int i=0;i<=total;i++){
           if((i*w)>maxWeight){
               return i-1;
               
           }
       }
      return total;
      
  }

int main() {
    int n = maxContainers(9,6,1);
    cout << n << endl;
}
