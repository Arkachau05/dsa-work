#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 3, 6, 7, 2, 1, 4, 5, 6, 3, 8, 2, 9, 6};
    int n = arr.size();

  
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int k = 1; k < n; k++) {
        prefix[k] = prefix[k - 1] + arr[k];
    }

    int i = 2, j = 5;
    int result;
    
    if (i == 0) result = prefix[j];
    else result = prefix[j] - prefix[i - 1];

    cout << result << endl;

    return 0;
}
//first create a prefix array
//the put the sum 
//then check it 
