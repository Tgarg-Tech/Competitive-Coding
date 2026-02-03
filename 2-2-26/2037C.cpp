#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <limits>
#include <numeric>
#include <bitset>
#include <cassert>
#include <climits>
using namespace std;

void solve(){

int n;
cin>>n;

if(n<5){
    cout << -1 << endl;
    return;
}

int even;

if(n%2==1){
    for(int i=2; i<=n; i+=2){
        if((n+i) % 3 == 0){
            even = i;
        }
    }
}
else{
    for(int i=2; i<=n; i+=2){
        if((n-1+i) % 3 == 0){
            even = i;
        }
    }
    
}

for(int i=1; i<=n; i+=2) cout << i << " ";

cout << even << " ";

for(int i=2; i<=n; i+=2){
    if (i==even) continue;
    cout << i << " ";
}
cout << endl;   
}

    


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}