#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=70; int i =3;
cout<<(70>>1)<<endl;//right shift
cout<<(70<<1)<<endl;//left shift
if(((n>>i-1)&1)==1){
     int bitmusk=((1<<i-1));
  cout<<(bitmusk);
// cout<<(n^bitmusk)<<endl;
cout<<(n& ~bitmusk);
}else{
    int bitmusk=((1<<i-1));
cout<<(n|bitmusk)<<endl;
}
    
}